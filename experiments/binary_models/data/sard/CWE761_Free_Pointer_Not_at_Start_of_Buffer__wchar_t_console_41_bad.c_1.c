#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN3(-1);}
    VAR5[0] = VAR4'';
    {
        size_t VAR7 = wcslen(VAR5);
        if (100-VAR7 > 1)
        {
            if (FUN4(VAR5+VAR7, (int)(100-VAR7), stdin) != NULL)
            {
                VAR7 = wcslen(VAR5);
                if (VAR7 > 0 && VAR5[VAR7-1] == VAR4'')
                {
                    VAR5[VAR7-1] = VAR4'';
                }
            }
            else
            {
                VAR5[VAR7] = VAR4'';
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}