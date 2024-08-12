static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    switch (VAR3)
    {
    case VAR7:
        if (VAR6->VAR8 & VAR9)
        {
            switch (VAR6->VAR8 & VAR10)
            {
            case VAR11:
                return VAR12 | VAR13 | VAR14;
            case VAR15:
                return (VAR16 >> 16) | VAR14;
            case VAR17:
                return (VAR16 & 0xFFFF) | VAR14;
            default:
                return VAR14;
            }
        }
        return 0;
    case VAR18:
        return VAR6->VAR19;
    case VAR20:
        return VAR6->VAR21;
    case VAR22 ... VAR23:
        return VAR6->VAR24[(VAR3 - VAR22) / 4];
    case VAR25 ... VAR26:
        return VAR6->VAR27[(VAR3 - VAR25) / 4];
    case VAR28 ... VAR29:
        return VAR6->VAR30[(VAR3 - VAR28) / 4];
    default:
        return 0;
    }
}