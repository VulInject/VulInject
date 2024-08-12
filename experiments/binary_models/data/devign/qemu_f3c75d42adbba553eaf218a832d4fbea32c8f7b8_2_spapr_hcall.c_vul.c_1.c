static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    target_ulong VAR12 = VAR7[2];
    hwaddr VAR13;
    target_ulong VAR14, VAR15, VAR16;
    if ((VAR11 * VAR17) & ~VAR9->VAR18)
    {
        return VAR19;
    }
    VAR13 = VAR11 * VAR17;
    VAR14 = FUN2(VAR9, VAR13);
    VAR15 = FUN3(VAR9, VAR13);
    if ((VAR14 & VAR20) == 0 || ((VAR10 & VAR21) && (VAR14 & ~0x7fULL) != VAR12))
    {
        return VAR22;
    }
    VAR15 &= ~(VAR23 | VAR24 | VAR25 | VAR26 | VAR27);
    VAR15 |= (VAR10 << 55) & VAR23;
    VAR15 |= (VAR10 << 48) & VAR26;
    VAR15 |= VAR10 & (VAR24 | VAR25 | VAR27);
    VAR16 = FUN4(VAR14, VAR15, VAR11);
    FUN5(VAR9, VAR13, (VAR14 & ~VAR20) | VAR28);
    FUN6(VAR9, VAR16);
    FUN7(VAR9, VAR13, VAR15);
    FUN5(VAR9, VAR13, VAR14 | VAR28);
    return VAR29;
}