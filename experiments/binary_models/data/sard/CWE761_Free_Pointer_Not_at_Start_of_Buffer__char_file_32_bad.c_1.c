#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define VAR5 ''
void FUN1()
{
    char * VAR6;
    char * *VAR7 = &VAR6;
    char * *VAR8 = &VAR6;
    VAR6 = (char *)malloc(100*sizeof(char));
    if (VAR6 == NULL) {FUN2(-1);}
    VAR6[0] = '';
    {
        char * VAR6 = *VAR7;
        {
            size_t VAR9 = strlen(VAR6);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (fgets(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR6[VAR9] = '';
                    }
                    fclose(VAR11);
                }
            }
        }
        *VAR7 = VAR6;
    }
    {
        char * VAR6 = *VAR8;
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