#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    while(1)
    {
        {
            size_t VAR8 = wcslen(VAR5);
            if (100-VAR8 > 1)
            {
                if (FUN2(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = wcslen(VAR5);
                    if (VAR8 > 0 && VAR5[VAR8-1] == VAR7'')
                    {
                        VAR5[VAR8-1] = VAR7'';
                    }
                }
                else
                {
                    VAR5[VAR8] = VAR7'';
                }
            }
        }
        break;
    }
    {
        HMODULE VAR9;
        VAR9 = LoadLibraryW(VAR5);
        if (VAR9 != NULL)
        {
            FUN3(VAR9);
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