static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    target_ulong VAR12 = VAR7[2];
    uint64_t VAR13;
    target_ulong VAR14, VAR15;
    if (!FUN2(VAR9, VAR11))
    {
        return VAR16;
    }
    VAR13 = FUN3(VAR3, VAR11);
    VAR14 = FUN4(VAR3, VAR13, 0);
    VAR15 = FUN5(VAR3, VAR13, 0);
    FUN6(VAR3, VAR13);
    if ((VAR14 & VAR17) == 0 || ((VAR10 & VAR18) && (VAR14 & ~0x7fULL) != VAR12))
    {
        return VAR19;
    }
    VAR15 &= ~(VAR20 | VAR21 | VAR22 | VAR23 | VAR24);
    VAR15 |= (VAR10 << 55) & VAR20;
    VAR15 |= (VAR10 << 48) & VAR23;
    VAR15 |= VAR10 & (VAR21 | VAR22 | VAR24);
    FUN7(VAR3, VAR11, (VAR14 & ~VAR17) | VAR25, 0);
    FUN8(VAR3, VAR11, VAR14, VAR15);
    FUN7(VAR3, VAR11, VAR14 | VAR25, VAR15);
    return VAR26;
}