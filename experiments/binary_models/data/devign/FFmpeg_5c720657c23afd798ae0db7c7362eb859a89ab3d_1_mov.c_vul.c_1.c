static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8->VAR9 < 1)
        return 0;
    if (VAR5.VAR10 <= 40)
        return 0;
    VAR7 = VAR2->VAR8->VAR11[VAR2->VAR8->VAR9 - 1];
    if ((VAR12)VAR5.VAR10 > (1 << 30))
        return VAR13;
    FUN2(VAR7->VAR14->VAR15);
    VAR7->VAR14->VAR15 = FUN3(VAR5.VAR10 - 40 + VAR16);
    if (!VAR7->VAR14->VAR15)
        return FUN4(VAR17);
    VAR7->VAR14->VAR18 = VAR5.VAR10 - 40;
    FUN5(VAR4, 40);
    FUN6(VAR4, VAR7->VAR14->VAR15, VAR5.VAR10 - 40);
    return 0;
}