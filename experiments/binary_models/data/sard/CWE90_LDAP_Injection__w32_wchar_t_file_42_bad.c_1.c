#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
wchar_t * FUN2(wchar_t * VAR8)
{
    {
        size_t VAR9 = wcslen(VAR8);
        VAR10 * VAR11;
        if (256-VAR9 > 1)
        {
            VAR11 = fopen(VAR2, "");
            if (VAR11 != NULL)
            {
                if (FUN3(VAR8+VAR9, (int)(256-VAR9), VAR11) == NULL)
                {
                    VAR8[VAR9] = VAR12'';
                }
                fclose(VAR11);
            }
        }
    }
    return VAR8;
}
void FUN4()
{
    wchar_t * VAR8;
    wchar_t VAR13[256] = VAR12"";
    VAR8 = VAR13;
    VAR8 = FUN2(VAR8);
    {
        VAR14* VAR15 = NULL;
        ULONG VAR16 = 0L;
        ULONG VAR17 = 0L;
        VAR18 *VAR19 = NULL;
        wchar_t VAR20[256];
        _snwprintf(VAR20, 256-1, VAR12"", VAR8);
        VAR15 = FUN5(VAR12"", VAR21);
        if (VAR15 == NULL)
        {
            FUN6(1);
        }
        VAR16 = FUN7(VAR15, NULL);
        if (VAR16 != VAR22)
        {
            FUN6(1);
        }
        VAR17 = ldap_search_ext_sW(
                            VAR15,
                            VAR12"",
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
                FUN8(VAR19);
            }
            FUN6(1);
        }
        if (VAR19 != NULL)
        {
            FUN8(VAR19);
        }
        FUN9(VAR15);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN4();
    return 0;
}