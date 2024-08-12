#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1(wchar_t * VAR5)
{
    {
        HMODULE VAR6;
        VAR6 = LoadLibraryW(VAR5);
        if (VAR6 != NULL)
        {
            FUN2(VAR6);
        }
        else
        {
        }
    }
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR7[100] = VAR8"";
    VAR5 = VAR7;
    {
        size_t VAR9 = wcslen(VAR5);
        if (100-VAR9 > 1)
        {
            if (FUN4(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
            {
                VAR9 = wcslen(VAR5);
                if (VAR9 > 0 && VAR5[VAR9-1] == VAR8'')
                {
                    VAR5[VAR9-1] = VAR8'';
                }
            }
            else
            {
                VAR5[VAR9] = VAR8'';
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}