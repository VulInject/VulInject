static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR12 *VAR14;
    VAR15 *VAR16;
    mfxBitstream VAR17 = {{{0}}};
    int VAR18;
    if (VAR9->VAR19)
    {
        VAR17.VAR20 = VAR9->VAR21;
        VAR17.VAR22 = VAR9->VAR19;
        VAR17.VAR23 = VAR17.VAR22;
        VAR17.VAR24 = VAR9->VAR25;
    }
    VAR16 = FUN2(sizeof(*VAR16));
    if (!VAR16)
    {
        FUN3(&VAR16);
        return FUN4(VAR26);
    }
    do
    {
        VAR18 = FUN5(VAR2, VAR4, &VAR13);
        if (VAR18 < 0)
            return VAR18;
        VAR18 = FUN6(VAR4->VAR27, VAR9->VAR19 ? &VAR17 : NULL, VAR13, &VAR14, VAR16);
        if (VAR18 == VAR28)
            FUN7(500);
    } while (VAR18 == VAR28 || VAR18 == VAR29);
    if (VAR18 != VAR30 && VAR18 != VAR31 && VAR18 != VAR32 && VAR18 != VAR29)
    {
        FUN8(VAR2, VAR33, "");
        FUN3(&VAR16);
        return FUN9(VAR18);
    }
    if (!*VAR16 && !VAR17.VAR34)
    {
        FUN8(VAR2, VAR35, "");
        VAR17.VAR34 = VAR9->VAR19;
    }
    if (*VAR16)
    {
        VAR10 *VAR11 = FUN10(VAR4, VAR14);
        if (!VAR11)
        {
            FUN8(VAR2, VAR33, "");
            FUN3(&VAR16);
            return VAR36;
        }
        VAR11->VAR37 = 1;
        FUN11(VAR4->VAR38, &VAR11, sizeof(VAR11), NULL);
        FUN11(VAR4->VAR38, &VAR16, sizeof(VAR16), NULL);
    }
    else
    {
        FUN3(&VAR16);
    }
    if (!FUN12(VAR4->VAR38) || (!VAR9->VAR19 && FUN13(VAR4->VAR38)))
    {
        VAR5 *VAR39;
        FUN14(VAR4->VAR38, &VAR11, sizeof(VAR11), NULL);
        FUN14(VAR4->VAR38, &VAR16, sizeof(VAR16), NULL);
        VAR11->VAR37 = 0;
        do
        {
            VAR18 = FUN15(VAR4->VAR27, *VAR16, 1000);
        } while (VAR18 == VAR40);
        FUN3(&VAR16);
        VAR39 = VAR11->VAR6;
        VAR18 = FUN16(VAR6, VAR39);
        if (VAR18 < 0)
            return VAR18;
        VAR14 = VAR11->VAR41;
        FF_DISABLE_DEPRECATION_WARNINGS VAR6->VAR42 = VAR14->VAR20.VAR24;
        FF_ENABLE_DEPRECATION_WARNINGS VAR6->VAR25 = VAR14->VAR20.VAR24;
        VAR6->VAR43 = VAR14->VAR44.VAR45 & VAR46 ? 4 : VAR14->VAR44.VAR45 & VAR47 ? 2
                                                                                      : VAR14->VAR44.VAR45 & VAR48   ? 1
                                                                                                                                                 : 0;
        VAR6->VAR49 = VAR14->VAR44.VAR45 & VAR50;
        VAR6->VAR51 = !(VAR14->VAR44.VAR45 & VAR52);
        *VAR7 = 1;
    }
    return VAR17.VAR34;
}