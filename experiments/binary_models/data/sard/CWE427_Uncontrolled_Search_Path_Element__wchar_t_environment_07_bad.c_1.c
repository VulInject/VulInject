#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
int VAR7 = 5;
void FUN1()
{
    wchar_t * VAR8;
    wchar_t VAR9[250] = VAR4"";
    VAR8 = VAR9;
    if(VAR7==5)
    {
        {
            size_t VAR10 = wcslen(VAR8);
            wchar_t * VAR11 = FUN2(VAR12);
            if (VAR11 != NULL)
            {
                wcsncat(VAR8+VAR10, VAR11, 250-VAR10-1);
            }
        }
    }
    FUN3(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}