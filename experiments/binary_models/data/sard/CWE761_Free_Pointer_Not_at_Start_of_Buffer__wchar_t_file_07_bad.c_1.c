#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SEARCH_CHAR VAR5''
int VAR6 = 5;
void FUN1()
{
    wchar_t * VAR7;
    VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = VAR5'';
    {
        size_t VAR8 = wcslen(VAR7);
        VAR9 * VAR10;
        if (100-VAR8 > 1)
        {
            VAR10 = fopen(VAR4, "");
            if (VAR10 != NULL)
            {
                if (FUN3(VAR7+VAR8, (int)(100-VAR8), VAR10) == NULL)
                {
                    VAR7[VAR8] = VAR5'';
                }
                fclose(VAR10);
            }
        }
    }
    if(VAR6==5)
    {
        for (; *VAR7 != VAR5''; VAR7++)
        {
            if (*VAR7 == VAR11)
            {
                break;
            }
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}