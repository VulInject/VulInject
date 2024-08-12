static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6, VAR7 *VAR8, VAR7 *VAR9)
{
    hwaddr VAR10;
    target_ulong VAR11, VAR12, VAR13;
    if ((VAR4 * VAR14) & ~VAR3->VAR15)
    {
        return VAR16;
    }
    VAR10 = VAR4 * VAR14;
    VAR11 = FUN2(VAR3, VAR10);
    VAR12 = FUN3(VAR3, VAR10);
    if ((VAR11 & VAR17) == 0 || ((VAR6 & VAR18) && (VAR11 & ~0x7fULL) != VAR5) || ((VAR6 & VAR19) && (VAR11 & VAR5) != 0))
    {
        return VAR20;
    }
    *VAR8 = VAR11;
    *VAR9 = VAR12;
    FUN4(VAR3, VAR10, VAR21);
    VAR13 = FUN5(VAR11, VAR12, VAR4);
    FUN6(VAR3, VAR13);
    return VAR22;
}