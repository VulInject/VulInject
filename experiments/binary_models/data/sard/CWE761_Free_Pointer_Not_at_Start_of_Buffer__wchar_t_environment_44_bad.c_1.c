#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#define SEARCH_CHAR VAR4''
void FUN1(wchar_t * VAR5)
{
    for (; *VAR5 != VAR4''; VAR5++)
    {
        if (*VAR5 == VAR6)
        {
            break;
        }
    }
    free(VAR5);
}
void FUN2()
{
    wchar_t * VAR5;
    void (*VAR7) (wchar_t *) = VAR8;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN3(-1);}
    VAR5[0] = VAR4'';
    {
        size_t VAR9 = wcslen(VAR5);
        wchar_t * VAR10 = FUN4(VAR11);
        if (VAR10 != NULL)
        {
            wcsncat(VAR5+VAR9, VAR10, 100-VAR9-1);
        }
    }
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}