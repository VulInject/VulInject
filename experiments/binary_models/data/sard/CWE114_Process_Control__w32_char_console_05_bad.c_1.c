#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR5)
    {
        {
            size_t VAR9 = strlen(VAR7);
            if (100-VAR9 > 1)
            {
                if (fgets(VAR7+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = strlen(VAR7);
                    if (VAR9 > 0 && VAR7[VAR9-1] == '')
                    {
                        VAR7[VAR9-1] = '';
                    }
                }
                else
                {
                    VAR7[VAR9] = '';
                }
            }
        }
    }
    {
        HMODULE VAR10;
        VAR10 = LoadLibraryA(VAR7);
        if (VAR10 != NULL)
        {
            FUN2(VAR10);
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