#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
static const int VAR6 = 5;
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR4"";
    VAR7 = VAR8;
    if(VAR6==5)
    {
        {
            size_t VAR9 = wcslen(VAR7);
            wchar_t * VAR10 = FUN2(VAR11);
            if (VAR10 != NULL)
            {
                wcsncat(VAR7+VAR9, VAR10, 100-VAR9-1);
            }
        }
    }
    {
        HMODULE VAR12;
        VAR12 = LoadLibraryW(VAR7);
        if (VAR12 != NULL)
        {
            FUN3(VAR12);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}