#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
void FUN2(char * VAR9)
{
    {
        HANDLE VAR10;
        char * VAR11 = "";
        char * VAR12 = "";
        if (FUN3(
                    VAR11,
                    VAR12,
                    VAR9,
                    VAR13,
                    VAR14,
                    &VAR10) != 0)
        {
            FUN4(VAR10);
        }
        else
        {
        }
    }
}
void FUN5()
{
    char * VAR9;
    char VAR15[100] = "";
    VAR9 = VAR15;
    {
        VAR16 *VAR17;
        VAR17 = fopen("", "");
        if (VAR17 != NULL)
        {
            if (fgets(VAR9, 100, VAR17) == NULL)
            {
                VAR9[0] = '';
            }
            fclose(VAR17);
        }
        else
        {
            VAR9[0] = '';
        }
    }
    FUN2(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}