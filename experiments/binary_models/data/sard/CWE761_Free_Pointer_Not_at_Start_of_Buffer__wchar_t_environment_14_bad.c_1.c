#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#define SEARCH_CHAR VAR4''
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    VAR5[0] = VAR4'';
    {
        size_t VAR6 = wcslen(VAR5);
        wchar_t * VAR7 = FUN3(VAR8);
        if (VAR7 != NULL)
        {
            wcsncat(VAR5+VAR6, VAR7, 100-VAR6-1);
        }
    }
    if(VAR9==5)
    {
        for (; *VAR5 != VAR4''; VAR5++)
        {
            if (*VAR5 == VAR10)
            {
                break;
            }
        }
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}