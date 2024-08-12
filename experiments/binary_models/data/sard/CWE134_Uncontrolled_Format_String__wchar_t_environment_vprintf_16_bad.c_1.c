#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1(wchar_t * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t VAR8[100] = VAR5"";
    VAR6 = VAR8;
    while(1)
    {
        {
            size_t VAR9 = wcslen(VAR6);
            wchar_t * VAR10 = FUN6(VAR11);
            if (VAR10 != NULL)
            {
                wcsncat(VAR6+VAR9, VAR10, 100-VAR9-1);
            }
        }
        break;
    }
    while(1)
    {
        FUN1(VAR6, VAR6);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}