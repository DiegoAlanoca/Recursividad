//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "recursv.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void PaseDescendente(TStringGrid *v, byte i, byte n)
{
    if (i >= n - 1) // Caso Base
        return;
    else // Caso General
    {
        if (StrToInt(v->Cells[i][0]) < StrToInt(v->Cells[i+1][0])) // Condición
        {
            String aux = v->Cells[i][0];
            v->Cells[i][0] = v->Cells[i+1][0];
            v->Cells[i+1][0] = aux;
        }
		PaseDescendente(v, i + 1, n);
    }
}

void BurbujaDescendente(TStringGrid *v, byte n)
{
    if (n <= 1) // Caso Base
        return;
    else // Caso General
    {
        PaseDescendente(v, 0, n);
        BurbujaDescendente(v, n - 1);
    }
}

void PaseAscendente(TStringGrid *v, byte i, byte n)
{
    if (i >= n - 1) // Caso Base
        return;
    else // Caso General
    {
        if (StrToInt(v->Cells[i][0]) > StrToInt(v->Cells[i+1][0])) // Condición
		{
            String aux = v->Cells[i][0];
            v->Cells[i][0] = v->Cells[i+1][0];
            v->Cells[i+1][0] = aux;
        }
		PaseAscendente(v, i + 1, n);
    }
}

void BurbujaAscendente(TStringGrid *v, byte n)
{
    if (n <= 1) // Caso Base
        return;
    else // Caso General
	{
		PaseAscendente(v, 0, n);
        BurbujaAscendente(v, n - 1);
	}
}

int SumaVector(TStringGrid *v, byte n)
{
    int s;
    if (n == 0) // Caso Base
        s = 0;
    else // Caso General
    {
        s = SumaVector(v, n - 1) + StrToInt(v->Cells[n - 1][0]);
    }
    return s;
}

void InvertirVector(TStringGrid *v, byte a, byte b)
{
    if (a >= b) // Caso Base
        return;
    else // Caso General
    {
        String aux = v->Cells[a][0];
        v->Cells[a][0] = v->Cells[b][0];
        v->Cells[b][0] = aux;

        InvertirVector(v, a + 1, b - 1);
    }
}

AnsiString EliminarVocales(AnsiString x)
{
    AnsiString cad;
    byte m = x.Length();

    if (m == 0) // Caso Base
        cad = "";
    else // Caso General
    {
        char c = x[m];
        x.Delete(m, 1);
        char lower_c = tolower(c);

        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') // Condición
            cad = EliminarVocales(x);
        else
            cad = EliminarVocales(x) + String(c);
    }
    return cad;
}

bool BuscarEnMatriz(TStringGrid *v, byte n, int x)
{
    bool b;
    if (n == 0) // Caso Base
        b = false;
    else // Caso General
    {
        byte C = v->ColCount;

        if (StrToInt(v->Cells[(n - 1) % C][(n - 1) / C]) == x) // Condición
            b = true;
        else
            b = BuscarEnMatriz(v, n - 1, x);
    }
    return b;
}

int SumaDiagonal(TStringGrid *v, byte n) // n = Fila o Columna actual
{
    int s;
    if (n == 0) // Caso Base
        s = 0;
    else // Caso General
    {
        // En la diagonal principal x == y, por ende usamos (n-1) para ambos
        s = SumaDiagonal(v, n - 1) + StrToInt(v->Cells[n - 1][n - 1]);
    }
    return s;
}
//Funciones-------------------------------------------------------------------

Word CantNumeros(AnsiString x)
{ Word c;
 if (x=="") //1er caso base
  c=0;
 else if (x.Length()==1) //2do caso base
 {
  if (isdigit(x[1]))
   c=1;
  else
   c=0;

 } else
  {  //Caso general
  Word n=x.Length();
  Word n1=n/2;
  Word n2=n-n1;
  Word p=n1+1;
  AnsiString y=x.SubString(p,n2);
  x.Delete(p,n2);

  Word c1=CantNumeros(x);
  Word c2=CantNumeros(y);
  c=c1+c2;
   if (isdigit(x[n1])&&isdigit(y[1])) {
   --c; //c=c-1;
   }
  }

 return c;
}

