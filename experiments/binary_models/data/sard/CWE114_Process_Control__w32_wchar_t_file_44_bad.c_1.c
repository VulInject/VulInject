#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
void FUN1(wchar_t * VAR6)
{
    {
        HMODULE VAR7;
        VAR7 = LoadLibraryW(VAR6);
        if (VAR7 != NULL)
        {
            FUN2(VAR7);
        }
        else
        {
        }
    }
}
void FUN3()
{
    wchar_t * VAR6;
    void (*VAR8) (wchar_t *) = VAR9;
    wchar_t VAR10[100] = VAR11"";
    VAR6 = VAR10;
    {
        size_t VAR12 = wcslen(VAR6);
        VAR13 * VAR14;
        if (100-VAR12 > 1)
        {
            VAR14 = fopen(VAR4, "");
            if (VAR14 != NULL)
            {
                if (FUN4(VAR6+VAR12, (int)(100-VAR12), VAR14) == NULL)
                {
                    VAR6[VAR12] = VAR11'';
                }
                fclose(VAR14);
            }
        }
    }
    FUN5(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}