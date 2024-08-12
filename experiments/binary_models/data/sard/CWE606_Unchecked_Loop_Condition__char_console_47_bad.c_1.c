#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    if(FUN2())
    {
        {
            size_t VAR6 = strlen(VAR4);
            if (100-VAR6 > 1)
            {
                if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
                {
                    VAR6 = strlen(VAR4);
                    if (VAR6 > 0 && VAR4[VAR6-1] == '')
                    {
                        VAR4[VAR6-1] = '';
                    }
                }
                else
                {
                    VAR4[VAR6] = '';
                }
            }
        }
    }
    else
    {
        strcpy(VAR4, "");
    }
    if(FUN2())
    {
        {
            int VAR7, VAR8, VAR9;
            if (sscanf(VAR4, "", &VAR8) == 1)
            {
                VAR9 = 0;
                for (VAR7 = 0; VAR7 < VAR8; VAR7++)
                {
                    VAR9++; 
                }
                FUN3(VAR9);
            }
        }
    }
    else
    {
        {
            int VAR7, VAR8, VAR9;
            if (sscanf(VAR4, "", &VAR8) == 1)
            {
                if (VAR8 < VAR10)
                {
                    VAR9 = 0;
                    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
                    {
                        VAR9++; 
                    }
                    FUN3(VAR9);
                }
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}