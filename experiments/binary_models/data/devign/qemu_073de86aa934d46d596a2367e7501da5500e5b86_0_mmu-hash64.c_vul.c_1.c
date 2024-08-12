static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, bool VAR7, target_ulong VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = &VAR3->VAR12;
    int VAR13;
    uint64_t VAR14;
    target_ulong VAR15, VAR16;
    target_ulong VAR17;
    VAR17 = (VAR4 & VAR12->VAR18) * VAR19;
    VAR14 = FUN2(VAR3, VAR17);
    if (!VAR14)
    {
        return -1;
    }
    for (VAR13 = 0; VAR13 < VAR19; VAR13++)
    {
        VAR15 = FUN3(VAR3, VAR14, VAR13);
        VAR16 = FUN4(VAR3, VAR14, VAR13);
        if ((VAR15 & VAR20) && (VAR7 == !!(VAR15 & VAR21)) && FUN5(VAR15, VAR8))
        {
            unsigned VAR22 = FUN6(VAR6->VAR23, VAR15, VAR16);
            if (VAR22 == 0)
            {
                continue;
            }
            VAR10->VAR15 = VAR15;
            VAR10->VAR16 = VAR16;
            FUN7(VAR3, VAR14);
            return (VAR17 + VAR13) * VAR24;
        }
    }
    FUN7(VAR3, VAR14);
    return -1;
}