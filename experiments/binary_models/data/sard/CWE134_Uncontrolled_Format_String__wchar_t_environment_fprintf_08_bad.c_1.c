#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
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
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR4"";
    VAR5 = VAR6;
    if(FUN1())
    {
        {
            size_t VAR7 = wcslen(VAR5);
            wchar_t * VAR8 = FUN4(VAR9);
            if (VAR8 != NULL)
            {
                wcsncat(VAR5+VAR7, VAR8, 100-VAR7-1);
            }
        }
    }
    if(FUN1())
    {
        fwprintf(VAR10, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}