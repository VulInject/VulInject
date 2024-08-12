#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1(wchar_t * VAR7)
{
    FUN2(VAR7);
}
void FUN3()
{
    wchar_t * VAR7;
    void (*VAR8) (wchar_t *) = VAR9;
    wchar_t VAR10[250] = VAR4"";
    VAR7 = VAR10;
    {
        size_t VAR11 = wcslen(VAR7);
        wchar_t * VAR12 = FUN4(VAR13);
        if (VAR12 != NULL)
        {
            wcsncat(VAR7+VAR11, VAR12, 250-VAR11-1);
        }
    }
    FUN5(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}