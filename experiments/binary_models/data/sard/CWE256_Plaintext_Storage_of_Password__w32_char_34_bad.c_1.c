#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
typedef union
{
    char * VAR9;
    char * VAR10;
} VAR11;
void FUN2()
{
    char * VAR12;
    CWE256_Plaintext_Storage_of_Password__w32_char_34_unionType VAR13;
    char VAR14[100] = "";
    VAR12 = VAR14;
    {
        VAR15 *VAR16;
        VAR16 = fopen("", "");
        if (VAR16 != NULL)
        {
            if (fgets(VAR12, 100, VAR16) == NULL)
            {
                VAR12[0] = '';
            }
            fclose(VAR16);
        }
        else
        {
            VAR12[0] = '';
        }
    }
    VAR13.VAR9 = VAR12;
    {
        char * VAR12 = VAR13.VAR10;
        {
            HANDLE VAR17;
            char * VAR18 = "";
            char * VAR19 = "";
            if (FUN3(
                        VAR18,
                        VAR19,
                        VAR12,
                        VAR20,
                        VAR21,
                        &VAR17) != 0)
            {
                FUN4(VAR17);
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