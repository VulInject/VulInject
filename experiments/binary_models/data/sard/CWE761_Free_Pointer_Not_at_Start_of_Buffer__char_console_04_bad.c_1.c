#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ''
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    VAR7 = (char *)malloc(100*sizeof(char));
    if (VAR7 == NULL) {FUN2(-1);}
    VAR7[0] = '';
    {
        size_t VAR8 = strlen(VAR7);
        if (100-VAR8 > 1)
        {
            if (fgets(VAR7+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = strlen(VAR7);
                if (VAR8 > 0 && VAR7[VAR8-1] == '')
                {
                    VAR7[VAR8-1] = '';
                }
            }
            else
            {
                VAR7[VAR8] = '';
            }
        }
    }
    if(VAR5)
    {
        for (; *VAR7 != ''; VAR7++)
        {
            if (*VAR7 == VAR4)
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