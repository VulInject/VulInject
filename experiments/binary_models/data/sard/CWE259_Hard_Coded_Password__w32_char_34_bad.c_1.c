#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
typedef union
{
    char * VAR8;
    char * VAR9;
} VAR10;
void FUN2()
{
    char * VAR11;
    CWE259_Hard_Coded_Password__w32_char_34_unionType VAR12;
    char VAR13[100] = "";
    VAR11 = VAR13;
    strcpy(VAR11, VAR4);
    VAR12.VAR8 = VAR11;
    {
        char * VAR11 = VAR12.VAR9;
        {
            HANDLE VAR14;
            char * VAR15 = "";
            char * VAR16 = "";
            if (FUN3(
                        VAR15,
                        VAR16,
                        VAR11,
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