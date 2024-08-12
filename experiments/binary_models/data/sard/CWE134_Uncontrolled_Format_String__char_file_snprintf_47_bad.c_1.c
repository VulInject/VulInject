#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    if(FUN2())
    {
        {
            size_t VAR7 = strlen(VAR5);
            VAR8 * VAR9;
            if (100-VAR7 > 1)
            {
                VAR9 = fopen(VAR4, "");
                if (VAR9 != NULL)
                {
                    if (fgets(VAR5+VAR7, (int)(100-VAR7), VAR9) == NULL)
                    {
                        VAR5[VAR7] = '';
                    }
                    fclose(VAR9);
                }
            }
        }
    }
    else
    {
        strcpy(VAR5, "");
    }
    if(FUN2())
    {
        {
            char VAR10[100] = "";
            FUN3(VAR10, 100-1, VAR5);
            FUN4(VAR10);
        }
    }
    else
    {
        {
            char VAR10[100] = "";
            FUN3(VAR10, 100-1, "", VAR5);
            FUN4(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}