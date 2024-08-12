#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SEARCH_CHAR VAR4''
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR5;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN4(-1);}
    VAR5[0] = VAR4'';
    {
        size_t VAR6 = wcslen(VAR5);
        if (100-VAR6 > 1)
        {
            if (FUN5(VAR5+VAR6, (int)(100-VAR6), stdin) != NULL)
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
    if(FUN1())
    {
        for (; *VAR5 != VAR4''; VAR5++)
        {
            if (*VAR5 == VAR7)
            {
                break;
            }
        }
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}