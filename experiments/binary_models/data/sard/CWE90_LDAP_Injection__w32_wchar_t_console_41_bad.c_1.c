#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2(wchar_t * VAR7)
{
    {
        VAR8* VAR9 = NULL;
        ULONG VAR10 = 0L;
        ULONG VAR11 = 0L;
        VAR12 *VAR13 = NULL;
        wchar_t VAR14[256];
        _snwprintf(VAR14, 256-1, VAR15"", VAR7);
        VAR9 = FUN3(VAR15"", VAR16);
        if (VAR9 == NULL)
        {
            FUN4(1);
        }
        VAR10 = FUN5(VAR9, NULL);
        if (VAR10 != VAR17)
        {
            FUN4(1);
        }
        VAR11 = ldap_search_ext_sW(
                            VAR9,
                            VAR15"",
                            VAR18,
                            VAR14,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR19,
                            VAR19,
                            &VAR13);
        if (VAR11 != VAR17)
        {
            if (VAR13 != NULL)
            {
                FUN6(VAR13);
            }
            FUN4(1);
        }
        if (VAR13 != NULL)
        {
            FUN6(VAR13);
        }
        FUN7(VAR9);
    }
}
void FUN8()
{
    wchar_t * VAR7;
    wchar_t VAR20[256] = VAR15"";
    VAR7 = VAR20;
    {
        size_t VAR21 = wcslen(VAR7);
        if (256-VAR21 > 1)
        {
            if (FUN9(VAR7+VAR21, (int)(256-VAR21), stdin) != NULL)
            {
                VAR21 = wcslen(VAR7);
                if (VAR21 > 0 && VAR7[VAR21-1] == VAR15'')
                {
                    VAR7[VAR21-1] = VAR15'';
                }
            }
            else
            {
                VAR7[VAR21] = VAR15'';
            }
        }
    }
    FUN2(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN8();
    return 0;
}