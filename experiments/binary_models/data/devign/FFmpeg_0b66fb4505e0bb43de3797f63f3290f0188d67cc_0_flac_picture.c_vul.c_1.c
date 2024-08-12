int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const VAR6 *VAR7 = VAR8;
    enum AVCodecID VAR9 = VAR10;
    VAR11 *VAR12 = NULL;
    uint8_t VAR13[64], *VAR14 = NULL;
    VAR15 *VAR16 = NULL;
    VAR17 *VAR18;
    int VAR19, VAR20, VAR21;
    int VAR22, VAR23 = 0;
    VAR16 = FUN2(VAR4, VAR5, 0, NULL, NULL, NULL, NULL);
    if (!VAR16)
        return FUN3(VAR24);
    VAR19 = FUN4(VAR16);
    if (VAR19 >= FUN5(VAR25) || VAR19 < 0)
    {
        FUN6(VAR2, VAR26, "", VAR19);
        if (VAR2->VAR27 & VAR28)
        {
            VAR23 = VAR29;
            goto VAR30;
        }
        VAR19 = 0;
    }
    VAR22 = FUN4(VAR16);
    if (VAR22 <= 0 || FUN7(VAR16, VAR13, FUN8(VAR22, sizeof(VAR13) - 1)) != VAR22)
    {
        FUN6(VAR2, VAR26, ""
                                "");
        if (VAR2->VAR27 & VAR28)
            VAR23 = VAR29;
        goto VAR30;
    }
    VAR13[VAR22] = 0;
    while (VAR7->VAR9 != VAR10)
    {
        if (!FUN9(VAR7->VAR31, VAR13, sizeof(VAR13)))
        {
            VAR9 = VAR7->VAR9;
            break;
        }
        VAR7++;
    }
    if (VAR9 == VAR10)
    {
        FUN6(VAR2, VAR26, "", VAR13);
        if (VAR2->VAR27 & VAR28)
            VAR23 = VAR29;
        goto VAR30;
    }
    VAR22 = FUN4(VAR16);
    if (VAR22 > 0)
    {
        if (!(VAR14 = FUN10(VAR22 + 1)))
        {
            VAR23 = FUN3(VAR24);
            goto VAR30;
        }
        if (FUN7(VAR16, VAR14, VAR22) != VAR22)
        {
            FUN6(VAR2, VAR26, "");
            if (VAR2->VAR27 & VAR28)
                VAR23 = FUN3(VAR32);
            goto VAR30;
        }
        VAR14[VAR22] = 0;
    }
    VAR20 = FUN4(VAR16);
    VAR21 = FUN4(VAR16);
    FUN11(VAR16, 8);
    VAR22 = FUN4(VAR16);
    if (VAR22 <= 0)
    {
        FUN6(VAR2, VAR26, "", VAR22);
        if (VAR2->VAR27 & VAR28)
            VAR23 = VAR29;
        goto VAR30;
    }
    if (!(VAR12 = FUN12(VAR22)))
    {
        VAR23 = FUN3(VAR24);
        goto VAR30;
    }
    if (FUN7(VAR16, VAR12->VAR12, VAR22) != VAR22)
    {
        FUN6(VAR2, VAR26, "");
        if (VAR2->VAR27 & VAR28)
            VAR23 = FUN3(VAR32);
        goto VAR30;
    }
    VAR18 = FUN13(VAR2, NULL);
    if (!VAR18)
    {
        VAR23 = FUN3(VAR24);
        goto VAR30;
    }
    FUN14(&VAR18->VAR33);
    VAR18->VAR33.VAR4 = VAR12;
    VAR18->VAR33.VAR12 = VAR12->VAR12;
    VAR18->VAR33.VAR34 = VAR22;
    VAR18->VAR33.VAR35 = VAR18->VAR36;
    VAR18->VAR33.VAR37 |= VAR38;
    VAR18->VAR39 |= VAR40;
    VAR18->VAR41->VAR42 = VAR43;
    VAR18->VAR41->VAR44 = VAR9;
    VAR18->VAR41->VAR20 = VAR20;
    VAR18->VAR41->VAR21 = VAR21;
    FUN15(&VAR18->VAR45, "", VAR25[VAR19], 0);
    if (VAR14)
        FUN15(&VAR18->VAR45, "", VAR14, VAR46);
    FUN16(&VAR16);
    return 0;
VAR30:
    FUN17(&VAR12);
    FUN16(&VAR14);
    FUN16(&VAR16);
    return VAR23;
}