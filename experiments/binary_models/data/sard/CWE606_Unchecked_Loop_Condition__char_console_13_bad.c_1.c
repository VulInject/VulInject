#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
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
            int VAR8, VAR9, VAR10;
            if (sscanf(VAR4, "", &VAR9) == 1)
            {
                VAR10 = 0;
                for (VAR8 = 0; VAR8 < VAR9; VAR8++)
                {
                    VAR10++; 
                }
                FUN2(VAR10);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}