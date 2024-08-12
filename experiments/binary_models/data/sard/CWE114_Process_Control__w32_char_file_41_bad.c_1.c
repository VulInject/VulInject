#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#VAR1 <VAR5.VAR3>
void FUN1(char * VAR6)
{
    {
        HMODULE VAR7;
        VAR7 = LoadLibraryA(VAR6);
        if (VAR7 != NULL)
        {
            FUN2(VAR7);
        }
        else
        {
        }
    }
}
void FUN3()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    {
        size_t VAR9 = strlen(VAR6);
        VAR10 * VAR11;
        if (100-VAR9 > 1)
        {
            VAR11 = fopen(VAR4, "");
            if (VAR11 != NULL)
            {
                if (fgets(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                {
                    VAR6[VAR9] = '';
                }
                fclose(VAR11);
            }
        }
    }
    FUN1(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}