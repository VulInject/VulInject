#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
int VAR9 = 5;
void FUN2()
{
    char * VAR10;
    char VAR11[100] = "";
    VAR10 = VAR11;
    if(VAR9==5)
    {
        {
            VAR12 *VAR13;
            VAR13 = fopen("", "");
            if (VAR13 != NULL)
            {
                if (fgets(VAR10, 100, VAR13) == NULL)
                {
                    VAR10[0] = '';
                }
                fclose(VAR13);
            }
            else
            {
                VAR10[0] = '';
            }
        }
    }
    if(VAR9==5)
    {
        {
            HANDLE VAR14;
            char * VAR15 = "";
            char * VAR16 = "";
            if (FUN3(
                        VAR15,
                        VAR16,
                        VAR10,
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