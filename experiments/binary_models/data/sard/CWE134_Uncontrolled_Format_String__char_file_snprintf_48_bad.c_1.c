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
    if(VAR7==5)
    {
        {
            size_t VAR8 = strlen(VAR5);
            VAR9 * VAR10;
            if (100-VAR8 > 1)
            {
                VAR10 = fopen(VAR4, "");
                if (VAR10 != NULL)
                {
                    if (fgets(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                    {
                        VAR5[VAR8] = '';
                    }
                    fclose(VAR10);
                }
            }
        }
    }
    if(VAR7==5)
    {
        {
            char VAR11[100] = "";
            FUN2(VAR11, 100-1, VAR5);
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}