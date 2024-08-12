static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    target_ulong VAR10 = VAR7[2];
    VAR11 *VAR12;
    target_ulong VAR13, VAR14, VAR15;
    if ((VAR9 * VAR16) & ~VAR3->VAR17)
    {
        return VAR18;
    }
    VAR12 = VAR3->VAR19 + (VAR9 * VAR16);
    while (!FUN2(VAR12, VAR20))
    {
        assert(0);
    }
    VAR13 = FUN3(VAR12);
    VAR14 = FUN3(VAR12 + (VAR16 / 2));
    if ((VAR13 & VAR21) == 0 || ((VAR8 & VAR22) && (VAR13 & ~0x7fULL) != VAR10))
    {
        FUN4(VAR12, VAR13 & ~VAR20);
        assert(!(FUN3(VAR12) & VAR20));
        return VAR23;
    }
    VAR14 &= ~(VAR24 | VAR25 | VAR26 | VAR27 | VAR28);
    VAR14 |= (VAR8 << 55) & VAR24;
    VAR14 |= (VAR8 << 48) & VAR27;
    VAR14 |= VAR8 & (VAR25 | VAR26 | VAR28);
    VAR15 = FUN5(VAR13, VAR14, VAR9);
    FUN4(VAR12, VAR13 & ~VAR21);
    FUN6(VAR3, VAR15);
    FUN4(VAR12 + (VAR16 / 2), VAR14);
    FUN4(VAR12, VAR13 & ~VAR20);
    assert(!(FUN3(VAR12) & VAR20));
    return VAR29;
}