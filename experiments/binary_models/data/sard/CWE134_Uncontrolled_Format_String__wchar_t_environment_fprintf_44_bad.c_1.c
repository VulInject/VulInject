#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1(wchar_t * VAR5)
{
    fwprintf(VAR6, VAR5);
}
void FUN2()
{
    wchar_t * VAR5;
    void (*VAR7) (wchar_t *) = VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR5 = VAR9;
    {
        size_t VAR10 = wcslen(VAR5);
        wchar_t * VAR11 = FUN3(VAR12);
        if (VAR11 != NULL)
        {
            wcsncat(VAR5+VAR10, VAR11, 100-VAR10-1);
        }
    }
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}