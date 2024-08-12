#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR4"";
    VAR6 = VAR7;
    if(FUN2())
    {
        {
            size_t VAR8 = wcslen(VAR6);
            wchar_t * VAR9 = FUN3(VAR10);
            if (VAR9 != NULL)
            {
                wcsncat(VAR6+VAR8, VAR9, 100-VAR8-1);
            }
        }
    }
    else
    {
        wcscpy(VAR6, VAR4"");
    }
    {
        HMODULE VAR11;
        VAR11 = LoadLibraryW(VAR6);
        if (VAR11 != NULL)
        {
            FUN4(VAR11);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}