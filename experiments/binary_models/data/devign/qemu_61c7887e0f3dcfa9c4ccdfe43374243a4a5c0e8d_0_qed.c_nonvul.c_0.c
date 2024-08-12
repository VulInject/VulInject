static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QEDHeader VAR11;
    int64_t VAR12;
    int VAR13;
    VAR13 = FUN2(VAR2->VAR14, 0, &VAR11, sizeof(VAR11));
    if (VAR13 < 0)
    {
        return VAR13;
    }
    FUN3(&VAR11, &VAR9->VAR15);
    if (VAR9->VAR15.VAR16 != VAR17)
    {
        FUN4(VAR7, "");
        return -VAR18;
    }
    if (VAR9->VAR15.VAR19 & ~VAR20)
    {
        FUN4(VAR7, "" VAR21, VAR9->VAR15.VAR19 & ~VAR20);
        return -VAR22;
    }
    if (!FUN5(VAR9->VAR15.VAR23))
    {
        return -VAR18;
    }
    VAR12 = FUN6(VAR2->VAR14->VAR2);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR9->VAR12 = FUN7(VAR9, VAR12);
    if (!FUN8(VAR9->VAR15.VAR24))
    {
        return -VAR18;
    }
    if (!FUN9(VAR9->VAR15.VAR25, VAR9->VAR15.VAR23, VAR9->VAR15.VAR24))
    {
        return -VAR18;
    }
    if (!FUN10(VAR9, VAR9->VAR15.VAR26))
    {
        return -VAR18;
    }
    VAR9->VAR27 = (VAR9->VAR15.VAR23 * VAR9->VAR15.VAR24) / sizeof(VAR28);
    VAR9->VAR29 = FUN11(VAR9->VAR15.VAR23);
    VAR9->VAR30 = VAR9->VAR27 - 1;
    VAR9->VAR31 = VAR9->VAR29 + FUN11(VAR9->VAR27);
    if (VAR9->VAR15.VAR32 > VAR33 / VAR9->VAR15.VAR23)
    {
        return -VAR18;
    }
    if ((VAR9->VAR15.VAR19 & VAR34))
    {
        if ((VAR28)VAR9->VAR15.VAR35 + VAR9->VAR15.VAR36 > VAR9->VAR15.VAR23 * VAR9->VAR15.VAR32)
        {
            return -VAR18;
        }
        VAR13 = FUN12(VAR2->VAR14, VAR9->VAR15.VAR35, VAR9->VAR15.VAR36, VAR2->VAR37, sizeof(VAR2->VAR37));
        if (VAR13 < 0)
        {
            return VAR13;
        }
        if (VAR9->VAR15.VAR19 & VAR38)
        {
            FUN13(VAR2->VAR39, sizeof(VAR2->VAR39), "");
        }
    }
    if ((VAR9->VAR15.VAR40 & ~VAR41) != 0 && !FUN14(VAR2->VAR14->VAR2) && !(VAR5 & VAR42))
    {
        VAR9->VAR15.VAR40 &= VAR41;
        VAR13 = FUN15(VAR9);
        if (VAR13)
        {
            return VAR13;
        }
        FUN16(VAR2->VAR14->VAR2);
    }
    VAR9->VAR43 = FUN17(VAR9);
    FUN18(&VAR9->VAR44);
    VAR13 = FUN19(VAR9);
    if (VAR13)
    {
        goto VAR45;
    }
    if (!(VAR5 & VAR46) && (VAR9->VAR15.VAR19 & VAR47))
    {
        if (!FUN14(VAR2->VAR14->VAR2) && !(VAR5 & VAR42))
        {
            BdrvCheckResult VAR48 = {0};
            VAR13 = FUN20(VAR9, &VAR48, true);
            if (VAR13)
            {
                goto VAR45;
            }
        }
    }
    FUN21(VAR2, FUN22(VAR2));
VAR45:
    if (VAR13)
    {
        FUN23(&VAR9->VAR44);
        FUN24(VAR9->VAR43);
    }
    return VAR13;
}