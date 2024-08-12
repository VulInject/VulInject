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
    goto VAR11;
VAR11:
    {
        VAR12 *VAR13;
        VAR13 = fopen("", "");
        if (VAR13 != NULL)
        {
            if (fgets(VAR9, 100, VAR13) == NULL)
            {
                VAR9[0] = '';
            }
            fclose(VAR13);
        }
        else
        {
            VAR9[0] = '';
        }
    }
    goto VAR14;
VAR14:
    {
        HANDLE VAR15;
        char * VAR16 = "";
        char * VAR17 = "";
        if (FUN3(
                    VAR16,
                    VAR17,
                    VAR9,
                    VAR18,
                    VAR19,
                    &VAR15) != 0)
        {
            FUN4(VAR15);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}