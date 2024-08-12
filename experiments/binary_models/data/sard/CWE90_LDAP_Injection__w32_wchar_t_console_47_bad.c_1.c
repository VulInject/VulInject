#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    wchar_t * VAR7;
    wchar_t VAR8[256] = VAR9"";
    VAR7 = VAR8;
    if(FUN3())
    {
        {
            size_t VAR10 = wcslen(VAR7);
            if (256-VAR10 > 1)
            {
                if (FUN4(VAR7+VAR10, (int)(256-VAR10), stdin) != NULL)
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
    }
    else
    {
        wcscat(VAR7, VAR9"");
    }
    {
        VAR11* VAR12 = NULL;
        ULONG VAR13 = 0L;
        ULONG VAR14 = 0L;
        VAR15 *VAR16 = NULL;
        wchar_t VAR17[256];
        _snwprintf(VAR17, 256-1, VAR9"", VAR7);
        VAR12 = FUN5(VAR9"", VAR18);
        if (VAR12 == NULL)
        {
            FUN6(1);
        }
        VAR13 = FUN7(VAR12, NULL);
        if (VAR13 != VAR19)
        {
            FUN6(1);
        }
        VAR14 = ldap_search_ext_sW(
                            VAR12,
                            VAR9"",
                            VAR20,
                            VAR17,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR21,
                            VAR21,
                            &VAR16);
        if (VAR14 != VAR19)
        {
            if (VAR16 != NULL)
            {
                FUN8(VAR16);
            }
            FUN6(1);
        }
        if (VAR16 != NULL)
        {
            FUN8(VAR16);
        }
        FUN9(VAR12);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}