#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SEARCH_CHAR VAR4''
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_34_unionType VAR9;
    VAR8 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR8 == NULL) {FUN2(-1);}
    VAR8[0] = VAR4'';
    {
        size_t VAR10 = wcslen(VAR8);
        if (100-VAR10 > 1)
        {
            if (FUN3(VAR8+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = wcslen(VAR8);
                if (VAR10 > 0 && VAR8[VAR10-1] == VAR4'')
                {
                    VAR8[VAR10-1] = VAR4'';
                }
            }
            else
            {
                VAR8[VAR10] = VAR4'';
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        for (; *VAR8 != VAR4''; VAR8++)
        {
            if (*VAR8 == VAR11)
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