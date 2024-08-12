#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SEARCH_CHAR VAR5''
wchar_t * FUN1(wchar_t * VAR6)
{
    {
        size_t VAR7 = wcslen(VAR6);
        VAR8 * VAR9;
        if (100-VAR7 > 1)
        {
            VAR9 = fopen(VAR4, "");
            if (VAR9 != NULL)
            {
                if (FUN2(VAR6+VAR7, (int)(100-VAR7), VAR9) == NULL)
                {
                    VAR6[VAR7] = VAR5'';
                }
                fclose(VAR9);
            }
        }
    }
    return VAR6;
}
void FUN3()
{
    wchar_t * VAR6;
    VAR6 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR6 == NULL) {FUN4(-1);}
    VAR6[0] = VAR5'';
    VAR6 = FUN1(VAR6);
    for (; *VAR6 != VAR5''; VAR6++)
    {
        if (*VAR6 == VAR10)
        {
            break;
        }
    }
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}