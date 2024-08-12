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
    if(VAR11==5)
    {
        {
            size_t VAR12 = wcslen(VAR8);
            VAR13 * VAR14;
            if (256-VAR12 > 1)
            {
                VAR14 = fopen(VAR2, "");
                if (VAR14 != NULL)
                {
                    if (FUN3(VAR8+VAR12, (int)(256-VAR12), VAR14) == NULL)
                    {
                        VAR8[VAR12] = VAR10'';
                    }
                    fclose(VAR14);
                }
            }
        }
    }
    {
        VAR15* VAR16 = NULL;
        ULONG VAR17 = 0L;
        ULONG VAR18 = 0L;
        VAR19 *VAR20 = NULL;
        wchar_t VAR21[256];
        _snwprintf(VAR21, 256-1, VAR10"", VAR8);
        VAR16 = FUN4(VAR10"", VAR22);
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
                            VAR10"",
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