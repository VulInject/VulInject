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
    char VAR9[100] = "";
    VAR5 = VAR9;
    {
        size_t VAR10 = strlen(VAR5);
        VAR11 * VAR12;
        if (100-VAR10 > 1)
        {
            VAR12 = fopen(VAR4, "");
            if (VAR12 != NULL)
            {
                if (fgets(VAR5+VAR10, (int)(100-VAR10), VAR12) == NULL)
                {
                    VAR5[VAR10] = '';
                }
                fclose(VAR12);
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}