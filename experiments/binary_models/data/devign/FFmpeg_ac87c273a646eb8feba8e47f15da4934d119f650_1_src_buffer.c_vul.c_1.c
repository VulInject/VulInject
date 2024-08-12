int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR3 *VAR9;
    int VAR10;
    if (!VAR4)
    {
        VAR7->VAR11 = 1;
        return 0;
    }
    else if (VAR7->VAR11)
        return FUN2(VAR12);
    if (!FUN3(VAR7->VAR13) && (VAR10 = FUN4(VAR7->VAR13, FUN5(VAR7->VAR13) + sizeof(VAR9))) < 0)
        return VAR10;
    if (!(VAR5 & VAR14))
    {
        VAR10 = FUN6(VAR2, VAR4);
        if (VAR10 < 0)
            return VAR10;
    }
    if (VAR5 & VAR15)
        VAR9 = VAR4;
    else
        VAR9 = FUN7(VAR2, VAR4);
    if ((VAR10 = FUN8(VAR7->VAR13, &VAR9, sizeof(VAR9), NULL)) < 0)
    {
        if (VAR9 != VAR4)
            FUN9(VAR9);
        return VAR10;
    }
    VAR7->VAR16 = 0;
    return 0;