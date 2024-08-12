static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8->VAR9 < 1)
        return 0;
    VAR7 = VAR2->VAR8->VAR10[VAR2->VAR8->VAR9 - 1];
    if ((VAR11)VAR5.VAR12 > (1 << 30))
        return VAR13;
    if (VAR7->VAR14->VAR15 == VAR16 || VAR7->VAR14->VAR15 == VAR17)
    {
        FUN2(VAR7->VAR14->VAR18);
        VAR7->VAR14->VAR18 = FUN3(VAR5.VAR12 + VAR19);
        if (!VAR7->VAR14->VAR18)
            return FUN4(VAR20);
        VAR7->VAR14->VAR21 = VAR5.VAR12;
        FUN5(VAR4, VAR7->VAR14->VAR18, VAR5.VAR12);
    }
    else if (VAR5.VAR12 > 8)
    {
        int VAR22;
        if ((VAR22 = FUN6(VAR2, VAR4, VAR5)) < 0)
            return VAR22;
    }
    else
        FUN7(VAR4, VAR5.VAR12);
    return 0;
}