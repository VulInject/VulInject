#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
void FUN1()
{
    char * VAR8;
    char VAR9[250] = "";
    VAR8 = VAR9;
    if(VAR10)
    {
        {
            size_t VAR11 = strlen(VAR8);
            VAR12 * VAR13;
            if (250-VAR11 > 1)
            {
                VAR13 = fopen(VAR7, "");
                if (VAR13 != NULL)
                {
                    if (fgets(VAR8+VAR11, (int)(250-VAR11), VAR13) == NULL)
                    {
                        VAR8[VAR11] = '';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    FUN2(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}