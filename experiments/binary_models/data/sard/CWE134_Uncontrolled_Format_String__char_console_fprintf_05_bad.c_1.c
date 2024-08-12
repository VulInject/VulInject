#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    if(VAR4)
    {
        {
            size_t VAR8 = strlen(VAR6);
            if (100-VAR8 > 1)
            {
                if (fgets(VAR6+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = strlen(VAR6);
                    if (VAR8 > 0 && VAR6[VAR8-1] == '')
                    {
                        VAR6[VAR8-1] = '';
                    }
                }
                else
                {
                    VAR6[VAR8] = '';
                }
            }
        }
    }
    if(VAR4)
    {
        fprintf(VAR9, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}