static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR10->VAR13;
    struct VAR14 *VAR15 = NULL;
    int VAR16 = 1;
    VAR17 *VAR18;
    int VAR19;
    int VAR20;
    int VAR21 = 0;
    int VAR22, VAR23;
    if (!VAR6)
    {
        if (!VAR10->VAR24)
        {
            FUN2(VAR13);
            VAR10->VAR24 = 1;
        }
    }
    else
    {
        VAR25 *VAR26 = FUN3(VAR2, VAR6);
        if (!VAR26)
            return FUN4(VAR27);
        FUN5(VAR13, VAR26);
    }
    if (VAR10->VAR28)
        VAR16 = 0;
    while (VAR16)
    {
        int VAR29;
        SchroStateEnum VAR30;
        VAR30 = FUN6(VAR13);
        switch (VAR30)
        {
        case VAR31:
        case VAR32:
            VAR18 = FUN7(VAR13, &VAR19);
            if (VAR18->VAR33 <= 0)
                return VAR34;
            VAR20 = VAR18->VAR35[4];
            if ((VAR29 = FUN8(&VAR10->VAR18, VAR10->VAR36 + VAR18->VAR33)) < 0)
            {
                VAR10->VAR36 = 0;
                return VAR29;
            }
            memcpy(VAR10->VAR18 + VAR10->VAR36, VAR18->VAR35, VAR18->VAR33);
            VAR10->VAR36 += VAR18->VAR33;
            if (VAR30 == VAR32)
            {
                VAR10->VAR28 = 1;
                VAR16 = 0;
            }
            if (!FUN9(VAR20))
            {
                FUN10(VAR18);
                break;
            }
            VAR15 = FUN11(sizeof(VAR14));
            if (!VAR15)
                return FUN4(VAR27);
            VAR15->VAR37 = VAR10->VAR36;
            VAR15->VAR38 = VAR10->VAR18;
            if (FUN12(VAR20) && FUN13(VAR20))
                VAR15->VAR39 = 1;
            VAR15->VAR40 = FUN14(VAR18->VAR35 + 13);
            FUN15(&VAR10->VAR41, VAR15);
            VAR10->VAR36 = 0;
            VAR10->VAR18 = NULL;
            FUN10(VAR18);
            break;
        case VAR42:
            VAR16 = 0;
            break;
        case VAR43:
            break;
        default:
            FUN16(VAR2, VAR44, "");
            return -1;
        }
    }
    if (VAR10->VAR41.VAR37 == 1 && VAR10->VAR28)
        VAR21 = 1;
    VAR15 = FUN17(&VAR10->VAR41);
    if (!VAR15)
        return 0;
    VAR22 = VAR15->VAR37;
    if (VAR21 && VAR10->VAR36 > 0)
        VAR22 += VAR10->VAR36;
    if ((VAR23 = FUN18(VAR4, VAR22)) < 0)
    {
        FUN16(VAR2, VAR44, "", VAR22);
        goto VAR45;
    }
    memcpy(VAR4->VAR35, VAR15->VAR38, VAR15->VAR37);
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR46->VAR39 = VAR15->VAR39;
    VAR2->VAR46->VAR47 = VAR15->VAR40;
    FF_ENABLE_DEPRECATION_WARNINGS VAR4->VAR47 = VAR15->VAR40;
    VAR4->VAR48 = VAR10->VAR48++;
    VAR8 = VAR15->VAR37;
    if (VAR21 && VAR10->VAR36 > 0)
    {
        memcpy(VAR4->VAR35 + VAR8, VAR10->VAR18, VAR10->VAR36);
        VAR8 += VAR10->VAR36;
        FUN19(&VAR10->VAR18);
        VAR10->VAR36 = 0;
    }
    if (VAR15->VAR39)
        VAR4->VAR49 |= VAR50;
    *VAR7 = 1;
VAR45:
    FUN20(VAR15);
    return VAR23;
}