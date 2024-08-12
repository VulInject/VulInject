#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * *VAR7 = &VAR6;
    wchar_t * *VAR8 = &VAR6;
    wchar_t VAR9[100] = VAR10"";
    VAR6 = VAR9;
    {
        wchar_t * VAR6 = *VAR7;
        {
            size_t VAR11 = wcslen(VAR6);
            VAR12 * VAR13;
            if (100-VAR11 > 1)
            {
                VAR13 = fopen(VAR4, "");
                if (VAR13 != NULL)
                {
                    if (FUN2(VAR6+VAR11, (int)(100-VAR11), VAR13) == NULL)
                    {
                        VAR6[VAR11] = VAR10'';
                    }
                    fclose(VAR13);
                }
            }
        }
        *VAR7 = VAR6;
    }
    {
        wchar_t * VAR6 = *VAR8;
        {
            HMODULE VAR14;
            VAR14 = LoadLibraryW(VAR6);
            if (VAR14 != NULL)
            {
                FUN3(VAR14);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}