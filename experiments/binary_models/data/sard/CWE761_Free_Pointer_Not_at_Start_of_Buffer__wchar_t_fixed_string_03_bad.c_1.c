#VAR1 ""
#VAR1 <VAR2.VAR3>
#define BAD_SOURCE_FIXED_STRING VAR4"" 
#define SEARCH_CHAR VAR4''
void FUN1()
{
    wchar_t * VAR5;
    VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (VAR5 == NULL) {FUN2(-1);}
    VAR5[0] = VAR4'';
    wcscpy(VAR5, VAR6);
    if(5==5)
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
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}