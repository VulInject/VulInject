#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
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
    {
        char * VAR11 = VAR6;
        char * VAR6 = VAR11;
        {
            HMODULE VAR12;
            VAR12 = LoadLibraryA(VAR6);
            if (VAR12 != NULL)
            {
                FUN2(VAR12);
            }
            else
            {
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