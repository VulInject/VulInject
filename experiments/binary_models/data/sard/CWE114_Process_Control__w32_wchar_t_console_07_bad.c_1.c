#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR8"";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR9 = wcslen(VAR6);
            if (100-VAR9 > 1)
            {
                if (FUN2(VAR6+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR6);
                    if (VAR9 > 0 && VAR6[VAR9-1] == VAR8'')
                    {
                        VAR6[VAR9-1] = VAR8'';
                    }
                }
                else
                {
                    VAR6[VAR9] = VAR8'';
                }
            }
        }
    }
    {
        HMODULE VAR10;
        VAR10 = LoadLibraryW(VAR6);
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