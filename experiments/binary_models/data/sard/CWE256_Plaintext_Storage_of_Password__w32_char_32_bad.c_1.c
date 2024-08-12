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
    char * *VAR10 = &VAR9;
    char * *VAR11 = &VAR9;
    char VAR12[100] = "";
    VAR9 = VAR12;
    {
        char * VAR9 = *VAR10;
        {
            VAR13 *VAR14;
            VAR14 = fopen("", "");
            if (VAR14 != NULL)
            {
                if (fgets(VAR9, 100, VAR14) == NULL)
                {
                    VAR9[0] = '';
                }
                fclose(VAR14);
            }
            else
            {
                VAR9[0] = '';
            }
        }
        *VAR10 = VAR9;
    }
    {
        char * VAR9 = *VAR11;
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
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}