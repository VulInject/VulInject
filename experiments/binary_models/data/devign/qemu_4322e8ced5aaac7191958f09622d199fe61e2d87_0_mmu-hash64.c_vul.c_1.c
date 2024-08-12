static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, bool VAR5, target_ulong VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = &VAR3->VAR10;
    int VAR11;
    uint64_t VAR12;
    target_ulong VAR13, VAR14;
    target_ulong VAR15;
    VAR15 = (VAR4 & VAR10->VAR16) * VAR17;
    VAR12 = FUN2(VAR3, VAR15);
    if (!VAR12)
    {
        return -1;
    }
    for (VAR11 = 0; VAR11 < VAR17; VAR11++)
    {
        VAR13 = FUN3(VAR3, VAR12, VAR11);
        VAR14 = FUN4(VAR3, VAR12, VAR11);
        if ((VAR13 & VAR18) && (VAR5 == !!(VAR13 & VAR19)) && FUN5(VAR13, VAR6))
        {
            VAR8->VAR13 = VAR13;
            VAR8->VAR14 = VAR14;
            FUN6(VAR3, VAR12);
            return (VAR15 + VAR11) * VAR20;
        }
    }
    FUN6(VAR3, VAR12);
    return -1;
}