static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, target_ulong VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = &VAR3->VAR11;
    int VAR12;
    uint64_t VAR13;
    target_ulong VAR14, VAR15;
    target_ulong VAR16;
    VAR16 = (VAR4 & VAR11->VAR17) * VAR18;
    VAR13 = FUN2(VAR3, VAR16);
    if (!VAR13)
    {
        return -1;
    }
    for (VAR12 = 0; VAR12 < VAR18; VAR12++)
    {
        VAR14 = FUN3(VAR3, VAR13, VAR12);
        VAR15 = FUN4(VAR3, VAR13, VAR12);
        if (FUN5(VAR14, VAR7))
        {
            unsigned VAR19 = FUN6(VAR6->VAR20, VAR14, VAR15);
            if (VAR19 == 0)
            {
                continue;
            }
            VAR9->VAR14 = VAR14;
            VAR9->VAR15 = VAR15;
            FUN7(VAR3, VAR13);
            return (VAR16 + VAR12) * VAR21;
        }
    }
    FUN7(VAR3, VAR13);
    return -1;
}