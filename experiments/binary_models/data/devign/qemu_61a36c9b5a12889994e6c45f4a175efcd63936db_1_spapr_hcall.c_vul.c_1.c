static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6, VAR7 *VAR8, VAR7 *VAR9)
{
    VAR10 *VAR11 = &VAR3->VAR11;
    uint64_t VAR12;
    target_ulong VAR13, VAR14, VAR15;
    if (!FUN2(VAR11, VAR4))
    {
        return VAR16;
    }
    VAR12 = FUN3(VAR3, VAR4);
    VAR13 = FUN4(VAR3, VAR12, 0);
    VAR14 = FUN5(VAR3, VAR12, 0);
    FUN6(VAR12);
    if ((VAR13 & VAR17) == 0 || ((VAR6 & VAR18) && (VAR13 & ~0x7fULL) != VAR5) || ((VAR6 & VAR19) && (VAR13 & VAR5) != 0))
    {
        return VAR20;
    }
    *VAR8 = VAR13;
    *VAR9 = VAR14;
    FUN7(VAR3, VAR4, VAR21, 0);
    VAR15 = FUN8(VAR13, VAR14, VAR4);
    FUN9(VAR11, VAR15);
    return VAR22;
}