#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ''
int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    VAR6 = (char *)malloc(100*sizeof(char));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = '';
    {
        size_t VAR7 = strlen(VAR6);
        if (100-VAR7 > 1)
        {
            if (fgets(VAR6+VAR7, (int)(100-VAR7), stdin) != NULL)
            {
                VAR7 = strlen(VAR6);
                if (VAR7 > 0 && VAR6[VAR7-1] == '')
                {
                    VAR6[VAR7-1] = '';
                }
            }
            else
            {
                VAR6[VAR7] = '';
            }
        }
    }
    if(VAR5==5)
    {
        for (; *VAR6 != ''; VAR6++)
        {
            if (*VAR6 == VAR4)
            {
                break;
            }
        }
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}