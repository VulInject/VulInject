#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
void FUN1()
{
    char * VAR7;
    char VAR8[250] = "";
    VAR7 = VAR8;
    if(VAR9==5)
    {
        {
            size_t VAR10 = strlen(VAR7);
            if (250-VAR10 > 1)
            {
                if (fgets(VAR7+VAR10, (int)(250-VAR10), stdin) != NULL)
                {
                    VAR10 = strlen(VAR7);
                    if (VAR10 > 0 && VAR7[VAR10-1] == '')
                    {
                        VAR7[VAR10-1] = '';
                    }
                }
                else
                {
                    VAR7[VAR10] = '';
                }
            }
        }
    }
    FUN2(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}