#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    char VAR5[100] = "";
    VAR4 = VAR5;
    if(FUN1())
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
    if(FUN1())
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
                FUN4(VAR9);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}