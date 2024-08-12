#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1(char * VAR5)
{
    {
        int VAR6, VAR7, VAR8;
        if (sscanf(VAR5, "", &VAR7) == 1)
        {
            VAR8 = 0;
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8++; 
            }
            FUN2(VAR8);
        }
    }
}
void FUN3()
{
    char * VAR5;
    void (*VAR9) (char *) = VAR10;
    char VAR11[100] = "";
    VAR5 = VAR11;
    {
        size_t VAR12 = strlen(VAR5);
        VAR13 * VAR14;
        if (100-VAR12 > 1)
        {
            VAR14 = fopen(VAR4, "");
            if (VAR14 != NULL)
            {
                if (fgets(VAR5+VAR12, (int)(100-VAR12), VAR14) == NULL)
                {
                    VAR5[VAR12] = '';
                }
                fclose(VAR14);
            }
        }
    }
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}