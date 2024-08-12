#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
static const int VAR8 = 1; 
static const int VAR9 = 0; 
void FUN1()
{
    char * VAR10;
    char VAR11[250] = "";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR12 = strlen(VAR10);
            VAR13 * VAR14;
            if (250-VAR12 > 1)
            {
                VAR14 = fopen(VAR7, "");
                if (VAR14 != NULL)
                {
                    if (fgets(VAR10+VAR12, (int)(250-VAR12), VAR14) == NULL)
                    {
                        VAR10[VAR12] = '';
                    }
                    fclose(VAR14);
                }
            }
        }
    }
    FUN2(VAR10);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}