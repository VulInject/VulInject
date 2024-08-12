static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8->VAR9 < 1)
        return 0;
    VAR7 = VAR2->VAR8->VAR10[VAR2->VAR8->VAR9 - 1];
    if ((VAR11)VAR5.VAR12 > (1 << 30))
        return -1;
    if (VAR7->VAR13->VAR14 == VAR15)
    {
        FUN2(VAR7->VAR13->VAR16);
        VAR7->VAR13->VAR16 = FUN3(VAR5.VAR12 + VAR17);
        if (!VAR7->VAR13->VAR16)
            return FUN4(VAR18);
        VAR7->VAR13->VAR19 = VAR5.VAR12;
        FUN5(VAR4, VAR7->VAR13->VAR16, VAR5.VAR12);
    }
    else if (VAR5.VAR12 > 8)
    {
        if (FUN6(VAR2, VAR4, VAR5) < 0)
            return -1;
    }
    else
        FUN7(VAR4, VAR5.VAR12);
    return 0;
}