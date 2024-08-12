#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#define SEARCH_CHAR VAR4''
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    VAR5[0] = VAR4'';
    {
        wchar_t * VAR5 = *VAR6;
        {
            size_t VAR8 = wcslen(VAR5);
            wchar_t * VAR9 = FUN3(VAR10);
            if (VAR9 != NULL)
            {
                wcsncat(VAR5+VAR8, VAR9, 100-VAR8-1);
            }
        }
        *VAR6 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR7;
        for (; *VAR5 != VAR4''; VAR5++)
        {
            if (*VAR5 == VAR11)
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