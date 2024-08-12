#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define VAR5 ''
void FUN1()
{
    char * VAR6;
    VAR6 = (char *)malloc(100*sizeof(char));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = '';
    {
        size_t VAR7 = strlen(VAR6);
        VAR8 * VAR9;
        if (100-VAR7 > 1)
        {
            VAR9 = fopen(VAR4, "");
            if (VAR9 != NULL)
            {
                if (fgets(VAR6+VAR7, (int)(100-VAR7), VAR9) == NULL)
                {
                    VAR6[VAR7] = '';
                }
                fclose(VAR9);
            }
        }
    }
    if(VAR10==5)
    {
        for (; *VAR6 != ''; VAR6++)
        {
            if (*VAR6 == VAR5)
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