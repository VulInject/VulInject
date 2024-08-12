#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
typedef union
{
    wchar_t * VAR6;
    wchar_t * VAR7;
} VAR8;
void FUN1(wchar_t * VAR9, ...)
{
    {
        va_list VAR10;
        FUN2(VAR10, VAR9);
        FUN3(VAR9, VAR10);
        FUN4(VAR10);
    }
}
void FUN5()
{
    wchar_t * VAR9;
    wchar_t VAR11[100] = VAR5"";
    VAR9 = VAR11;
    {
        size_t VAR12 = wcslen(VAR9);
        wchar_t * VAR13 = FUN6(VAR14);
        if (VAR13 != NULL)
        {
            wcsncat(VAR9+VAR12, VAR13, 100-VAR12-1);
        }
    }
    {
        wchar_t * VAR15 = VAR9;
        wchar_t * VAR9 = VAR15;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}