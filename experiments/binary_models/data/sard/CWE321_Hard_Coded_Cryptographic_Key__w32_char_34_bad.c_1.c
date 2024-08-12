#VAR1 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#pragma FUN1 (VAR6, "")
typedef union
{
    char * VAR7;
    char * VAR8;
} VAR9;
void FUN2()
{
    char * VAR10;
    CWE321_Hard_Coded_Cryptographic_Key__w32_char_34_unionType VAR11;
    char VAR12[100] = "";
    VAR10 = VAR12;
    strcpy(VAR10, VAR2);
    VAR11.VAR7 = VAR10;
    {
        char * VAR10 = VAR11.VAR8;
        {
            HCRYPTPROV VAR13;
            HCRYPTKEY VAR14;
            HCRYPTHASH VAR15;
            char VAR16[] = "";
            DWORD VAR17 = strlen(VAR16)*sizeof(char);
            BYTE VAR18[200];    
            memcpy(VAR18, VAR16, VAR17);
            if(!FUN3(&VAR13, NULL, VAR19, VAR20, 0))
            {
                if(!FUN3(&VAR13, NULL, VAR19, VAR20, VAR21))
                {
                    FUN4(1);
                }
            }
            if(!FUN5(VAR13, VAR22, 0, 0, &VAR15))
            {
                FUN4(1);
            }
            if(!FUN6(VAR15, (VAR23 *) VAR10, strlen(VAR10)*sizeof(char), 0))
            {
                FUN4(1);
            }
            if(!FUN7(VAR13, VAR24, VAR15, 0, &VAR14))
            {
                FUN4(1);
            }
            if(!FUN8(VAR14, (VAR25)NULL, 1, 0, VAR18, &VAR17, sizeof(VAR18)))
            {
                FUN4(1);
            }
            FUN9(VAR18, VAR17);
            if (VAR14)
            {
                FUN10(VAR14);
            }
            if (VAR15)
            {
                FUN11(VAR15);
            }
            if (VAR13)
            {
                FUN12(VAR13, 0);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN2();
    return 0;
}