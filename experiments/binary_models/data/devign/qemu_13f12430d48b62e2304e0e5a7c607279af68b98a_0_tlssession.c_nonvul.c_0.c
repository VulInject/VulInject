FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, QCryptoTLSCredsEndpoint VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    int VAR10;
    VAR9 = FUN2(VAR8, 1);
    FUN3(VAR9, VAR2, VAR3 ? VAR3 : "", VAR4 ? VAR4 : "", VAR5);
    if (VAR3)
    {
        VAR9->VAR3 = FUN4(VAR3);
    }
    if (VAR4)
    {
        VAR9->VAR4 = FUN4(VAR4);
    }
    VAR9->VAR2 = VAR2;
    FUN5(FUN6(VAR2));
    if (VAR2->VAR5 != VAR5)
    {
        FUN7(VAR7, "");
        goto VAR11;
    }
    if (VAR5 == VAR12)
    {
        VAR10 = FUN8(&VAR9->VAR13, VAR14);
    }
    else
    {
        VAR10 = FUN8(&VAR9->VAR13, VAR15);
    }
    if (VAR10 < 0)
    {
        FUN7(VAR7, "", FUN9(VAR10));
        goto VAR11;
    }
    if (FUN10(FUN6(VAR2), VAR16))
    {
        VAR17 *VAR18 = FUN11(VAR2);
        char *VAR19;
        if (VAR2->VAR20 != NULL)
        {
            VAR19 = FUN12("", VAR2->VAR20);
        }
        else
        {
            VAR19 = FUN4("");
        }
        VAR10 = FUN13(VAR9->VAR13, VAR19, NULL);
        if (VAR10 < 0)
        {
            FUN7(VAR7, "", VAR19, FUN9(VAR10));
            FUN14(VAR19);
            goto VAR11;
        }
        FUN14(VAR19);
        if (VAR2->VAR5 == VAR12)
        {
            VAR10 = FUN15(VAR9->VAR13, VAR21, VAR18->VAR22.VAR23);
        }
        else
        {
            VAR10 = FUN15(VAR9->VAR13, VAR21, VAR18->VAR22.VAR24);
        }
        if (VAR10 < 0)
        {
            FUN7(VAR7, "", FUN9(VAR10));
            goto VAR11;
        }
    }
    else if (FUN10(FUN6(VAR2), VAR25))
    {
        VAR26 *VAR27 = FUN16(VAR2);
        const char *VAR19 = VAR2->VAR20;
        if (!VAR19)
        {
            VAR19 = "";
        }
        VAR10 = FUN13(VAR9->VAR13, VAR19, NULL);
        if (VAR10 < 0)
        {
            FUN7(VAR7, "", VAR19, FUN9(VAR10));
            goto VAR11;
        }
        VAR10 = FUN15(VAR9->VAR13, VAR28, VAR27->VAR22);
        if (VAR10 < 0)
        {
            FUN7(VAR7, "", FUN9(VAR10));
            goto VAR11;
        }
        if (VAR2->VAR5 == VAR12)
        {
            FUN17(VAR9->VAR13, VAR29);
        }
    }
    else
    {
        FUN7(VAR7, "", FUN18(FUN6(VAR2)));
        goto VAR11;
    }
    FUN19(VAR9->VAR13, VAR9);
    FUN20(VAR9->VAR13, VAR30);
    FUN21(VAR9->VAR13, VAR31);
    return VAR9;
VAR11:
    FUN22(VAR9);
    return NULL;
}