#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_SOURCE_FIXED_STRING VAR4"" 
#define SEARCH_CHAR VAR4''
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    wchar_t * VAR7;
    VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = VAR4'';
    wcscpy(VAR7, VAR8);
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
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}