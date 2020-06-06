//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int czas=1;
int czas2=1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Label1->Caption="Watek pierwszy: "+IntToStr(czas);
czas++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
Label2->Caption="Watek drugi: "+IntToStr(czas2);
czas2++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
WatekPierwszy *mojWatek=new WatekPierwszy(true);
mojWatek->Priority=tpHigher;
mojWatek->Resume();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
WatekDrugi *mojWatek2=new WatekDrugi(true);
mojWatek2->Priority=tpHigher;
mojWatek2->Resume();
}
//---------------------------------------------------------------------------
