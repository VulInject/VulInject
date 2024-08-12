int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR2->VAR7 = 0;
    VAR2->VAR8 = VAR2->VAR9 = VAR2->VAR10 = 0;
    if ((VAR6 = FUN2(&VAR2->VAR11, VAR4, VAR5)) < 0)
        return VAR6;
    VAR2->VAR12 = VAR2->VAR11;
    if ((VAR6 = FUN3(VAR2)) < 0)
        return VAR6;
    if ((VAR6 = FUN4(VAR2)) < 0)
        return VAR6;
    if ((VAR6 = FUN5(VAR2, VAR13, 0)) < 0)
        return VAR6;
    if ((VAR6 = FUN6(VAR2)) < 0)
        return VAR6;
    if (VAR2->VAR14 > VAR5)
        VAR2->VAR14 = VAR5;
    if (FUN7(&VAR2->VAR11, VAR2->VAR14 * 8))
    {
        FUN8(VAR2->VAR15, VAR16, "");
        if (VAR2->VAR15->VAR17 & VAR18)
            return VAR19;
    }
    return 0;
}