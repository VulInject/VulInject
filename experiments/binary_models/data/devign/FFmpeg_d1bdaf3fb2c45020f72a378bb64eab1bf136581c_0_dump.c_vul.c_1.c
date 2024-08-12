static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    char VAR6[256];
    int VAR7 = (VAR5 ? VAR2->VAR8->VAR7 : VAR2->VAR9->VAR7);
    VAR10 *VAR11 = VAR2->VAR12[VAR3];
    VAR13 *VAR14 = FUN2(VAR11->VAR15, "", NULL, 0);
    char *VAR16 = VAR2->VAR17;
    char **VAR18 = FUN3(VAR11->VAR19->VAR20, VAR11->VAR19, "");
    int VAR21 = !*VAR18;
    if (VAR21)
        *VAR18 = FUN4(VAR16);
    FUN5(VAR6, sizeof(VAR6), VAR11->VAR19, VAR5);
    if (VAR21)
        FUN6(VAR18);
    FUN7(NULL, VAR22, "", VAR4, VAR3);
    if (VAR7 & VAR23)
        FUN7(NULL, VAR22, "", VAR11->VAR24);
    if (VAR14)
        FUN7(NULL, VAR22, "", VAR14->VAR25);
    FUN7(NULL, VAR26, "", VAR11->VAR27, VAR11->VAR28.VAR29, VAR11->VAR28.VAR30);
    FUN7(NULL, VAR22, "", VAR6);
    if (VAR11->VAR31.VAR29 && FUN8(VAR11->VAR31, VAR11->VAR19->VAR31))
    {
        AVRational VAR32;
        FUN9(&VAR32.VAR29, &VAR32.VAR30, VAR11->VAR19->VAR33 * VAR11->VAR31.VAR29, VAR11->VAR19->VAR34 * VAR11->VAR31.VAR30, 1024 * 1024);
        FUN7(NULL, VAR22, "", VAR11->VAR31.VAR29, VAR11->VAR31.VAR30, VAR32.VAR29, VAR32.VAR30);
    }
    if (VAR11->VAR19->VAR35 == VAR36)
    {
        int VAR37 = VAR11->VAR38.VAR30 && VAR11->VAR38.VAR29;
        int VAR39 = VAR11->VAR40.VAR30 && VAR11->VAR40.VAR29;
        int VAR41 = VAR11->VAR28.VAR30 && VAR11->VAR28.VAR29;
        int VAR42 = VAR11->VAR19->VAR28.VAR30 && VAR11->VAR19->VAR28.VAR29;
        if (VAR37 || VAR39 || VAR41 || VAR42)
            FUN7(NULL, VAR22, "", VAR16);
        if (VAR37)
            FUN10(FUN11(VAR11->VAR38), VAR39 || VAR41 || VAR42 ? "" : "");
        if (VAR39)
            FUN10(FUN11(VAR11->VAR40), VAR41 || VAR42 ? "" : "");
        if (VAR41)
            FUN10(1 / FUN11(VAR11->VAR28), VAR42 ? "" : "");
        if (VAR42)
            FUN10(1 / FUN11(VAR11->VAR19->VAR28), "");
    }
    if (VAR11->VAR43 & VAR44)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR45)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR46)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR47)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR48)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR49)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR50)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR51)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR52)
        FUN7(NULL, VAR22, "");
    if (VAR11->VAR43 & VAR53)
        FUN7(NULL, VAR22, "");
    FUN7(NULL, VAR22, "");
    FUN12(NULL, VAR11->VAR15, "");
    FUN13(NULL, VAR11, "");
}