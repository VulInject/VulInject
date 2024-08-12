#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        int VAR5, VAR6, VAR7;
        if (sscanf(VAR4, "", &VAR6) == 1)
        {
            VAR7 = 0;
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            {
                VAR7++; 
            }
            FUN2(VAR7);
        }
    }
}
void FUN3()
{
    char * VAR4;
    char VAR8[100] = "";
    VAR4 = VAR8;
    {
        size_t VAR9 = strlen(VAR4);
        if (100-VAR9 > 1)
        {
            if (fgets(VAR4+VAR9, (int)(100-VAR9), stdin) != NULL)
            {
                VAR9 = strlen(VAR4);
                if (VAR9 > 0 && VAR4[VAR9-1] == '')
                {
                    VAR4[VAR9-1] = '';
                }
            }
            else
            {
                VAR4[VAR9] = '';
            }
        }
    }
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}