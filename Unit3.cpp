//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(UpdateCaption);
//
//   where UpdateCaption could look like:
//
void __fastcall WatekDrugi::UpdateCaption()
     {
        Form1->Caption = "Uruchomiono watek drugi";
      }
//---------------------------------------------------------------------------

__fastcall WatekDrugi::WatekDrugi(bool CreateSuspended)
        : TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall WatekDrugi::Execute()
{
 FreeOnTerminate=true;
 Form1->Timer2->Enabled=true;
 Synchronize(UpdateCaption);
}
//---------------------------------------------------------------------------
 