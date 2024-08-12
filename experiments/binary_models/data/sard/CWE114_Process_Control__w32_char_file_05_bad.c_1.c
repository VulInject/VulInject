#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
int VAR6 = 1; 
int VAR7 = 0; 
void FUN1()
{
    char * VAR8;
    char VAR9[100] = "";
    VAR8 = VAR9;
    if(VAR6)
    {
        {
            size_t VAR10 = strlen(VAR8);
            VAR11 * VAR12;
            if (100-VAR10 > 1)
            {
                VAR12 = fopen(VAR4, "");
                if (VAR12 != NULL)
                {
                    if (fgets(VAR8+VAR10, (int)(100-VAR10), VAR12) == NULL)
                    {
                        VAR8[VAR10] = '';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    {
        HMODULE VAR13;
        VAR13 = LoadLibraryA(VAR8);
        if (VAR13 != NULL)
        {
            FUN2(VAR13);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}