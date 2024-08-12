#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
typedef union
{
    wchar_t * VAR6;
    wchar_t * VAR7;
} VAR8;
void FUN1()
{
    wchar_t * VAR9;
    CWE114_Process_Control__w32_wchar_t_environment_34_unionType VAR10;
    wchar_t VAR11[100] = VAR4"";
    VAR9 = VAR11;
    {
        size_t VAR12 = wcslen(VAR9);
        wchar_t * VAR13 = FUN2(VAR14);
        if (VAR13 != NULL)
        {
            wcsncat(VAR9+VAR12, VAR13, 100-VAR12-1);
        }
    }
    VAR10.VAR6 = VAR9;
    {
        wchar_t * VAR9 = VAR10.VAR7;
        {
            HMODULE VAR15;
            VAR15 = LoadLibraryW(VAR9);
            if (VAR15 != NULL)
            {
                FUN3(VAR15);
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