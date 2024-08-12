#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 1; 
int VAR8 = 0; 
void FUN2()
{
    wchar_t * VAR9;
    wchar_t VAR10[256] = VAR11"";
    VAR9 = VAR10;
    if(VAR7)
    {
        {
            size_t VAR12 = wcslen(VAR9);
            if (256-VAR12 > 1)
            {
                if (FUN3(VAR9+VAR12, (int)(256-VAR12), stdin) != NULL)
                {
                    VAR12 = wcslen(VAR9);
                    if (VAR12 > 0 && VAR9[VAR12-1] == VAR11'')
                    {
                        VAR9[VAR12-1] = VAR11'';
                    }
                }
                else
                {
                    VAR9[VAR12] = VAR11'';
                }
            }
        }
    }
    {
        VAR13* VAR14 = NULL;
        ULONG VAR15 = 0L;
        ULONG VAR16 = 0L;
        VAR17 *VAR18 = NULL;
        wchar_t VAR19[256];
        _snwprintf(VAR19, 256-1, VAR11"", VAR9);
        VAR14 = FUN4(VAR11"", VAR20);
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
                            VAR11"",
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