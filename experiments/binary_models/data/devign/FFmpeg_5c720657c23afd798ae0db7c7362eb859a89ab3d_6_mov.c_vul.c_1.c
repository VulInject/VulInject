static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8->VAR9 < 1)
        return 0;
    VAR7 = VAR2->VAR8->VAR10[VAR2->VAR8->VAR9 - 1];
    if ((VAR11)VAR5.VAR12 > (1 << 30))
        return VAR13;
    if (VAR5.VAR12 >= 10)
    {
        unsigned VAR12 = FUN2(VAR4);
        unsigned VAR14 = FUN3(VAR4);
        FUN4(VAR4, -8, VAR15);
        if (VAR14 == FUN5('', '', '', '') && VAR12 == VAR5.VAR12)
            return FUN6(VAR2, VAR4, VAR5);
    }
    FUN7(VAR7->VAR16->VAR17);
    VAR7->VAR16->VAR17 = FUN8(VAR5.VAR12 + VAR18);
    if (!VAR7->VAR16->VAR17)
        return FUN9(VAR19);
    VAR7->VAR16->VAR20 = VAR5.VAR12;
    FUN10(VAR4, VAR7->VAR16->VAR17, VAR5.VAR12);
    return 0;
}