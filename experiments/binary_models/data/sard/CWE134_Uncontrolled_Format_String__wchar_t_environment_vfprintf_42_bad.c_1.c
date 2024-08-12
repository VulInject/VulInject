#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
wchar_t * FUN1(wchar_t * VAR6)
{
    {
        size_t VAR7 = wcslen(VAR6);
        wchar_t * VAR8 = FUN2(VAR9);
        if (VAR8 != NULL)
        {
            wcsncat(VAR6+VAR7, VAR8, 100-VAR7-1);
        }
    }
    return VAR6;
}
void FUN3(wchar_t * VAR6, ...)
{
    {
        va_list VAR10;
        FUN4(VAR10, VAR6);
        FUN5(VAR11, VAR6, VAR10);
        FUN6(VAR10);
    }
}
void FUN7()
{
    wchar_t * VAR6;
    wchar_t VAR12[100] = VAR5"";
    VAR6 = VAR12;
    VAR6 = FUN1(VAR6);
    FUN3(VAR6, VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN7();
    return 0;
}