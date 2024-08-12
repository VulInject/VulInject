#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char VAR7[100] = "";
    VAR4 = VAR7;
    {
        char * VAR4 = *VAR5;
        {
            size_t VAR8 = strlen(VAR4);
            if (100-VAR8 > 1)
            {
                if (fgets(VAR4+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = strlen(VAR4);
                    if (VAR8 > 0 && VAR4[VAR8-1] == '')
                    {
                        VAR4[VAR8-1] = '';
                    }
                }
                else
                {
                    VAR4[VAR8] = '';
                }
            }
        }
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            int VAR9, VAR10, VAR11;
            if (sscanf(VAR4, "", &VAR10) == 1)
            {
                VAR11 = 0;
                for (VAR9 = 0; VAR9 < VAR10; VAR9++)
                {
                    VAR11++; 
                }
                FUN2(VAR11);
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