static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6, VAR7 *VAR8, VAR7 *VAR9)
{
    VAR10 *VAR11 = &VAR3->VAR11;
    uint64_t VAR12;
    target_ulong VAR13, VAR14;
    if (!FUN2(VAR11, VAR4))
    {
        return VAR15;
    }
    VAR12 = FUN3(VAR3, VAR4);
    VAR13 = FUN4(VAR3, VAR12, 0);
    VAR14 = FUN5(VAR3, VAR12, 0);
    FUN6(VAR3, VAR12);
    if ((VAR13 & VAR16) == 0 || ((VAR6 & VAR17) && (VAR13 & ~0x7fULL) != VAR5) || ((VAR6 & VAR18) && (VAR13 & VAR5) != 0))
    {
        return VAR19;
    }
    *VAR8 = VAR13;
    *VAR9 = VAR14;
    FUN7(VAR3, VAR4, VAR20, 0);
    FUN8(VAR3, VAR4, VAR13, VAR14);
    return VAR21;
}