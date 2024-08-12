static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6, VAR1 *VAR7, VAR1 *VAR8)
{
    VAR9 *VAR10;
    target_ulong VAR11, VAR12, VAR13;
    if ((VAR4 * VAR14) & ~VAR3->VAR15)
    {
        return VAR16;
    }
    VAR10 = VAR3->VAR17 + (VAR4 * VAR14);
    while (!FUN2(VAR10, VAR18))
    {
        assert(0);
    }
    VAR11 = FUN3(VAR10);
    VAR12 = FUN3(VAR10 + (VAR14 / 2));
    if ((VAR11 & VAR19) == 0 || ((VAR6 & VAR20) && (VAR11 & ~0x7fULL) != VAR5) || ((VAR6 & VAR21) && (VAR11 & VAR5) != 0))
    {
        FUN4(VAR10, VAR11 & ~VAR18);
        assert(!(FUN3(VAR10) & VAR18));
        return VAR22;
    }
    *VAR7 = VAR11 & ~VAR18;
    *VAR8 = VAR12;
    FUN4(VAR10, 0);
    VAR13 = FUN5(VAR11, VAR12, VAR4);
    FUN6(VAR3, VAR13);
    assert(!(FUN3(VAR10) & VAR18));
    return VAR23;
}