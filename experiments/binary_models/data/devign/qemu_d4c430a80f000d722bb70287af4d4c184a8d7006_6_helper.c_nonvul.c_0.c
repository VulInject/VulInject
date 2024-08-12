static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6, target_ulong VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    int VAR12 = 0;
    target_phys_addr_t VAR13;
    uint32_t VAR14;
    int VAR15 = 0, VAR16, VAR17;
    unsigned long VAR18;
    VAR17 = VAR9 == VAR19;
    if ((VAR2->VAR20[0] & VAR21) == 0)
    {
        *VAR11 = VAR22;
        if (VAR8 == 2 && (VAR2->VAR20[0] & VAR2->VAR23->VAR24))
        {
            *VAR4 = VAR2->VAR25 | (VAR7 & 0x7ffffULL);
            *VAR5 = VAR26 | VAR27;
            return 0;
        }
        *VAR4 = VAR7;
        *VAR5 = VAR26 | VAR28 | VAR27;
        return 0;
    }
    *VAR6 = ((VAR8 & 1) << 2) | (VAR8 & 2) | (VAR17 ? 0 : 1);
    *VAR4 = 0xffffffffffff0000ULL;
    VAR13 = (VAR2->VAR20[1] << 4) + (VAR2->VAR20[2] << 2);
    VAR14 = FUN2(VAR13);
    switch (VAR14 & VAR29)
    {
    default:
    case 0:
        return 1 << 2;
    case 2:
    case 3:
        return 4 << 2;
    case 1:
        VAR13 = ((VAR7 >> 22) & ~3) + ((VAR14 & ~3) << 4);
        VAR14 = FUN2(VAR13);
        switch (VAR14 & VAR29)
        {
        default:
        case 0:
            return (1 << 8) | (1 << 2);
        case 3:
            return (1 << 8) | (4 << 2);
        case 1:
            VAR13 = ((VAR7 & 0xfc0000) >> 16) + ((VAR14 & ~3) << 4);
            VAR14 = FUN2(VAR13);
            switch (VAR14 & VAR29)
            {
            default:
            case 0:
                return (2 << 8) | (1 << 2);
            case 3:
                return (2 << 8) | (4 << 2);
            case 1:
                VAR13 = ((VAR7 & 0x3f000) >> 10) + ((VAR14 & ~3) << 4);
                VAR14 = FUN2(VAR13);
                switch (VAR14 & VAR29)
                {
                default:
                case 0:
                    return (3 << 8) | (1 << 2);
                case 1:
                case 3:
                    return (3 << 8) | (4 << 2);
                case 2:
                    VAR18 = (VAR7 & VAR30) & (VAR22 - 1);
                }
                *VAR11 = VAR22;
                break;
            case 2:
                VAR18 = VAR7 & 0x3ffff;
                *VAR11 = 0x40000;
            }
            break;
        case 2:
            VAR18 = VAR7 & 0xffffff;
            *VAR11 = 0x1000000;
        }
    }
    VAR12 = (VAR14 & VAR31) >> VAR32;
    VAR15 = VAR33[*VAR6][VAR12];
    if (VAR15 && !((VAR2->VAR20[0] & VAR34) && VAR17))
        return VAR15;
    VAR16 = (VAR8 & 1) && !(VAR14 & VAR35);
    if (!(VAR14 & VAR36) || VAR16)
    {
        VAR14 |= VAR36;
        if (VAR16)
            VAR14 |= VAR35;
        FUN3(VAR13, VAR14);
    }
    *VAR5 = VAR37[VAR17][VAR12];
    if (!(VAR14 & VAR35))
    {
        *VAR5 &= ~VAR28;
    }
    *VAR4 = ((VAR3)(VAR14 & VAR38) << 4) + VAR18;
    return VAR15;
}