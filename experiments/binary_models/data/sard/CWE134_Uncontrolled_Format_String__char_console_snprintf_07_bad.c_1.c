#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    if(VAR4==5)
    {
        {
            size_t VAR7 = strlen(VAR5);
            if (100-VAR7 > 1)
            {
                if (fgets(VAR5+VAR7, (int)(100-VAR7), stdin) != NULL)
                {
                    VAR7 = strlen(VAR5);
                    if (VAR7 > 0 && VAR5[VAR7-1] == '')
                    {
                        VAR5[VAR7-1] = '';
                    }
                }
                else
                {
                    VAR5[VAR7] = '';
                }
            }
        }
    }
    if(VAR4==5)
    {
        {
            char VAR8[100] = "";
            FUN2(VAR8, 100-1, VAR5);
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