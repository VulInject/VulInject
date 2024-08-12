#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2(wchar_t * VAR8)
{
    {
        VAR9* VAR10 = NULL;
        ULONG VAR11 = 0L;
        ULONG VAR12 = 0L;
        VAR13 *VAR14 = NULL;
        wchar_t VAR15[256];
        _snwprintf(VAR15, 256-1, VAR16"", VAR8);
        VAR10 = FUN3(VAR16"", VAR17);
        if (VAR10 == NULL)
        {
            FUN4(1);
        }
        VAR11 = FUN5(VAR10, NULL);
        if (VAR11 != VAR18)
        {
            FUN4(1);
        }
        VAR12 = ldap_search_ext_sW(
                            VAR10,
                            VAR16"",
                            VAR19,
                            VAR15,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR20,
                            VAR20,
                            &VAR14);
        if (VAR12 != VAR18)
        {
            if (VAR14 != NULL)
            {
                FUN6(VAR14);
            }
            FUN4(1);
        }
        if (VAR14 != NULL)
        {
            FUN6(VAR14);
        }
        FUN7(VAR10);
    }
}
void FUN8()
{
    wchar_t * VAR8;
    void (*VAR21) (wchar_t *) = VAR22;
    wchar_t VAR23[256] = VAR16"";
    VAR8 = VAR23;
    {
        size_t VAR24 = wcslen(VAR8);
        VAR25 * VAR26;
        if (256-VAR24 > 1)
        {
            VAR26 = fopen(VAR2, "");
            if (VAR26 != NULL)
            {
                if (FUN9(VAR8+VAR24, (int)(256-VAR24), VAR26) == NULL)
                {
                    VAR8[VAR24] = VAR16'';
                }
                fclose(VAR26);
            }
        }
    }
    FUN10(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN8();
    return 0;
}