void __fastcall TForm1::FuncionparacontarcantdeNumerosdeunacadena2Click(TObject *Sender)

{
 Edit3->Text=CantNumeros(Edit1->Text);
}
//---------------------------------------------------------------------------
void CargarRnd(TStringGrid *v,byte n)
{ if (n>0) //Caso General Directo porque si es 0 no hay nada que hacer
 { CargarRnd(v,n-1);
   v->Cells[n-1][0]=Random(20);
 }
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{ StringGrid1->ColCount=StrToInt(Edit1->Text);
 CargarRnd(StringGrid1,StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
void CadenaAVector(AnsiString x,TStringGrid *v, byte &n)
{ Word m;
 m=x.Length();
 if (m==0)  //1er caso base
  n=0;
 else if (m==1) { //2do caso base
  if ( isdigit(x[1]) ) {
   v->Cells[0][0]=x; n=1;
  } else
   n=0;

 }
 else //Caso general
 {
	 char z=x[m];
	 x.Delete(m,1);
	 CadenaAVector(x,v,n);
	 if ( isdigit(x[m-1])&&isdigit(z) )
	  v->Cells[n-1][0]=v->Cells[n-1][0] +z;
	 else if ( !isdigit(x[m-1])&&isdigit(z) ) {
		   v->Cells[n][0]=z; n++;
		  }

 }

}


void __fastcall TForm1::N11Cargardelasiguienteforma1Click(TObject *Sender)
{
 byte z;
 CadenaAVector(Edit1->Text,StringGrid1,z);
}
//---------------------------------------------------------------------------
void NumeroAVector(Cardinal x,TStringGrid *v,byte &n)
{ if (x<10) { //Caso Base
   v->Cells[0][0]=x; n=1;
  } else { //Caso General
   NumeroAVector(x/10,v,n);
  // if( StrToInt(v->Cells[n-1][0]) <10 ) //1 Digito
   //	v->Cells[n-1][0]=StrToInt( (v->Cells[n-1][0])*10 + x%10) ;
  // else
  //	v->Cells[n][0]=x%10; n++;

  }

}

void __fastcall TForm1::N12CargarunVectoconlosdigitos1Click(TObject *Sender)
{ byte z;
 NumeroAVector(StrToInt(Edit1->Text),StringGrid1,z);
 StringGrid1->ColCount=z;
}
//---------------------------------------------------------------------------
void CargarRndMat(TStringGrid *v,byte n)
{if (n>0) { //Caso General
  CargarRndMat(v,n-1);
  byte k=n-1; byte N=v->ColCount;
  byte f=k/N; byte c=k%N;
  v->Cells[c][f]=Random(20); //v[n-1]=Random(20)
 }
}



void __fastcall TForm1::N13CargarRandomMatriz1Click(TObject *Sender)
{ byte M,N;
 //StringGrid1->RowCount=M=StrToInt(Edit1->Text);
 //StringGrid1->ColCount=N=StrToInt(Edit2->Text);
 StringGrid2->RowCount=M=StrToInt(Edit1->Text);
 StringGrid2->ColCount=N=StrToInt(Edit2->Text);
 CargarRndMat(StringGrid2,M*N);
}
//---------------------------------------------------------------------------
int MenorMat(TStringGrid *v, byte n)
{ int m;
 if (n==0) //Pre n>0
  throw new Exception("Error:Matriz Vacia");
 else
 {
  if (n==1) //Caso Base
   m=StrToInt(v->Cells[0][0]);
   else { //Caso General
	m=MenorMat(v,n-1);
	byte N=v->ColCount;
	if ( m >v->Cells[ (n-1)%N][(n-1)/N])
	 m=StrToInt(v->Cells[ (n-1)%N][ (n-1)/N]);
   }

 }
  return m;
}


void __fastcall TForm1::N14HallarelmenordeunaMatriz1Click(TObject *Sender)
{
 Edit3->Text=IntToStr(MenorMat(StringGrid2, StringGrid2->ColCount * StringGrid2->RowCount));
}
//---------------------------------------------------------------------------
int PosMayorM(TStringGrid *v,byte n)
{ int pm;
 if (n==0)  //Pre n>0
  throw new Exception("Error:Matriz Vacia");
 else {
  if (n==1)  //Caso Base
   pm=0;
  else{ //caso General
   pm=PosMayorM(v,n-1); byte N=v->ColCount;
   if (StrToInt(v->Cells[pm %N][ pm/N])< v->Cells[ (n-1)%N][ (n-1)/N])
    pm=n-1;
  }

 }
 return pm;
}

void SelectionSortM(TStringGrid *v,byte n)
{ if (n>1) //Caso General
 { byte p=PosMayorM(v,n);
  byte N=v->ColCount;
  String aux=v->Cells[ (n-1)%N][(n-1)/N];
  v->Cells[ (n-1)%N][(n-1)/N] = v->Cells[p%N][p/N];
  v->Cells[p%N][p/N]=aux; //v[p]
  SelectionSortM(v,n-1);
  }

}

void __fastcall TForm1::N15SelectionSortMatriz1Click(TObject *Sender)
{
 SelectionSortM(StringGrid2,StringGrid2->ColCount * StringGrid2->RowCount);
}
//---------------------------------------------------------------------------

void CadenaMatriz(AnsiString x,TStringGrid *v,byte &n)
{ byte m=x.Length();
 if (m==0) //Caso Base
  n=0;
 else { //Caso General
  char z=x[m];
  x.Delete(m,1);
  //CargarMatriz(x,v,n);
  v->Cells[n%v->ColCount][n/v->ColCount]=z; //v[n]=z;
  n++;
 }

}
//---------------------------------------------------------------------------
char AbecedarioMayus(byte pos)
{AnsiString x="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 return x[pos+1];
}

void cargarvectorconlasn(TStringGrid *v,byte n,byte i)
{
  if (i<n) //Caso General
  { 
   v->Cells[i][0]=AbecedarioMayus(i);
   cargarvectorconlasn(v, n, i+1);
  }
}

void __fastcall TForm1::Modelos2Click(TObject *Sender)
{
 byte p=0;
 cargarvectorconlasn(StringGrid1,StrToInt(Edit1->Text),p); 
}
//v->Cells[Columna][Fila] comienza en 0,0
//ColCount=Numeros total de columnas
//Byte [0,255]
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
 StringGrid1->ColCount=StrToInt(Edit1->Text);
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
 StringGrid2->ColCount=StrToInt(Edit1->Text);
 StringGrid2->RowCount=StrToInt(Edit2->Text);
}
//---------------------------------------------------------------------------
AnsiString devolvervectinvert_(TStringGrid *v,int n)
{byte i; AnsiString resultado;
 resultado="";
 for (i=n-1; i>0; i--) {
  resultado=resultado+v->Cells[i][0];
  resultado=resultado+",";
 }
 resultado=resultado+v->Cells[0][0];
 return resultado;
}

AnsiString devolvervectinvert(TStringGrid *v,byte n,byte i,byte j)
{ AnsiString result;
 if (i<n) {
  result=devolvervectinvert(v,n,i+1,j-1);
  result=result+v->Cells[j][0];
 }
 return result;
}

AnsiString VectorACadena(TStringGrid *v, byte n)
{
	AnsiString cad;
	if (n == 0) // 1er Caso Base: Vector vacío
	{
	 cad = "";
    }
	else if (n == 1) // 2do Caso Base: Queda 1 solo elemento
	{
	 cad = v->Cells[0][0]; 
    }
	else // Caso General
	{
	 cad = v->Cells[n-1][0] + "," + VectorACadena(v, n-1);
    }

    return cad;
}

void __fastcall TForm1::Devolverlacadenadeunvectorinvertido1Click(TObject *Sender)
{byte p=0; byte q=StringGrid1->ColCount;
 //Edit3->Text=devolvervectinvert(StringGrid1,StrToInt(StringGrid1->ColCount),p,q);
 Edit3->Text=VectorACadena(StringGrid1,StrToInt(StringGrid1->ColCount));
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
 //Edit3->Text=StrToInt(StringGrid1->ColCount);
 //Edit3->Text=(devolvervectinvert_(StringGrid1,StrToInt(StringGrid1->ColCount)));
 BurbujaDescendente(StringGrid1,StringGrid1->ColCount);
}
//---------------------------------------------------------------------------
void GenerarMatrizSerpiente(TStringGrid *v, byte n)
{
	if (n > 0){ // Caso General n=0
		GenerarMatrizSerpiente(v, n - 1);
		byte F = v->RowCount;  // filas
		byte C = v->ColCount;  // column
		byte k = n - 1;
		byte colDer = k / F;
		byte x = (C - 1) - colDer;
        byte y;
        if (colDer % 2 == 0) 
		 y = k % F;
		else
		 y = (F - 1) - (k % F);

        v->Cells[x][y] =IntToStr(n);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Generarmatrizformadeserpiente1Click(TObject *Sender)
{
 GenerarMatrizSerpiente(StringGrid2, StringGrid2->RowCount * StringGrid2->ColCount);	
}
//---------------------------------------------------------------------------
byte PosMayorDigito(AnsiString x, byte n)
{
	byte p;
	if (n == 1) // Caso base
        p = 1;
	else        // Caso general
    {
		p = PosMayorDigito(x, n - 1);
		if (x[n] > x[p])
            p = n;
    }
    return p;
}

AnsiString OrdenarNumeroDesc(AnsiString x)
{
    AnsiString cad;
    byte m = x.Length();

	if (m <= 1) // Caso Base
	{
		cad = x;
	}
	else // Caso General
	{
		byte p = PosMayorDigito(x, m);
		char mayor = x[p];
		x.Delete(p, 1);
		cad = String(mayor) + OrdenarNumeroDesc(x);
    }
	return cad;
}
void __fastcall TForm1::Ordenarnumeros1Click(TObject *Sender)
{
 Edit3->Text = OrdenarNumeroDesc(Edit1->Text);
}
//---------------------------------------------------------------------------
bool EsPalindromo(TStringGrid *v, byte a, byte b)
{
	bool p;
	if (a >= b) // Caso Base
	 p = true;
	else // Caso General
	{
	 if (v->Cells[a][0] == v->Cells[b][0]) // Condición
	 p = EsPalindromo(v, a + 1, b - 1);
	 else
	 p = false;
	}
	return p;
}

void __fastcall TForm1::Verificarsielnumdelvectorelpalindromico1Click(TObject *Sender)
{
	byte n = StringGrid1->ColCount;
	if (EsPalindromo(StringGrid1, 0, n - 1))
		Edit3->Text = "Verdadero";
	else
		Edit3->Text = "Falso";
}

//---------------------------------------------------------------------------
void CargarMatriz(TStringGrid *v, byte n)
{
    if (n == 0) // Caso Base
        return;
    else // Caso General
    {
		CargarMatriz(v, n - 1);
		byte C = v->ColCount;
		byte k = n - 1;

		byte x = (C - 1) - (k % C);
		byte y = k / C;
        v->Cells[x][y] = IntToStr(n);
    }
}

//---------------------------------------------------------------------------}
void __fastcall TForm1::Crearmatrizinicialderechadecolumna1Click(TObject *Sender)
{
	byte n = StringGrid2->ColCount * StringGrid2->RowCount;
	CargarMatriz(StringGrid2, n);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{byte i;
 for (i=0; i<StringGrid1->ColCount; i++)
  StringGrid1->Cells[i][0]="";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{byte i; byte j;
 for (i=0; i<StringGrid2->RowCount; i++)
  for (j=0; j<StringGrid2->ColCount; j++)
  StringGrid2->Cells[i][j]="";

}
//---------------------------------------------------------------------------

