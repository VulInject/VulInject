#VAR1 ""
#define ENV_VARIABLE VAR2""
#define GETENV _wgetenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
static const int VAR8 = 1; 
static const int VAR9 = 0; 
void FUN2()
{
    wchar_t * VAR10;
    wchar_t VAR11[256] = VAR2"";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR12 = wcslen(VAR10);
            wchar_t * VAR13 = FUN3(VAR14);
            if (VAR13 != NULL)
            {
                wcsncat(VAR10+VAR12, VAR13, 256-VAR12-1);
            }
        }
    }
    {
        VAR15* VAR16 = NULL;
        ULONG VAR17 = 0L;
        ULONG VAR18 = 0L;
        VAR19 *VAR20 = NULL;
        wchar_t VAR21[256];
        _snwprintf(VAR21, 256-1, VAR2"", VAR10);
        VAR16 = FUN4(VAR2"", VAR22);
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
                            VAR2"",
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
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}