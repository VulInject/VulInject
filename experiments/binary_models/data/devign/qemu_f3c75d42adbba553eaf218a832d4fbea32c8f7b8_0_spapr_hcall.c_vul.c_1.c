static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    target_ulong VAR12 = VAR7[2];
    target_ulong VAR13 = VAR7[3];
    target_ulong VAR14 = 12;
    target_ulong VAR15;
    target_ulong VAR16;
    hwaddr VAR17;
    if (VAR12 & VAR18)
    {
        if ((VAR13 & 0xf000) == 0x1000)
        {
        }
        else if ((VAR13 & 0xff000) == 0)
        {
            VAR14 = 24;
            if (VAR12 & 0x80)
            {
                return VAR19;
            }
        }
        else
        {
            return VAR19;
        }
    }
    VAR15 = (VAR13 & VAR20) & ~((1ULL << VAR14) - 1);
    if (VAR15 < VAR5->VAR21)
    {
        if ((VAR13 & VAR22) != VAR23)
        {
            return VAR19;
        }
    }
    else
    {
        if ((VAR13 & (VAR24 | VAR25 | VAR23)) != VAR25)
        {
            return VAR19;
        }
    }
    VAR12 &= ~0x60ULL;
    if ((VAR11 * VAR26) & ~VAR9->VAR27)
    {
        return VAR19;
    }
    if (FUN2((VAR10 & VAR28) == 0))
    {
        VAR11 &= ~7ULL;
        VAR17 = VAR11 * VAR26;
        for (VAR16 = 0;; ++VAR16)
        {
            if (VAR16 == 8)
            {
                return VAR29;
            }
            if ((FUN3(VAR9, VAR17) & VAR30) == 0)
            {
                break;
            }
            VAR17 += VAR26;
        }
    }
    else
    {
        VAR16 = 0;
        VAR17 = VAR11 * VAR26;
        if (FUN3(VAR9, VAR17) & VAR30)
        {
            return VAR29;
        }
    }
    FUN4(VAR9, VAR17, VAR13);
    FUN5(VAR9, VAR17, VAR12 | VAR31);
    VAR7[0] = VAR11 + VAR16;
    return VAR32;
}