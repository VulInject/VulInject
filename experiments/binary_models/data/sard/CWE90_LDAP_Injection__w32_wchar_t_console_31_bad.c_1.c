#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    wchar_t * VAR7;
    wchar_t VAR8[256] = VAR9"";
    VAR7 = VAR8;
    {
        size_t VAR10 = wcslen(VAR7);
        if (256-VAR10 > 1)
        {
            if (FUN3(VAR7+VAR10, (int)(256-VAR10), stdin) != NULL)
            {
                VAR10 = wcslen(VAR7);
                if (VAR10 > 0 && VAR7[VAR10-1] == VAR9'')
                {
                    VAR7[VAR10-1] = VAR9'';
                }
            }
            else
            {
                VAR7[VAR10] = VAR9'';
            }
        }
    }
    {
        wchar_t * VAR11 = VAR7;
        wchar_t * VAR7 = VAR11;
        {
            VAR12* VAR13 = NULL;
            ULONG VAR14 = 0L;
            ULONG VAR15 = 0L;
            VAR16 *VAR17 = NULL;
            wchar_t VAR18[256];
            _snwprintf(VAR18, 256-1, VAR9"", VAR7);
            VAR13 = FUN4(VAR9"", VAR19);
            if (VAR13 == NULL)
            {
                FUN5(1);
            }
            VAR14 = FUN6(VAR13, NULL);
            if (VAR14 != VAR20)
            {
                FUN5(1);
            }
            VAR15 = ldap_search_ext_sW(
                                VAR13,
                                VAR9"",
                                VAR21,
                                VAR18,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR22,
                                VAR22,
                                &VAR17);
            if (VAR15 != VAR20)
            {
                if (VAR17 != NULL)
                {
                    FUN7(VAR17);
                }
                FUN5(1);
            }
            if (VAR17 != NULL)
            {
                FUN7(VAR17);
            }
            FUN8(VAR13);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}