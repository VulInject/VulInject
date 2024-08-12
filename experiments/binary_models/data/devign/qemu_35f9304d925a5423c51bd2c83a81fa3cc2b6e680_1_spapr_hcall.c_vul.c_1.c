static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    target_ulong VAR10 = VAR7[2];
    target_ulong VAR11 = VAR7[3];
    target_ulong VAR12 = 12;
    target_ulong VAR13;
    target_ulong VAR14;
    VAR15 *VAR16;
    if (VAR10 & VAR17)
    {
        if ((VAR11 & 0xf000) == 0x1000)
        {
        }
        else if ((VAR11 & 0xff000) == 0)
        {
            VAR12 = 24;
            if (VAR10 & 0x80)
            {
                return VAR18;
            }
        }
        else
        {
            return VAR18;
        }
    }
    VAR13 = (VAR11 & VAR19) & ~((1ULL << VAR12) - 1);
    if (VAR13 < VAR5->VAR20)
    {
        if ((VAR11 & VAR21) != VAR22)
        {
            return VAR18;
        }
    }
    else
    {
        if ((VAR11 & (VAR23 | VAR24 | VAR22)) != VAR24)
        {
            return VAR18;
        }
    }
    VAR10 &= ~0x60ULL;
    if ((VAR9 * VAR25) & ~VAR3->VAR26)
    {
        return VAR18;
    }
    if (FUN2((VAR8 & VAR27) == 0))
    {
        VAR9 &= ~7ULL;
        VAR16 = VAR3->VAR28 + (VAR9 * VAR25);
        for (VAR14 = 0;; ++VAR14)
        {
            if (VAR14 == 8)
            {
                return VAR29;
            }
            if (((FUN3(VAR16) & VAR30) == 0) && FUN4(VAR16, VAR31 | VAR30))
            {
                break;
            }
            VAR16 += VAR25;
        }
    }
    else
    {
        VAR14 = 0;
        VAR16 = VAR3->VAR28 + (VAR9 * VAR25);
        if (!FUN4(VAR16, VAR31 | VAR30))
        {
            return VAR29;
        }
    }
    FUN5(VAR16 + (VAR25 / 2), VAR11);
    FUN5(VAR16, VAR10);
    assert(!(FUN3(VAR16) & VAR31));
    VAR7[0] = VAR9 + VAR14;
    return VAR32;
}