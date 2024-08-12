#VAR1 ""
#define ENV_VARIABLE VAR2""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
wchar_t * FUN2(wchar_t * VAR8)
{
    {
        size_t VAR9 = wcslen(VAR8);
        wchar_t * VAR10 = FUN3(VAR11);
        if (VAR10 != NULL)
        {
            wcsncat(VAR8+VAR9, VAR10, 256-VAR9-1);
        }
    }
    return VAR8;
}
void FUN4()
{
    wchar_t * VAR8;
    wchar_t VAR12[256] = VAR2"";
    VAR8 = VAR12;
    VAR8 = FUN2(VAR8);
    {
        VAR13* VAR14 = NULL;
        ULONG VAR15 = 0L;
        ULONG VAR16 = 0L;
        VAR17 *VAR18 = NULL;
        wchar_t VAR19[256];
        _snwprintf(VAR19, 256-1, VAR2"", VAR8);
        VAR14 = FUN5(VAR2"", VAR20);
        if (VAR14 == NULL)
        {
            FUN6(1);
        }
        VAR15 = FUN7(VAR14, NULL);
        if (VAR15 != VAR21)
        {
            FUN6(1);
        }
        VAR16 = ldap_search_ext_sW(
                            VAR14,
                            VAR2"",
                            VAR22,
                            VAR19,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR23,
                            VAR23,
                            &VAR18);
        if (VAR16 != VAR21)
        {
            if (VAR18 != NULL)
            {
                FUN8(VAR18);
            }
            FUN6(1);
        }
        if (VAR18 != NULL)
        {
            FUN8(VAR18);
        }
        FUN9(VAR14);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN4();
    return 0;
}