#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    goto VAR7;
VAR7:
    {
        size_t VAR8 = strlen(VAR5);
        if (100-VAR8 > 1)
        {
            if (fgets(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = strlen(VAR5);
                if (VAR8 > 0 && VAR5[VAR8-1] == '')
                {
                    VAR5[VAR8-1] = '';
                }
            }
            else
            {
                VAR5[VAR8] = '';
            }
        }
    }
    {
        HMODULE VAR9;
        VAR9 = LoadLibraryA(VAR5);
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