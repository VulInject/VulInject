#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SEARCH_CHAR VAR4''
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = VAR4'';
    {
        size_t VAR8 = wcslen(VAR7);
        if (100-VAR8 > 1)
        {
            if (FUN3(VAR7+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = wcslen(VAR7);
                if (VAR8 > 0 && VAR7[VAR8-1] == VAR4'')
                {
                    VAR7[VAR8-1] = VAR4'';
                }
            }
            else
            {
                VAR7[VAR8] = VAR4'';
            }
        }
    }
    if(VAR5)
    {
        for (; *VAR7 != VAR4''; VAR7++)
        {
            if (*VAR7 == VAR9)
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