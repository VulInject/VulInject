#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
int VAR8 = 1; 
int VAR9 = 0; 
void FUN2()
{
    wchar_t * VAR10;
    wchar_t VAR11[256] = VAR12"";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR13 = wcslen(VAR10);
            VAR14 * VAR15;
            if (256-VAR13 > 1)
            {
                VAR15 = fopen(VAR2, "");
                if (VAR15 != NULL)
                {
                    if (FUN3(VAR10+VAR13, (int)(256-VAR13), VAR15) == NULL)
                    {
                        VAR10[VAR13] = VAR12'';
                    }
                    fclose(VAR15);
                }
            }
        }
    }
    {
        VAR16* VAR17 = NULL;
        ULONG VAR18 = 0L;
        ULONG VAR19 = 0L;
        VAR20 *VAR21 = NULL;
        wchar_t VAR22[256];
        _snwprintf(VAR22, 256-1, VAR12"", VAR10);
        VAR17 = FUN4(VAR12"", VAR23);
        if (VAR17 == NULL)
        {
            FUN5(1);
        }
        VAR18 = FUN6(VAR17, NULL);
        if (VAR18 != VAR24)
        {
            FUN5(1);
        }
        VAR19 = ldap_search_ext_sW(
                            VAR17,
                            VAR12"",
                            VAR25,
                            VAR22,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR26,
                            VAR26,
                            &VAR21);
        if (VAR19 != VAR24)
        {
            if (VAR21 != NULL)
            {
                FUN7(VAR21);
            }
            FUN5(1);
        }
        if (VAR21 != NULL)
        {
            FUN7(VAR21);
        }
        FUN8(VAR17);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}