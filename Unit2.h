//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class WatekPierwszy : public TThread
{            
private:
protected:
        void __fastcall Execute();
public:
        __fastcall WatekPierwszy(bool CreateSuspended);
        void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
 