#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
int VAR6 = 5;
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR6==5)
    {
        {
            size_t VAR9 = strlen(VAR7);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR4, "");
                if (VAR11 != NULL)
                {
                    if (fgets(VAR7+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR7[VAR9] = '';
                    }
                    fclose(VAR11);
                }
            }
        }
    }
    {
        HMODULE VAR12;
        VAR12 = LoadLibraryA(VAR7);
        if (VAR12 != NULL)
        {
            FUN2(VAR12);
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