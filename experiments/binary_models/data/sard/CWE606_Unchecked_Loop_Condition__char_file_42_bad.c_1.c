#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
char * FUN1(char * VAR5)
{
    {
        size_t VAR6 = strlen(VAR5);
        VAR7 * VAR8;
        if (100-VAR6 > 1)
        {
            VAR8 = fopen(VAR4, "");
            if (VAR8 != NULL)
            {
                if (fgets(VAR5+VAR6, (int)(100-VAR6), VAR8) == NULL)
                {
                    VAR5[VAR6] = '';
                }
                fclose(VAR8);
            }
        }
    }
    return VAR5;
}
void FUN2()
{
    char * VAR5;
    char VAR9[100] = "";
    VAR5 = VAR9;
    VAR5 = FUN1(VAR5);
    {
        int VAR10, VAR11, VAR12;
        if (sscanf(VAR5, "", &VAR11) == 1)
        {
            VAR12 = 0;
            for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            {
                VAR12++; 
            }
            FUN3(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}