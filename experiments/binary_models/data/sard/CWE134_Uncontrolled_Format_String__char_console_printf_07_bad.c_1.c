#VAR1 ""
#VAR1 <VAR2.VAR3>
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
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}