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
    wchar_t VAR7[100] = VAR4"";
    VAR5 = VAR7;
    {
        size_t VAR8 = wcslen(VAR5);
        wchar_t * VAR9 = FUN3(VAR10);
        if (VAR9 != NULL)
        {
            wcsncat(VAR5+VAR8, VAR9, 100-VAR8-1);
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}