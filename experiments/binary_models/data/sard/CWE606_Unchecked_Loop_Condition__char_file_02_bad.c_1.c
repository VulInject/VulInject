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
    if(1)
    {
        {
            size_t VAR7 = strlen(VAR5);
            VAR8 * VAR9;
            if (100-VAR7 > 1)
            {
                VAR9 = fopen(VAR4, "");
                if (VAR9 != NULL)
                {
                    if (fgets(VAR5+VAR7, (int)(100-VAR7), VAR9) == NULL)
                    {
                        VAR5[VAR7] = '';
                    }
                    fclose(VAR9);
                }
            }
        }
    }
    if(1)
    {
        {
            int VAR10, VAR11, VAR12;
            if (sscanf(VAR5, "", &VAR11) == 1)
            {
                VAR12 = 0;
                for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                {
                    VAR12++; 
                }
                FUN2(VAR12);
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