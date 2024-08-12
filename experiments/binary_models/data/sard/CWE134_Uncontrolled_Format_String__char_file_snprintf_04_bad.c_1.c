#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR5)
    {
        {
            size_t VAR9 = strlen(VAR7);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (fgets(VAR7+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR7[VAR9] = '';
                    }
                    fclose(VAR11);
                }
            }
        }
    }
    if(VAR5)
    {
        {
            char VAR12[100] = "";
            FUN2(VAR12, 100-1, VAR7);
            FUN3(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}