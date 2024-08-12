#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define ENV_VARIABLE VAR5""
#define GETENV _wgetenv
#define GETENV getenv
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3(wchar_t * VAR6, ...)
{
    {
        wchar_t VAR7[100] = VAR5"";
        va_list VAR8;
        FUN4(VAR8, VAR6);
        _vsnwprintf(VAR7, 100-1, VAR6, VAR8);
        FUN5(VAR8);
        FUN6(VAR7);
    }
}
void FUN7()
{
    wchar_t * VAR6;
    wchar_t VAR9[100] = VAR5"";
    VAR6 = VAR9;
    if(FUN1())
    {
        {
            size_t VAR10 = wcslen(VAR6);
            wchar_t * VAR11 = FUN8(VAR12);
            if (VAR11 != NULL)
            {
                wcsncat(VAR6+VAR10, VAR11, 100-VAR10-1);
            }
        }
    }
    if(FUN1())
    {
        FUN3(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN7();
    return 0;
}