#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
char * FUN2(char * VAR9)
{
    {
        VAR10 *VAR11;
        VAR11 = fopen("", "");
        if (VAR11 != NULL)
        {
            if (fgets(VAR9, 100, VAR11) == NULL)
            {
                VAR9[0] = '';
            }
            fclose(VAR11);
        }
        else
        {
            VAR9[0] = '';
        }
    }
    return VAR9;
}
void FUN3()
{
    char * VAR9;
    char VAR12[100] = "";
    VAR9 = VAR12;
    VAR9 = FUN2(VAR9);
    {
        HANDLE VAR13;
        char * VAR14 = "";
        char * VAR15 = "";
        if (FUN4(
                    VAR14,
                    VAR15,
                    VAR9,
                    VAR16,
                    VAR17,
                    &VAR13) != 0)
        {
            FUN5(VAR13);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}