#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SEARCH_CHAR VAR4''
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    VAR5[0] = VAR4'';
    {
        size_t VAR6 = wcslen(VAR5);
        if (100-VAR6 > 1)
        {
            if (FUN3(VAR5+VAR6, (int)(100-VAR6), stdin) != NULL)
            {
                VAR6 = wcslen(VAR5);
                if (VAR6 > 0 && VAR5[VAR6-1] == VAR4'')
                {
                    VAR5[VAR6-1] = VAR4'';
                }
            }
            else
            {
                VAR5[VAR6] = VAR4'';
            }
        }
    }
    goto VAR7;
VAR7:
    for (; *VAR5 != VAR4''; VAR5++)
    {
        if (*VAR5 == VAR8)
        {
            break;
        }
    }
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}