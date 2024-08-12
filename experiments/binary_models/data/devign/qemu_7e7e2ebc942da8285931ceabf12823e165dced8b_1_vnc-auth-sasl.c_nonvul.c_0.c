void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = NULL;
    sasl_security_properties_t VAR4;
    int VAR5;
    char *VAR6, *VAR7;
    int VAR8;
    FUN2("", VAR2->VAR9);
    if (!(VAR6 = FUN3("", VAR2->VAR9)))
        goto VAR10;
    if (!(VAR7 = FUN4("", VAR2->VAR9)))
    {
        free(VAR6);
        goto VAR10;
    }
    VAR5 = FUN5("", NULL, NULL, VAR6, VAR7, NULL, VAR11, &VAR2->VAR12.VAR13);
    free(VAR6);
    free(VAR7);
    VAR6 = VAR7 = NULL;
    if (VAR5 != VAR14)
    {
        FUN2("", VAR5, FUN6(VAR5, NULL, NULL));
        VAR2->VAR12.VAR13 = NULL;
        goto VAR10;
    }
    if (VAR2->VAR15 == VAR16 && VAR2->VAR17 == VAR18)
    {
        gnutls_cipher_algorithm_t VAR19;
        sasl_ssf_t VAR20;
        VAR19 = FUN7(VAR2->VAR21.VAR22);
        if (!(VAR20 = (VAR23)FUN8(VAR19)))
        {
            FUN2("", "");
            FUN9(&VAR2->VAR12.VAR13);
            VAR2->VAR12.VAR13 = NULL;
            goto VAR10;
        }
        VAR20 *= 8;
        VAR5 = FUN10(VAR2->VAR12.VAR13, VAR24, &VAR20);
        if (VAR5 != VAR14)
        {
            FUN2("", VAR5, FUN6(VAR5, NULL, NULL));
            FUN9(&VAR2->VAR12.VAR13);
            VAR2->VAR12.VAR13 = NULL;
            goto VAR10;
        }
    }
    else
        VAR2->VAR12.VAR25 = 1;
    memset(&VAR4, 0, sizeof VAR4);
    if (FUN11(VAR2->VAR26->VAR27, "", 5) == 0 || (VAR2->VAR15 == VAR16 && VAR2->VAR17 == VAR18))
    {
        VAR4.VAR28 = 0;
        VAR4.VAR29 = 0;
        VAR4.VAR30 = 8192;
        VAR4.VAR31 = 0;
    }
    else
    {
        VAR4.VAR28 = 56;
        VAR4.VAR29 = 100000;
        VAR4.VAR30 = 8192;
        VAR4.VAR31 = VAR32 | VAR33;
    }
    VAR5 = FUN10(VAR2->VAR12.VAR13, VAR34, &VAR4);
    if (VAR5 != VAR14)
    {
        FUN2("", VAR5, FUN6(VAR5, NULL, NULL));
        FUN9(&VAR2->VAR12.VAR13);
        VAR2->VAR12.VAR13 = NULL;
        goto VAR10;
    }
    VAR5 = FUN12(VAR2->VAR12.VAR13, NULL, "", "", "", &VAR3, NULL, NULL);
    if (VAR5 != VAR14)
    {
        FUN2("", VAR5, FUN13(VAR2->VAR12.VAR13));
        FUN9(&VAR2->VAR12.VAR13);
        VAR2->VAR12.VAR13 = NULL;
        goto VAR10;
    }
    FUN2("", VAR3);
    if (!(VAR2->VAR12.VAR3 = strdup(VAR3)))
    {
        FUN2("");
        FUN9(&VAR2->VAR12.VAR13);
        VAR2->VAR12.VAR13 = NULL;
        goto VAR10;
    }
    VAR8 = strlen(VAR3);
    FUN14(VAR2, VAR8);
    FUN15(VAR2, VAR3, VAR8);
    FUN16(VAR2);
    FUN2("");
    FUN17(VAR2, VAR35, 4);
    return;
VAR10:
    FUN18(VAR2);
    return;
}