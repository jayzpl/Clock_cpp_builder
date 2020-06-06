//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(UpdateCaption);
//
//   where UpdateCaption could look like:
//
      void __fastcall WatekPierwszy::UpdateCaption()
      {
       Form1->Caption = "Uruchomiono pierwszy watek";
     }
//---------------------------------------------------------------------------

__fastcall WatekPierwszy::WatekPierwszy(bool CreateSuspended)
        : TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall WatekPierwszy::Execute()
{
   FreeOnTerminate=true;
 Form1->Timer1->Enabled=true;
 Synchronize(UpdateCaption);
}
//---------------------------------------------------------------------------
 