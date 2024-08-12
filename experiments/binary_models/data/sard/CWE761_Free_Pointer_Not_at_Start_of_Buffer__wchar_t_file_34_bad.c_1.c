#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SEARCH_CHAR VAR5''
typedef union
{
    wchar_t * VAR6;
    wchar_t * VAR7;
} VAR8;
void FUN1()
{
    wchar_t * VAR9;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_34_unionType VAR10;
    VAR9 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR9 == NULL) {FUN2(-1);}
    VAR9[0] = VAR5'';
    {
        size_t VAR11 = wcslen(VAR9);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR4, "");
            if (VAR13 != NULL)
            {
                if (FUN3(VAR9+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR9[VAR11] = VAR5'';
                }
                fclose(VAR13);
            }
        }
    }
    VAR10.VAR6 = VAR9;
    {
        wchar_t * VAR9 = VAR10.VAR7;
        for (; *VAR9 != VAR5''; VAR9++)
        {
            if (*VAR9 == VAR14)
            {
                break;
            }
        }
        free(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}