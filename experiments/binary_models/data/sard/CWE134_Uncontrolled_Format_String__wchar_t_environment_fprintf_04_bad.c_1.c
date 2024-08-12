#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[100] = VAR4"";
    VAR7 = VAR8;
    if(VAR5)
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
    if(VAR5)
    {
        fwprintf(VAR12, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}