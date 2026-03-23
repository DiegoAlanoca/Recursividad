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
	void __fastcall FuncionparacontarcantdeNumerosdeunacadena2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
