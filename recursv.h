//---------------------------------------------------------------------------

#ifndef recursvH
#define recursvH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label1;
	TEdit *Edit3;
	TMainMenu *MainMenu1;
	TMenuItem *FuncionparacontarcantdeNumerosdeunacadena1;
	TMenuItem *FuncionparacontarcantdeNumerosdeunacadena2;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TMenuItem *N11Cargardelasiguienteforma1;
	TMenuItem *N12CargarunVectoconlosdigitos1;
	TMenuItem *N13CargarRandomMatriz1;
	TStringGrid *StringGrid2;
	TMenuItem *N14HallarelmenordeunaMatriz1;
	TMenuItem *N15SelectionSortMatriz1;
	TMenuItem *Modelos1;
	TMenuItem *Modelos2;
	TButton *Button2;
	TButton *Button3;
	TMenuItem *Devolverlacadenadeunvectorinvertido1;
	TButton *Button4;
	TMenuItem *Generarmatrizformadeserpiente1;
	TMenuItem *Ordenarnumeros1;
	TMenuItem *Verificarsielnumdelvectorelpalindromico1;
	TMenuItem *Crearmatrizinicialderechadecolumna1;
	TButton *Button5;
	TButton *Button6;
	void __fastcall FuncionparacontarcantdeNumerosdeunacadena2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N11Cargardelasiguienteforma1Click(TObject *Sender);
	void __fastcall N12CargarunVectoconlosdigitos1Click(TObject *Sender);
	void __fastcall N13CargarRandomMatriz1Click(TObject *Sender);
	void __fastcall N14HallarelmenordeunaMatriz1Click(TObject *Sender);
	void __fastcall N15SelectionSortMatriz1Click(TObject *Sender);
	void __fastcall Modelos2Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Devolverlacadenadeunvectorinvertido1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Generarmatrizformadeserpiente1Click(TObject *Sender);
	void __fastcall Ordenarnumeros1Click(TObject *Sender);
	void __fastcall Verificarsielnumdelvectorelpalindromico1Click(TObject *Sender);
	void __fastcall Crearmatrizinicialderechadecolumna1Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
