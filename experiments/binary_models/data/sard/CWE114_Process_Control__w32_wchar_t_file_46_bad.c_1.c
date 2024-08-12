#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR8"";
    VAR6 = VAR7;
    if(FUN2())
    {
        {
            size_t VAR9 = wcslen(VAR6);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (FUN3(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR6[VAR9] = VAR8'';
                    }
                    fclose(VAR11);
                }
            }
        }
    }
    {
        HMODULE VAR12;
        VAR12 = LoadLibraryW(VAR6);
        if (VAR12 != NULL)
        {
            FUN4(VAR12);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}