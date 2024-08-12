static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    target_ulong VAR12 = VAR7[2];
    target_ulong VAR13 = VAR7[3];
    unsigned VAR14, VAR15;
    target_ulong VAR16;
    target_ulong VAR17;
    uint64_t VAR18;
    VAR14 = FUN2(VAR3, VAR12, VAR13, &VAR15);
    if (!VAR14)
    {
        return VAR19;
    }
    VAR16 = (VAR13 & VAR20) & ~((1ULL << VAR14) - 1);
    if (FUN3(VAR5, VAR16))
    {
        if ((VAR13 & VAR21) != VAR22)
        {
            return VAR19;
        }
    }
    else
    {
        if ((VAR13 & (VAR23 | VAR24 | VAR22)) != VAR24)
        {
            return VAR19;
        }
    }
    VAR12 &= ~0x60ULL;
    if (!FUN4(VAR9, VAR11))
    {
        return VAR19;
    }
    VAR17 = 0;
    if (FUN5((VAR10 & VAR25) == 0))
    {
        VAR11 &= ~7ULL;
        VAR18 = FUN6(VAR3, VAR11);
        for (; VAR17 < 8; VAR17++)
        {
            if (!(FUN7(VAR3, VAR18, VAR17) & VAR26))
            {
                break;
            }
        }
        FUN8(VAR3, VAR18);
        if (VAR17 == 8)
        {
            return VAR27;
        }
    }
    else
    {
        VAR18 = FUN6(VAR3, VAR11);
        if (FUN7(VAR3, VAR18, 0) & VAR26)
        {
            FUN8(VAR3, VAR18);
            return VAR27;
        }
        FUN8(VAR3, VAR18);
    }
    FUN9(VAR3, VAR11 + VAR17, VAR12 | VAR28, VAR13);
    VAR7[0] = VAR11 + VAR17;
    return VAR29;
}