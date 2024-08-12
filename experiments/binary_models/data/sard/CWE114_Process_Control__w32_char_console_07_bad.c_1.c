#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    if(VAR5==5)
    {
        {
            size_t VAR8 = strlen(VAR6);
            if (100-VAR8 > 1)
            {
                if (fgets(VAR6+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = strlen(VAR6);
                    if (VAR8 > 0 && VAR6[VAR8-1] == '')
                    {
                        VAR6[VAR8-1] = '';
                    }
                }
                else
                {
                    VAR6[VAR8] = '';
                }
            }
        }
    }
    {
        HMODULE VAR9;
        VAR9 = LoadLibraryA(VAR6);
        if (VAR9 != NULL)
        {
            FUN2(VAR9);
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