#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
char * FUN1(char * VAR4)
{
    {
        size_t VAR5 = strlen(VAR4);
        if (100-VAR5 > 1)
        {
            if (fgets(VAR4+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                VAR5 = strlen(VAR4);
                if (VAR5 > 0 && VAR4[VAR5-1] == '')
                {
                    VAR4[VAR5-1] = '';
                }
            }
            else
            {
                VAR4[VAR5] = '';
            }
        }
    }
    return VAR4;
}
void FUN2()
{
    char * VAR4;
    char VAR6[100] = "";
    VAR4 = VAR6;
    VAR4 = FUN1(VAR4);
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
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}