#VAR1 ""
#define VAR2 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
typedef union
{
    char * VAR8;
    char * VAR9;
} VAR10;
void FUN2()
{
    char * VAR11;
    CWE90_LDAP_Injection__w32_char_environment_34_unionType VAR12;
    char VAR13[256] = "";
    VAR11 = VAR13;
    {
        size_t VAR14 = strlen(VAR11);
        char * VAR15 = FUN3(VAR2);
        if (VAR15 != NULL)
        {
            strncat(VAR11+VAR14, VAR15, 256-VAR14-1);
        }
    }
    VAR12.VAR8 = VAR11;
    {
        char * VAR11 = VAR12.VAR9;
        {
            VAR16* VAR17 = NULL;
            ULONG VAR18 = 0L;
            ULONG VAR19 = 0L;
            VAR20 *VAR21 = NULL;
            char VAR22[256];
            _snprintf(VAR22, 256-1, "", VAR11);
            VAR17 = FUN4("", VAR23);
            if (VAR17 == NULL)
            {
                FUN5(1);
            }
            VAR18 = FUN6(VAR17, NULL);
            if (VAR18 != VAR24)
            {
                FUN5(1);
            }
            VAR19 = FUN7(
                                VAR17,
                                "",
                                VAR25,
                                VAR22,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR26,
                                VAR26,
                                &VAR21);
            if (VAR19 != VAR24)
            {
                if (VAR21 != NULL)
                {
                    FUN8(VAR21);
                }
                FUN5(1);
            }
            if (VAR21 != NULL)
            {
                FUN8(VAR21);
            }
            FUN9(VAR17);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}