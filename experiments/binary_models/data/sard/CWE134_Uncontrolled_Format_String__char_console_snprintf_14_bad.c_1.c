#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    if(VAR6==5)
    {
        {
            size_t VAR7 = strlen(VAR4);
            if (100-VAR7 > 1)
            {
                if (fgets(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
                {
                    VAR7 = strlen(VAR4);
                    if (VAR7 > 0 && VAR4[VAR7-1] == '')
                    {
                        VAR4[VAR7-1] = '';
                    }
                }
                else
                {
                    VAR4[VAR7] = '';
                }
            }
        }
    }
    if(VAR6==5)
    {
        {
            char VAR8[100] = "";
            FUN2(VAR8, 100-1, VAR4);
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}