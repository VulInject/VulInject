#VAR1 ""
#define ENV_VARIABLE VAR2""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    wchar_t * VAR8;
    wchar_t VAR9[256] = VAR2"";
    VAR8 = VAR9;
    switch(6)
    {
    case 6:
    {
        size_t VAR10 = wcslen(VAR8);
        wchar_t * VAR11 = FUN3(VAR12);
        if (VAR11 != NULL)
        {
            wcsncat(VAR8+VAR10, VAR11, 256-VAR10-1);
        }
    }
    break;
    default:
        break;
    }
    {
        VAR13* VAR14 = NULL;
        ULONG VAR15 = 0L;
        ULONG VAR16 = 0L;
        VAR17 *VAR18 = NULL;
        wchar_t VAR19[256];
        _snwprintf(VAR19, 256-1, VAR2"", VAR8);
        VAR14 = FUN4(VAR2"", VAR20);
        if (VAR14 == NULL)
        {
            FUN5(1);
        }
        VAR15 = FUN6(VAR14, NULL);
        if (VAR15 != VAR21)
        {
            FUN5(1);
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
                FUN7(VAR18);
            }
            FUN5(1);
        }
        if (VAR18 != NULL)
        {
            FUN7(VAR18);
        }
        FUN8(VAR14);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}