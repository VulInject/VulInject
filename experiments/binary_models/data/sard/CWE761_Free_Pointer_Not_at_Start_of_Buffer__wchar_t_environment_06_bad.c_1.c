#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#define SEARCH_CHAR VAR4''
static const int VAR5 = 5;
void FUN1()
{
    wchar_t * VAR6;
    VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = VAR4'';
    {
        size_t VAR7 = wcslen(VAR6);
        wchar_t * VAR8 = FUN3(VAR9);
        if (VAR8 != NULL)
        {
            wcsncat(VAR6+VAR7, VAR8, 100-VAR7-1);
        }
    }
    if(VAR5==5)
    {
        for (; *VAR6 != VAR4''; VAR6++)
        {
            if (*VAR6 == VAR10)
            {
                break;
            }
        }
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}