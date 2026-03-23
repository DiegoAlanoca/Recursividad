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

