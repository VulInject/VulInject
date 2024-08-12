#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    if(FUN2())
    {
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
    }
    if(FUN2())
    {
        {
            HANDLE VAR13;
            char * VAR14 = "";
            char * VAR15 = "";
            if (FUN5(
                        VAR14,
                        VAR15,
                        VAR9,
                        VAR16,
                        VAR17,
                        &VAR13) != 0)
            {
                FUN6(VAR13);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}