#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR7 = VAR8;
    if(VAR5)
    {
        {
            size_t VAR10 = wcslen(VAR7);
            if (100-VAR10 > 1)
            {
                if (FUN2(VAR7+VAR10, (int)(100-VAR10), stdin) != NULL)
                {
                    VAR10 = wcslen(VAR7);
                    if (VAR10 > 0 && VAR7[VAR10-1] == VAR9'')
                    {
                        VAR7[VAR10-1] = VAR9'';
                    }
                }
                else
                {
                    VAR7[VAR10] = VAR9'';
                }
            }
        }
    }
    {
        HMODULE VAR11;
        VAR11 = LoadLibraryW(VAR7);
        if (VAR11 != NULL)
        {
            FUN3(VAR11);
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