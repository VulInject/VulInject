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
    wchar_t VAR8[100] = VAR9"";
    VAR6 = VAR8;
    {
        size_t VAR10 = wcslen(VAR6);
        VAR11 * VAR12;
        if (100-VAR10 > 1)
        {
            VAR12 = fopen(VAR4, "");
            if (VAR12 != NULL)
            {
                if (FUN4(VAR6+VAR10, (int)(100-VAR10), VAR12) == NULL)
                {
                    VAR6[VAR10] = VAR9'';
                }
                fclose(VAR12);
            }
        }
    }
    FUN1(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}