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
        FUN3(VAR8, VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t VAR9[100] = VAR5"";
    VAR6 = VAR9;
    {
        size_t VAR10 = wcslen(VAR6);
        wchar_t * VAR11 = FUN6(VAR12);
        if (VAR11 != NULL)
        {
            wcsncat(VAR6+VAR10, VAR11, 100-VAR10-1);
        }
    }
    {
        wchar_t * VAR13 = VAR6;
        wchar_t * VAR6 = VAR13;
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}