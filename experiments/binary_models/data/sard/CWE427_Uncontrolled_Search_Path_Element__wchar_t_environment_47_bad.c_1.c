#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[250] = VAR4"";
    VAR7 = VAR8;
    if(FUN2())
    {
        {
            size_t VAR9 = wcslen(VAR7);
            wchar_t * VAR10 = FUN3(VAR11);
            if (VAR10 != NULL)
            {
                wcsncat(VAR7+VAR9, VAR10, 250-VAR9-1);
            }
        }
    }
    else
    {
        wcscat(VAR7, VAR12);
    }
    FUN4(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}