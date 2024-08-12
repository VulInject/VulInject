static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10[VAR5];
    VAR11 *VAR12 = VAR9->VAR12;
    ebml_master VAR13, VAR14;
    int VAR15 = 0;
    int VAR16 = 0;
    int VAR17 = FUN2(VAR12->VAR18);
    int VAR19 = VAR12->VAR19;
    int VAR20 = 0;
    int VAR21, VAR22;
    VAR23 *VAR24;
    FUN3(VAR9, 64, 1, 1000);
    if (VAR12->VAR25 == VAR26)
    {
        VAR4->VAR27 = 1;
        return 0;
    }
    if (!VAR17)
        VAR17 = FUN4(VAR12->VAR28) << 3;
    if (VAR12->VAR18 == VAR29)
    {
        VAR22 = FUN5(VAR2, VAR12, &VAR19, &VAR20);
        if (VAR22 < 0)
            return VAR22;
    }
    VAR14 = FUN6(VAR7, VAR30, 0);
    FUN7(VAR7, VAR31, VAR5 + 1);
    FUN7(VAR7, VAR32, VAR5 + 1);
    FUN7(VAR7, VAR33, 0);
    if ((VAR24 = FUN8(VAR9->VAR34, "", NULL, 0)))
        FUN9(VAR7, VAR35, VAR24->VAR36);
    VAR24 = FUN8(VAR9->VAR34, "", NULL, 0);
    FUN9(VAR7, VAR37, VAR24 ? VAR24->VAR36 : "");
    if (!(VAR9->VAR38 & VAR39))
        FUN7(VAR7, VAR40, !!(VAR9->VAR38 & VAR39));
    if (VAR12->VAR25 == VAR41 && VAR12->VAR42)
    {
        VAR4->VAR43[VAR5].VAR44 = FUN10(VAR12->VAR42, (VAR45){1, VAR12->VAR19}, VAR9->VAR46);
        FUN7(VAR7, VAR47, FUN10(VAR12->VAR42, (VAR45){1, VAR12->VAR19}, (VAR45){1, 1000000000}));
    }
    for (VAR21 = 0; VAR48[VAR21].VAR49 != VAR50; VAR21++)
    {
        if (VAR48[VAR21].VAR49 == VAR12->VAR18)
        {
            FUN9(VAR7, VAR51, VAR48[VAR21].VAR52);
            VAR15 = 1;
            break;
        }
    }
    if (VAR4->VAR53 == VAR54 && !(VAR12->VAR18 == VAR55 || VAR12->VAR18 == VAR56 || VAR12->VAR18 == VAR57 || VAR12->VAR18 == VAR58))
    {
        FUN11(VAR2, VAR59, "");
        return FUN12(VAR60);
    }
    switch (VAR12->VAR25)
    {
    case VAR61:
        FUN7(VAR7, VAR62, VAR63);
        if (VAR9->VAR64.VAR65 > 0 && VAR9->VAR64.VAR66 > 0)
            FUN7(VAR7, VAR67, 1E9 / FUN13(VAR9->VAR64));
        if (!VAR15 && FUN14(VAR68, VAR12->VAR18) && (!FUN14(VAR69, VAR12->VAR18) || VAR12->VAR18 == VAR70 || VAR12->VAR18 == VAR71 || VAR12->VAR18 == VAR72))
            VAR16 = 1;
        if (VAR16)
            FUN9(VAR7, VAR51, "");
        else if (!VAR15)
        {
            FUN9(VAR7, VAR51, "");
            VAR4->VAR43[VAR5].VAR73 = 1;
        }
        VAR13 = FUN6(VAR7, VAR74, 0);
        FUN7(VAR7, VAR75, VAR12->VAR76);
        FUN7(VAR7, VAR77, VAR12->VAR78);
        VAR22 = FUN15(VAR2, VAR7, VAR9, VAR4->VAR53);
        if (VAR22 < 0)
            return VAR22;
        FUN16(VAR7, VAR13);
        break;
    case VAR41:
        FUN7(VAR7, VAR62, VAR79);
        if (!VAR15)
            FUN9(VAR7, VAR51, "");
        VAR13 = FUN6(VAR7, VAR80, 0);
        FUN7(VAR7, VAR81, VAR12->VAR82);
        FUN17(VAR7, VAR83, VAR19);
        if (VAR20)
            FUN17(VAR7, VAR84, VAR20);
        if (VAR17)
            FUN7(VAR7, VAR85, VAR17);
        FUN16(VAR7, VAR13);
        break;
    case VAR86:
        FUN7(VAR7, VAR62, VAR87);
        if (!VAR15)
        {
            FUN11(VAR2, VAR59, "", VAR12->VAR18);
            return FUN12(VAR88);
        }
        break;
    default:
        FUN11(VAR2, VAR59, "");
        break;
    }
    VAR22 = FUN18(VAR2, VAR7, VAR12, VAR15, VAR16);
    if (VAR22 < 0)
        return VAR22;
    FUN16(VAR7, VAR14);
    return 0;
}