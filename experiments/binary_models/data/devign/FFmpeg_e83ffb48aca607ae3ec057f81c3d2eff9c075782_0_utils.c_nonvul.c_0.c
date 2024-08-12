static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6;
    const VAR7 *VAR8;
    uint32_t VAR9;
    int64_t VAR10;
    VAR8 = FUN2(VAR4, VAR11, &VAR5);
    if (!VAR8)
        return 0;
    if (!(VAR2->VAR12->VAR13 & VAR14))
    {
        FUN3(VAR2, VAR15, ""
                                    "");
        return FUN4(VAR16);
    }
    if (VAR5 < 4)
        goto VAR17;
    VAR9 = FUN5(&VAR8);
    VAR5 -= 4;
    if (VAR9 & VAR18)
    {
        if (VAR5 < 4)
            goto VAR17;
        VAR10 = FUN5(&VAR8);
        if (VAR10 <= 0 || VAR10 > VAR19)
        {
            FUN3(VAR2, VAR15, "");
            return VAR20;
        }
        VAR2->VAR21 = VAR10;
        VAR5 -= 4;
    }
    if (VAR9 & VAR22)
    {
        if (VAR5 < 8)
            goto VAR17;
        VAR2->VAR23 = FUN6(&VAR8);
        VAR5 -= 8;
    }
    if (VAR9 & VAR24)
    {
        if (VAR5 < 4)
            goto VAR17;
        VAR10 = FUN5(&VAR8);
        if (VAR10 <= 0 || VAR10 > VAR19)
        {
            FUN3(VAR2, VAR15, "");
            return VAR20;
        }
        VAR2->VAR25 = VAR10;
        VAR5 -= 4;
    }
    if (VAR9 & VAR26)
    {
        if (VAR5 < 8)
            goto VAR17;
        VAR2->VAR27 = FUN5(&VAR8);
        VAR2->VAR28 = FUN5(&VAR8);
        VAR5 -= 8;
        VAR6 = FUN7(VAR2, VAR2->VAR27, VAR2->VAR28);
        if (VAR6 < 0)
            return VAR6;
    }
    return 0;
VAR17:
    FUN3(VAR2, VAR15, "");
    return VAR20;
}