#VAR1 ""
#define ENV_VARIABLE VAR2""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
int VAR8 = 5;
void FUN2()
{
    wchar_t * VAR9;
    wchar_t VAR10[256] = VAR2"";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        {
            size_t VAR11 = wcslen(VAR9);
            wchar_t * VAR12 = FUN3(VAR13);
            if (VAR12 != NULL)
            {
                wcsncat(VAR9+VAR11, VAR12, 256-VAR11-1);
            }
        }
    }
    {
        VAR14* VAR15 = NULL;
        ULONG VAR16 = 0L;
        ULONG VAR17 = 0L;
        VAR18 *VAR19 = NULL;
        wchar_t VAR20[256];
        _snwprintf(VAR20, 256-1, VAR2"", VAR9);
        VAR15 = FUN4(VAR2"", VAR21);
        if (VAR15 == NULL)
        {
            FUN5(1);
        }
        VAR16 = FUN6(VAR15, NULL);
        if (VAR16 != VAR22)
        {
            FUN5(1);
        }
        VAR17 = ldap_search_ext_sW(
                            VAR15,
                            VAR2"",
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
            FUN5(1);
        }
        if (VAR19 != NULL)
        {
            FUN7(VAR19);
        }
        FUN8(VAR15);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}