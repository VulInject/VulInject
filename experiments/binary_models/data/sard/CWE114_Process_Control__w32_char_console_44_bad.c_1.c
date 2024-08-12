#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1(char * VAR5)
{
    {
        HMODULE VAR6;
        VAR6 = LoadLibraryA(VAR5);
        if (VAR6 != NULL)
        {
            FUN2(VAR6);
        }
        else
        {
        }
    }
}
void FUN3()
{
    char * VAR5;
    void (*VAR7) (char *) = VAR8;
    char VAR9[100] = "";
    VAR5 = VAR9;
    {
        size_t VAR10 = strlen(VAR5);
        if (100-VAR10 > 1)
        {
            if (fgets(VAR5+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = strlen(VAR5);
                if (VAR10 > 0 && VAR5[VAR10-1] == '')
                {
                    VAR5[VAR10-1] = '';
                }
            }
            else
            {
                VAR5[VAR10] = '';
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