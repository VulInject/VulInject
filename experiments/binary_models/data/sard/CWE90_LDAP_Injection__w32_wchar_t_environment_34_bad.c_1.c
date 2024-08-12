#VAR1 ""
#define ENV_VARIABLE VAR2""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
typedef union
{
    wchar_t * VAR8;
    wchar_t * VAR9;
} VAR10;
void FUN2()
{
    wchar_t * VAR11;
    CWE90_LDAP_Injection__w32_wchar_t_environment_34_unionType VAR12;
    wchar_t VAR13[256] = VAR2"";
    VAR11 = VAR13;
    {
        size_t VAR14 = wcslen(VAR11);
        wchar_t * VAR15 = FUN3(VAR16);
        if (VAR15 != NULL)
        {
            wcsncat(VAR11+VAR14, VAR15, 256-VAR14-1);
        }
    }
    VAR12.VAR8 = VAR11;
    {
        wchar_t * VAR11 = VAR12.VAR9;
        {
            VAR17* VAR18 = NULL;
            ULONG VAR19 = 0L;
            ULONG VAR20 = 0L;
            VAR21 *VAR22 = NULL;
            wchar_t VAR23[256];
            _snwprintf(VAR23, 256-1, VAR2"", VAR11);
            VAR18 = FUN4(VAR2"", VAR24);
            if (VAR18 == NULL)
            {
                FUN5(1);
            }
            VAR19 = FUN6(VAR18, NULL);
            if (VAR19 != VAR25)
            {
                FUN5(1);
            }
            VAR20 = ldap_search_ext_sW(
                                VAR18,
                                VAR2"",
                                VAR26,
                                VAR23,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR27,
                                VAR27,
                                &VAR22);
            if (VAR20 != VAR25)
            {
                if (VAR22 != NULL)
                {
                    FUN7(VAR22);
                }
                FUN5(1);
            }
            if (VAR22 != NULL)
            {
                FUN7(VAR22);
            }
            FUN8(VAR18);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}