#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
static const int VAR8 = 1; 
static const int VAR9 = 0; 
void FUN2()
{
    wchar_t * VAR10;
    wchar_t VAR11[100] = VAR4"";
    VAR10 = VAR11;
    if(VAR8)
    {
        wcscpy(VAR10, VAR12);
    }
    {
        HANDLE VAR13;
        wchar_t * VAR14 = VAR4"";
        wchar_t * VAR15 = VAR4"";
        if (FUN3(
                    VAR14,
                    VAR15,
                    VAR10,
                    VAR16,
                    VAR17,
                    &VAR13) != 0)
        {
            FUN4(VAR13);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}