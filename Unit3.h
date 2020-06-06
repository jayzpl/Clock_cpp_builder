//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class WatekDrugi : public TThread
{            
private:
protected:
        void __fastcall Execute();
public:
        __fastcall WatekDrugi(bool CreateSuspended);
        void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
 