#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
typedef union
{
    char * VAR7;
    char * VAR8;
} VAR9;
void FUN2()
{
    char * VAR10;
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_34_unionType VAR11;
    VAR10 = "";
    VAR10 = (char *)malloc(100*sizeof(char));
    if (VAR10 == NULL)
    {
        FUN3(1);
    }
    strcpy(VAR10, "");
    VAR11.VAR7 = VAR10;
    {
        char * VAR10 = VAR11.VAR8;
        {
            HANDLE VAR12;
            char * VAR13 = "";
            char * VAR14 = "";
            if (FUN4(
                        VAR13,
                        VAR14,
                        VAR10,
                        VAR15,
                        VAR16,
                        &VAR12) != 0)
            {
                FUN5(VAR12);
            }
            else
            {
            }
            free(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}