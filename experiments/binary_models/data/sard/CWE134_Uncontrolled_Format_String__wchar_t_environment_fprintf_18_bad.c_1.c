#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR4"";
    VAR5 = VAR6;
    goto VAR7;
VAR7:
    {
        size_t VAR8 = wcslen(VAR5);
        wchar_t * VAR9 = FUN2(VAR10);
        if (VAR9 != NULL)
        {
            wcsncat(VAR5+VAR8, VAR9, 100-VAR8-1);
        }
    }
    goto VAR11;
VAR11:
    fwprintf(VAR12, VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}