#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    if(VAR8==5)
    {
        {
            size_t VAR9 = wcslen(VAR5);
            if (100-VAR9 > 1)
            {
                if (FUN2(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR5);
                    if (VAR9 > 0 && VAR5[VAR9-1] == VAR7'')
                    {
                        VAR5[VAR9-1] = VAR7'';
                    }
                }
                else
                {
                    VAR5[VAR9] = VAR7'';
                }
            }
        }
    }
    {
        HMODULE VAR10;
        VAR10 = LoadLibraryW(VAR5);
        if (VAR10 != NULL)
        {
            FUN3(VAR10);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}