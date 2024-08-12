static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const VAR6 *VAR7 = VAR8;
    enum CodecID VAR9 = VAR10;
    uint8_t VAR11[64], *VAR12 = NULL, *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    VAR16 *VAR17;
    int VAR18, VAR19, VAR20;
    int VAR21, VAR22 = 0;
    VAR17 = FUN2(VAR2, NULL);
    if (!VAR17)
        return FUN3(VAR23);
    VAR15 = FUN4(VAR4, VAR5, 0, NULL, NULL, NULL, NULL);
    if (!VAR15)
        return FUN3(VAR23);
    VAR18 = FUN5(VAR15);
    if (VAR18 >= FUN6(VAR24) || VAR18 < 0)
    {
        FUN7(VAR2, VAR25, "", VAR18);
        VAR22 = VAR26;
        goto VAR27;
    }
    VAR21 = FUN5(VAR15);
    if (VAR21 <= 0 || FUN8(VAR15, VAR11, FUN9(VAR21, sizeof(VAR11) - 1)) != VAR21)
    {
        FUN7(VAR2, VAR25, ""
                                "");
        VAR22 = VAR26;
        goto VAR27;
    }
    VAR11[VAR21] = 0;
    while (VAR7->VAR9 != VAR10)
    {
        if (!FUN10(VAR7->VAR28, VAR11, sizeof(VAR11)))
        {
            VAR9 = VAR7->VAR9;
            break;
        }
        VAR7++;
    }
    if (VAR9 == VAR10)
    {
        FUN7(VAR2, VAR25, "", VAR11);
        VAR22 = VAR26;
        goto VAR27;
    }
    VAR21 = FUN5(VAR15);
    if (VAR21 > 0)
    {
        if (!(VAR12 = FUN11(VAR21 + 1)))
        {
            VAR22 = FUN3(VAR23);
            goto VAR27;
        }
        if (FUN8(VAR15, VAR12, VAR21) != VAR21)
        {
            VAR22 = FUN3(VAR29);
            goto VAR27;
        }
        VAR12[VAR21] = 0;
    }
    VAR19 = FUN5(VAR15);
    VAR20 = FUN5(VAR15);
    FUN12(VAR15, 8);
    VAR21 = FUN5(VAR15);
    if (VAR21 <= 0)
    {
        VAR22 = VAR26;
        goto VAR27;
    }
    if (!(VAR13 = FUN11(VAR21)))
    {
        VAR22 = FUN3(VAR23);
        goto VAR27;
    }
    if (FUN8(VAR15, VAR13, VAR21) != VAR21)
    {
        VAR22 = FUN3(VAR29);
        goto VAR27;
    }
    FUN13(&VAR17->VAR30);
    VAR17->VAR30.VAR13 = VAR13;
    VAR17->VAR30.VAR31 = VAR21;
    VAR17->VAR30.VAR32 = VAR33;
    VAR17->VAR30.VAR34 = VAR17->VAR35;
    VAR17->VAR30.VAR36 |= VAR37;
    VAR17->VAR38 |= VAR39;
    VAR17->VAR40->VAR41 = VAR42;
    VAR17->VAR40->VAR43 = VAR9;
    VAR17->VAR40->VAR19 = VAR19;
    VAR17->VAR40->VAR20 = VAR20;
    FUN14(&VAR17->VAR44, "", VAR24[VAR18], 0);
    if (VAR12)
        FUN14(&VAR17->VAR44, "", VAR12, VAR45);
    FUN15(&VAR15);
    return 0;
VAR27:
    FUN15(&VAR12);
    FUN15(&VAR13);
    FUN15(&VAR15);
    return VAR22;
}