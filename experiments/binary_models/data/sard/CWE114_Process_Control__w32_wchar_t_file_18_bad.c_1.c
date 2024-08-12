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
    goto VAR9;
VAR9:
    {
        size_t VAR10 = wcslen(VAR6);
        VAR11 * VAR12;
        if (100-VAR10 > 1)
        {
            VAR12 = fopen(VAR4, "");
            if (VAR12 != NULL)
            {
                if (FUN2(VAR6+VAR10, (int)(100-VAR10), VAR12) == NULL)
                {
                    VAR6[VAR10] = VAR8'';
                }
                fclose(VAR12);
            }
        }
    }
    {
        HMODULE VAR13;
        VAR13 = LoadLibraryW(VAR6);
        if (VAR13 != NULL)
        {
            FUN3(VAR13);
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