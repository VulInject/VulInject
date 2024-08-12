#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
typedef union
{
    wchar_t * VAR7;
    wchar_t * VAR8;
} VAR9;
void FUN2()
{
    wchar_t * VAR10;
    CWE90_LDAP_Injection__w32_wchar_t_console_34_unionType VAR11;
    wchar_t VAR12[256] = VAR13"";
    VAR10 = VAR12;
    {
        size_t VAR14 = wcslen(VAR10);
        if (256-VAR14 > 1)
        {
            if (FUN3(VAR10+VAR14, (int)(256-VAR14), stdin) != NULL)
            {
                VAR14 = wcslen(VAR10);
                if (VAR14 > 0 && VAR10[VAR14-1] == VAR13'')
                {
                    VAR10[VAR14-1] = VAR13'';
                }
            }
            else
            {
                VAR10[VAR14] = VAR13'';
            }
        }
    }
    VAR11.VAR7 = VAR10;
    {
        wchar_t * VAR10 = VAR11.VAR8;
        {
            VAR15* VAR16 = NULL;
            ULONG VAR17 = 0L;
            ULONG VAR18 = 0L;
            VAR19 *VAR20 = NULL;
            wchar_t VAR21[256];
            _snwprintf(VAR21, 256-1, VAR13"", VAR10);
            VAR16 = FUN4(VAR13"", VAR22);
            if (VAR16 == NULL)
            {
                FUN5(1);
            }
            VAR17 = FUN6(VAR16, NULL);
            if (VAR17 != VAR23)
            {
                FUN5(1);
            }
            VAR18 = ldap_search_ext_sW(
                                VAR16,
                                VAR13"",
                                VAR24,
                                VAR21,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR25,
                                VAR25,
                                &VAR20);
            if (VAR18 != VAR23)
            {
                if (VAR20 != NULL)
                {
                    FUN7(VAR20);
                }
                FUN5(1);
            }
            if (VAR20 != NULL)
            {
                FUN7(VAR20);
            }
            FUN8(VAR16);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}