#VAR1 ""
#VAR1 <VAR2.VAR3>
#define PASSWORD VAR4""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    wchar_t * VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR8 = VAR9;
    if(FUN3())
    {
        wcscpy(VAR8, VAR10);
    }
    else
    {
        {
            size_t VAR11 = 0;
            if (FUN4(VAR8, 100, stdin) == NULL)
            {
                VAR8[0] = VAR4'';
            }
            VAR11 = wcslen(VAR8);
            if (VAR11 > 0)
            {
                VAR8[VAR11-1] = VAR4'';
            }
        }
    }
    {
        HANDLE VAR12;
        wchar_t * VAR13 = VAR4"";
        wchar_t * VAR14 = VAR4"";
        if (FUN5(
                    VAR13,
                    VAR14,
                    VAR8,
                    VAR15,
                    VAR16,
                    &VAR12) != 0)
        {
            FUN6(VAR12);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}