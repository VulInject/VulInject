#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1()
{
    wchar_t * VAR8;
    wchar_t VAR9[100] = VAR4"";
    VAR8 = VAR9;
    if(VAR6)
    {
        {
            size_t VAR10 = wcslen(VAR8);
            wchar_t * VAR11 = FUN2(VAR12);
            if (VAR11 != NULL)
            {
                wcsncat(VAR8+VAR10, VAR11, 100-VAR10-1);
            }
        }
    }
    {
        HMODULE VAR13;
        VAR13 = LoadLibraryW(VAR8);
        if (VAR13 != NULL)
        {
            FUN3(VAR13);
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