#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
void FUN2()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    {
        VAR11 *VAR12;
        VAR12 = fopen("", "");
        if (VAR12 != NULL)
        {
            if (fgets(VAR9, 100, VAR12) == NULL)
            {
                VAR9[0] = '';
            }
            fclose(VAR12);
        }
        else
        {
            VAR9[0] = '';
        }
    }
    {
        char * VAR13 = VAR9;
        char * VAR9 = VAR13;
        {
            HANDLE VAR14;
            char * VAR15 = "";
            char * VAR16 = "";
            if (FUN3(
                        VAR15,
                        VAR16,
                        VAR9,
                        VAR17,
                        VAR18,
                        &VAR14) != 0)
            {
                FUN4(VAR14);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}