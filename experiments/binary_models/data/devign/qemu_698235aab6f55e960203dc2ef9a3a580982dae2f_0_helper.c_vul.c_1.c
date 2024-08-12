static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6, target_ulong VAR7, int VAR8, int VAR9)
{
    int VAR10 = 0;
    target_phys_addr_t VAR11;
    uint32_t VAR12;
    int VAR13 = 0, VAR14, VAR15;
    unsigned long VAR16;
    VAR15 = VAR9 == VAR17;
    if ((VAR2->VAR18[0] & VAR19) == 0)
    {
        if (VAR8 == 2 && (VAR2->VAR18[0] & VAR2->VAR20->VAR21))
        {
            *VAR4 = VAR2->VAR22 | (VAR7 & 0x7ffffULL);
            *VAR5 = VAR23 | VAR24;
            return 0;
        }
        *VAR4 = VAR7;
        *VAR5 = VAR23 | VAR25 | VAR24;
        return 0;
    }
    *VAR6 = ((VAR8 & 1) << 2) | (VAR8 & 2) | (VAR15 ? 0 : 1);
    *VAR4 = 0xffffffffffff0000ULL;
    VAR11 = (VAR2->VAR18[1] << 4) + (VAR2->VAR18[2] << 2);
    VAR12 = FUN2(VAR11);
    switch (VAR12 & VAR26)
    {
    default:
    case 0:
        return 1 << 2;
    case 2:
    case 3:
        return 4 << 2;
    case 1:
        VAR11 = ((VAR7 >> 22) & ~3) + ((VAR12 & ~3) << 4);
        VAR12 = FUN2(VAR11);
        switch (VAR12 & VAR26)
        {
        default:
        case 0:
            return (1 << 8) | (1 << 2);
        case 3:
            return (1 << 8) | (4 << 2);
        case 1:
            VAR11 = ((VAR7 & 0xfc0000) >> 16) + ((VAR12 & ~3) << 4);
            VAR12 = FUN2(VAR11);
            switch (VAR12 & VAR26)
            {
            default:
            case 0:
                return (2 << 8) | (1 << 2);
            case 3:
                return (2 << 8) | (4 << 2);
            case 1:
                VAR11 = ((VAR7 & 0x3f000) >> 10) + ((VAR12 & ~3) << 4);
                VAR12 = FUN2(VAR11);
                switch (VAR12 & VAR26)
                {
                default:
                case 0:
                    return (3 << 8) | (1 << 2);
                case 1:
                case 3:
                    return (3 << 8) | (4 << 2);
                case 2:
                    VAR16 = (VAR7 & VAR27) & (VAR28 - 1);
                }
                break;
            case 2:
                VAR16 = VAR7 & 0x3ffff;
            }
            break;
        case 2:
            VAR16 = VAR7 & 0xffffff;
        }
    }
    VAR14 = (VAR8 & 1) && !(VAR12 & VAR29);
    if (!(VAR12 & VAR30) || VAR14)
    {
        VAR12 |= VAR30;
        if (VAR14)
            VAR12 |= VAR29;
        FUN3(VAR11, VAR12);
    }
    VAR10 = (VAR12 & VAR31) >> VAR32;
    VAR13 = VAR33[*VAR6][VAR10];
    if (VAR13 && !((VAR2->VAR18[0] & VAR34) && VAR15))
        return VAR13;
    *VAR5 = VAR35[VAR15][VAR10];
    if (!(VAR12 & VAR29))
    {
        *VAR5 &= ~VAR25;
    }
    *VAR4 = ((VAR3)(VAR12 & VAR36) << 4) + VAR16;
    return VAR13;
}