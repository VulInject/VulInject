#VAR1 ""
#VAR1 <VAR2.VAR3>
#define ENV_VARIABLE VAR4""
#define GETENV _wgetenv
#define GETENV getenv
#define SEARCH_CHAR VAR4''
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_34_unionType VAR9;
    VAR8 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = VAR4'';
    {
        size_t VAR10 = wcslen(VAR8);
        wchar_t * VAR11 = FUN3(VAR12);
        if (VAR11 != NULL)
        {
            wcsncat(VAR8+VAR10, VAR11, 100-VAR10-1);
        }
    }
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        for (; *VAR8 != VAR4''; VAR8++)
        {
            if (*VAR8 == VAR13)
            {
                break;
            }
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}