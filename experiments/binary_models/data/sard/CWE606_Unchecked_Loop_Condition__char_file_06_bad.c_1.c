#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
static const int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR8 = strlen(VAR6);
            VAR9 * VAR10;
            if (100-VAR8 > 1)
            {
                VAR10 = fopen(VAR4, "");
                if (VAR10 != NULL)
                {
                    if (fgets(VAR6+VAR8, (int)(100-VAR8), VAR10) == NULL)
                    {
                        VAR6[VAR8] = '';
                    }
                    fclose(VAR10);
                }
            }
        }
    }
    if(VAR5==5)
    {
        {
            int VAR11, VAR12, VAR13;
            if (sscanf(VAR6, "", &VAR12) == 1)
            {
                VAR13 = 0;
                for (VAR11 = 0; VAR11 < VAR12; VAR11++)
                {
                    VAR13++; 
                }
                FUN2(VAR13);
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