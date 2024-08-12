#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
int VAR6 = 5;
void FUN1(wchar_t * VAR7, ...)
{
    {
        wchar_t VAR8[100] = VAR5"";
        va_list VAR9;
        FUN2(VAR9, VAR7);
        _vsnwprintf(VAR8, 100-1, VAR7, VAR9);
        FUN3(VAR9);
        FUN4(VAR8);
    }
}
void FUN5()
{
    wchar_t * VAR7;
    wchar_t VAR10[100] = VAR5"";
    VAR7 = VAR10;
    if(VAR6==5)
    {
        {
            size_t VAR11 = wcslen(VAR7);
            wchar_t * VAR12 = FUN6(VAR13);
            if (VAR12 != NULL)
            {
                wcsncat(VAR7+VAR11, VAR12, 100-VAR11-1);
            }
        }
    }
    if(VAR6==5)
    {
        FUN1(VAR7, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}