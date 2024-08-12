#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ''
char * FUN1(char * VAR5)
{
    {
        size_t VAR6 = strlen(VAR5);
        if (100-VAR6 > 1)
        {
            if (fgets(VAR5+VAR6, (int)(100-VAR6), stdin) != NULL)
            {
                VAR6 = strlen(VAR5);
                if (VAR6 > 0 && VAR5[VAR6-1] == '')
                {
                    VAR5[VAR6-1] = '';
                }
            }
            else
            {
                VAR5[VAR6] = '';
            }
        }
    }
    return VAR5;
}
void FUN2()
{
    char * VAR5;
    VAR5 = (char *)malloc(100*sizeof(char));
    if (VAR5 == NULL) {FUN3(-1);}
    VAR5[0] = '';
    VAR5 = FUN1(VAR5);
    for (; *VAR5 != ''; VAR5++)
    {
        if (*VAR5 == VAR4)
        {
            break;
        }
    }
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}