static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QEDHeader VAR11;
    int64_t VAR12;
    int VAR13;
    VAR9->VAR2 = VAR2;
    FUN2(&VAR9->VAR14);
    VAR13 = FUN3(VAR2->VAR15, 0, &VAR11, sizeof(VAR11));
    if (VAR13 < 0)
    {
        return VAR13;
    }
    FUN4(&VAR11, &VAR9->VAR16);
    if (VAR9->VAR16.VAR17 != VAR18)
    {
        FUN5(VAR7, "");
        return -VAR19;
    }
    if (VAR9->VAR16.VAR20 & ~VAR21)
    {
        char VAR22[64];
        snprintf(VAR22, sizeof(VAR22), "" VAR23, VAR9->VAR16.VAR20 & ~VAR21);
        FUN6(VAR7, VAR24, FUN7(VAR2), "", VAR22);
        return -VAR25;
    }
    if (!FUN8(VAR9->VAR16.VAR26))
    {
        return -VAR19;
    }
    VAR12 = FUN9(VAR2->VAR15);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR9->VAR12 = FUN10(VAR9, VAR12);
    if (!FUN11(VAR9->VAR16.VAR27))
    {
        return -VAR19;
    }
    if (!FUN12(VAR9->VAR16.VAR28, VAR9->VAR16.VAR26, VAR9->VAR16.VAR27))
    {
        return -VAR19;
    }
    if (!FUN13(VAR9, VAR9->VAR16.VAR29))
    {
        return -VAR19;
    }
    VAR9->VAR30 = (VAR9->VAR16.VAR26 * VAR9->VAR16.VAR27) / sizeof(VAR31);
    VAR9->VAR32 = FUN14(VAR9->VAR16.VAR26);
    VAR9->VAR33 = VAR9->VAR30 - 1;
    VAR9->VAR34 = VAR9->VAR32 + FUN14(VAR9->VAR30);
    if (VAR9->VAR16.VAR35 > VAR36 / VAR9->VAR16.VAR26)
    {
        return -VAR19;
    }
    if ((VAR9->VAR16.VAR20 & VAR37))
    {
        if ((VAR31)VAR9->VAR16.VAR38 + VAR9->VAR16.VAR39 > VAR9->VAR16.VAR26 * VAR9->VAR16.VAR35)
        {
            return -VAR19;
        }
        VAR13 = FUN15(VAR2->VAR15, VAR9->VAR16.VAR38, VAR9->VAR16.VAR39, VAR2->VAR40, sizeof(VAR2->VAR40));
        if (VAR13 < 0)
        {
            return VAR13;
        }
        if (VAR9->VAR16.VAR20 & VAR41)
        {
            FUN16(VAR2->VAR42, sizeof(VAR2->VAR42), "");
        }
    }
    if ((VAR9->VAR16.VAR43 & ~VAR44) != 0 && !FUN17(VAR2->VAR15) && !(VAR5 & VAR45))
    {
        VAR9->VAR16.VAR43 &= VAR44;
        VAR13 = FUN18(VAR9);
        if (VAR13)
        {
            return VAR13;
        }
        FUN19(VAR2->VAR15);
    }
    VAR9->VAR46 = FUN20(VAR9);
    FUN21(&VAR9->VAR47);
    VAR13 = FUN22(VAR9);
    if (VAR13)
    {
        goto VAR48;
    }
    if (!(VAR5 & VAR49) && (VAR9->VAR16.VAR20 & VAR50))
    {
        if (!FUN17(VAR2->VAR15) && !(VAR5 & VAR45))
        {
            BdrvCheckResult VAR51 = {0};
            VAR13 = FUN23(VAR9, &VAR51, true);
            if (VAR13)
            {
                goto VAR48;
            }
        }
    }
    FUN24(VAR2, FUN25(VAR2));
VAR48:
    if (VAR13)
    {
        FUN26(&VAR9->VAR47);
        FUN27(VAR9->VAR46);
    }
    return VAR13;
}