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
    CWE90_LDAP_Injection__w32_char_console_34_unionType VAR11;
    char VAR12[256] = "";
    VAR10 = VAR12;
    {
        size_t VAR13 = strlen(VAR10);
        if (256-VAR13 > 1)
        {
            if (fgets(VAR10+VAR13, (int)(256-VAR13), stdin) != NULL)
            {
                VAR13 = strlen(VAR10);
                if (VAR13 > 0 && VAR10[VAR13-1] == '')
                {
                    VAR10[VAR13-1] = '';
                }
            }
            else
            {
                VAR10[VAR13] = '';
            }
        }
    }
    VAR11.VAR7 = VAR10;
    {
        char * VAR10 = VAR11.VAR8;
        {
            VAR14* VAR15 = NULL;
            ULONG VAR16 = 0L;
            ULONG VAR17 = 0L;
            VAR18 *VAR19 = NULL;
            char VAR20[256];
            _snprintf(VAR20, 256-1, "", VAR10);
            VAR15 = FUN3("", VAR21);
            if (VAR15 == NULL)
            {
                FUN4(1);
            }
            VAR16 = FUN5(VAR15, NULL);
            if (VAR16 != VAR22)
            {
                FUN4(1);
            }
            VAR17 = FUN6(
                                VAR15,
                                "",
                                VAR23,
                                VAR20,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR24,
                                VAR24,
                                &VAR19);
            if (VAR17 != VAR22)
            {
                if (VAR19 != NULL)
                {
                    FUN7(VAR19);
                }
                FUN4(1);
            }
            if (VAR19 != NULL)
            {
                FUN7(VAR19);
            }
            FUN8(VAR15);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}