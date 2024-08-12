#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    wchar_t * VAR8;
    wchar_t VAR9[256] = VAR10"";
    VAR8 = VAR9;
    if(5==5)
    {
        {
            size_t VAR11 = wcslen(VAR8);
            VAR12 * VAR13;
            if (256-VAR11 > 1)
            {
                VAR13 = fopen(VAR2, "");
                if (VAR13 != NULL)
                {
                    if (FUN3(VAR8+VAR11, (int)(256-VAR11), VAR13) == NULL)
                    {
                        VAR8[VAR11] = VAR10'';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    {
        VAR14* VAR15 = NULL;
        ULONG VAR16 = 0L;
        ULONG VAR17 = 0L;
        VAR18 *VAR19 = NULL;
        wchar_t VAR20[256];
        _snwprintf(VAR20, 256-1, VAR10"", VAR8);
        VAR15 = FUN4(VAR10"", VAR21);
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
                            VAR10"",
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