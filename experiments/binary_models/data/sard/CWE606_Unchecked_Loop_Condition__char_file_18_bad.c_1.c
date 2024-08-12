#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    goto VAR7;
VAR7:
    {
        size_t VAR8 = strlen(VAR5);
        VAR9 * VAR10;
        if (100-VAR8 > 1)
        {
            VAR10 = fopen(VAR4, "");
            if (VAR10 != NULL)
            {
                if (fgets(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                {
                    VAR5[VAR8] = '';
                }
                fclose(VAR10);
            }
        }
    }
    goto VAR11;
VAR11:
    {
        int VAR12, VAR13, VAR14;
        if (sscanf(VAR5, "", &VAR13) == 1)
        {
            VAR14 = 0;
            for (VAR12 = 0; VAR12 < VAR13; VAR12++)
            {
                VAR14++; 
            }
            FUN2(VAR14);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}