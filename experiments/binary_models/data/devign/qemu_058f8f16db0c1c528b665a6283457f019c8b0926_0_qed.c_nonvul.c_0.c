static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    QEDHeader VAR7;
    int64_t VAR8;
    int VAR9;
    VAR5->VAR2 = VAR2;
    FUN2(&VAR5->VAR10);
    VAR9 = FUN3(VAR2->VAR11, 0, &VAR7, sizeof(VAR7));
    if (VAR9 < 0)
    {
        return VAR9;
    }
    FUN4(&VAR7, &VAR5->VAR12);
    if (VAR5->VAR12.VAR13 != VAR14)
    {
        return -VAR15;
    }
    if (VAR5->VAR12.VAR16 & ~VAR17)
    {
        char VAR18[64];
        snprintf(VAR18, sizeof(VAR18), "" VAR19, VAR5->VAR12.VAR16 & ~VAR17);
        FUN5(VAR20, VAR2->VAR21, "", VAR18);
        return -VAR22;
    }
    if (!FUN6(VAR5->VAR12.VAR23))
    {
        return -VAR15;
    }
    VAR8 = FUN7(VAR2->VAR11);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    VAR5->VAR8 = FUN8(VAR5, VAR8);
    if (!FUN9(VAR5->VAR12.VAR24))
    {
        return -VAR15;
    }
    if (!FUN10(VAR5->VAR12.VAR25, VAR5->VAR12.VAR23, VAR5->VAR12.VAR24))
    {
        return -VAR15;
    }
    if (!FUN11(VAR5, VAR5->VAR12.VAR26))
    {
        return -VAR15;
    }
    VAR5->VAR27 = (VAR5->VAR12.VAR23 * VAR5->VAR12.VAR24) / sizeof(VAR28);
    VAR5->VAR29 = FUN12(VAR5->VAR12.VAR23) - 1;
    VAR5->VAR30 = VAR5->VAR27 - 1;
    VAR5->VAR31 = VAR5->VAR29 + FUN12(VAR5->VAR27) - 1;
    if ((VAR5->VAR12.VAR16 & VAR32))
    {
        if ((VAR28)VAR5->VAR12.VAR33 + VAR5->VAR12.VAR34 > VAR5->VAR12.VAR23 * VAR5->VAR12.VAR35)
        {
            return -VAR15;
        }
        VAR9 = FUN13(VAR2->VAR11, VAR5->VAR12.VAR33, VAR5->VAR12.VAR34, VAR2->VAR36, sizeof(VAR2->VAR36));
        if (VAR9 < 0)
        {
            return VAR9;
        }
        if (VAR5->VAR12.VAR16 & VAR37)
        {
            FUN14(VAR2->VAR38, sizeof(VAR2->VAR38), "");
        }
    }
    if ((VAR5->VAR12.VAR39 & ~VAR40) != 0 && !FUN15(VAR2->VAR11) && !(VAR3 & VAR41))
    {
        VAR5->VAR12.VAR39 &= VAR40;
        VAR9 = FUN16(VAR5);
        if (VAR9)
        {
            return VAR9;
        }
        FUN17(VAR2->VAR11);
    }
    VAR5->VAR42 = FUN18(VAR5);
    FUN19(&VAR5->VAR43);
    VAR9 = FUN20(VAR5);
    if (VAR9)
    {
        goto VAR44;
    }
    if (!(VAR3 & VAR45) && (VAR5->VAR12.VAR16 & VAR46))
    {
        if (!FUN15(VAR2->VAR11) && !(VAR3 & VAR41))
        {
            BdrvCheckResult VAR47 = {0};
            VAR9 = FUN21(VAR5, &VAR47, true);
            if (VAR9)
            {
                goto VAR44;
            }
        }
    }
    VAR5->VAR48 = FUN22(VAR49, VAR50, VAR5);
VAR44:
    if (VAR9)
    {
        FUN23(&VAR5->VAR43);
        FUN24(VAR5->VAR42);
    }
    return VAR9;
}