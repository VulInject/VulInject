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
    if(FUN2())
    {
        {
            size_t VAR7 = wcslen(VAR5);
            wchar_t * VAR8 = FUN3(VAR9);
            if (VAR8 != NULL)
            {
                wcsncat(VAR5+VAR7, VAR8, 100-VAR7-1);
            }
        }
    }
    if(FUN2())
    {
        fwprintf(VAR10, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}