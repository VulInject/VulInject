FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    unsigned int VAR6;
    const VAR7 *VAR8;
    unsigned int VAR9, VAR10;
    time_t VAR11;
    gnutls_x509_crt_t VAR12 = NULL;
    VAR11 = FUN2(NULL);
    if (VAR11 == ((VAR13)-1))
    {
        FUN3(VAR4, VAR14, "");
        return -1;
    }
    VAR5 = FUN4(VAR2->VAR15, &VAR6);
    if (VAR5 < 0)
    {
        FUN5(VAR4, "", FUN6(VAR5));
        return -1;
    }
    if (VAR6 != 0)
    {
        const char *VAR16 = "";
        if (VAR6 & VAR17)
        {
            VAR16 = "";
        }
        if (VAR6 & VAR18)
        {
            VAR16 = "";
        }
        if (VAR6 & VAR19)
        {
            VAR16 = "";
        }
        if (VAR6 & VAR20)
        {
            VAR16 = "";
        }
        FUN5(VAR4, "", VAR16);
        return -1;
    }
    VAR8 = FUN7(VAR2->VAR15, &VAR9);
    if (!VAR8)
    {
        FUN5(VAR4, "");
        return -1;
    }
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        VAR5 = FUN8(&VAR12);
        if (VAR5 < 0)
        {
            FUN5(VAR4, "", FUN6(VAR5));
            return -1;
        }
        VAR5 = FUN9(VAR12, &VAR8[VAR10], VAR21);
        if (VAR5 < 0)
        {
            FUN5(VAR4, "", FUN6(VAR5));
            goto VAR22;
        }
        if (FUN10(VAR12) < VAR11)
        {
            FUN5(VAR4, "");
            goto VAR22;
        }
        if (FUN11(VAR12) > VAR11)
        {
            FUN5(VAR4, "");
            goto VAR22;
        }
        if (FUN11(VAR12) > VAR11)
        {
            FUN5(VAR4, "");
            goto VAR22;
        }
        if (VAR10 == 0)
        {
            size_t VAR23 = 1024;
            VAR2->VAR24 = FUN12(VAR23);
        VAR25:
            VAR5 = FUN13(VAR12, VAR2->VAR24, &VAR23);
            if (VAR5 < 0)
            {
                if (VAR5 == VAR26)
                {
                    VAR2->VAR24 = FUN14(VAR2->VAR24, VAR23);
                    goto VAR25;
                }
                FUN5(VAR4, "", FUN6(VAR5));
                goto VAR22;
            }
            if (VAR2->VAR27)
            {
                VAR28 *VAR29 = FUN15(VAR2->VAR27);
                int VAR30;
                if (!VAR29)
                {
                    FUN5(VAR4, "", VAR2->VAR27);
                    goto VAR22;
                }
                VAR30 = FUN16(VAR29, VAR2->VAR24);
                FUN5(VAR4, "", VAR2->VAR24, VAR30 ? "" : "");
                if (!VAR30)
                {
                    goto VAR22;
                }
            }
            if (VAR2->VAR31)
            {
                if (!FUN17(VAR12, VAR2->VAR31))
                {
                    FUN5(VAR4, "", VAR2->VAR31);
                    goto VAR22;
                }
            }
        }
        FUN18(VAR12);
    }
    return 0;
VAR22:
    FUN18(VAR12);
    return -1;
}