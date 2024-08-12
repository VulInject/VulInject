#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
void FUN1(wchar_t * VAR6, ...)
{
    {
        wchar_t VAR7[100] = VAR5"";
        va_list VAR8;
        FUN2(VAR8, VAR6);
        _vsnwprintf(VAR7, 100-1, VAR6, VAR8);
        FUN3(VAR8);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t * *VAR9 = &VAR6;
    wchar_t * *VAR10 = &VAR6;
    wchar_t VAR11[100] = VAR5"";
    VAR6 = VAR11;
    {
        wchar_t * VAR6 = *VAR9;
        {
            size_t VAR12 = wcslen(VAR6);
            wchar_t * VAR13 = FUN6(VAR14);
            if (VAR13 != NULL)
            {
                wcsncat(VAR6+VAR12, VAR13, 100-VAR12-1);
            }
        }
        *VAR9 = VAR6;
    }
    {
        wchar_t * VAR6 = *VAR10;
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}