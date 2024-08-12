#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SEARCH_CHAR VAR5''
void FUN1()
{
    wchar_t * VAR6;
    wchar_t * *VAR7 = &VAR6;
    wchar_t * *VAR8 = &VAR6;
    VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = VAR5'';
    {
        wchar_t * VAR6 = *VAR7;
        {
            size_t VAR9 = wcslen(VAR6);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (FUN3(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR6[VAR9] = VAR5'';
                    }
                    fclose(VAR11);
                }
            }
        }
        *VAR7 = VAR6;
    }
    {
        wchar_t * VAR6 = *VAR8;
        for (; *VAR6 != VAR5''; VAR6++)
        {
            if (*VAR6 == VAR12)
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