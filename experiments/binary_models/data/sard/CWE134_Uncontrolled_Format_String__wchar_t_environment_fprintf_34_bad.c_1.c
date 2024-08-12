#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_34_unionType VAR9;
    wchar_t VAR10[100] = VAR4"";
    VAR8 = VAR10;
    {
        size_t VAR11 = wcslen(VAR8);
        wchar_t * VAR12 = FUN2(VAR13);
        if (VAR12 != NULL)
        {
            wcsncat(VAR8+VAR11, VAR12, 100-VAR11-1);
        }
    }
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        fwprintf(VAR14, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}