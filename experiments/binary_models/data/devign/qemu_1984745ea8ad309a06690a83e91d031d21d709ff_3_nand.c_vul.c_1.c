void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (!VAR6->VAR7 && VAR6->VAR8)
    {
        if (VAR9[VAR6->VAR10].VAR11 & VAR12)
        {
            if (VAR6->VAR13 == VAR14 && VAR3 == VAR15)
                return;
            if (VAR3 == VAR16)
            {
                VAR6->VAR17 &= ~((1 << VAR6->VAR18) - 1);
                VAR6->VAR19 = 0;
                return;
            }
        }
        if (VAR3 == VAR14)
            VAR6->VAR20 = 0;
        else if (VAR3 == VAR21)
        {
            VAR6->VAR20 = 0x100;
            VAR3 = VAR14;
        }
        else if (VAR3 == VAR22)
        {
            VAR6->VAR20 = 1 << VAR6->VAR23;
            VAR3 = VAR14;
        }
        VAR6->VAR13 = VAR3;
        if (VAR6->VAR13 == VAR24 || VAR6->VAR13 == VAR25 || VAR6->VAR13 == VAR26 || VAR6->VAR13 == VAR27 || VAR6->VAR13 == VAR28 || VAR6->VAR13 == VAR29 || VAR6->VAR13 == VAR30)
            FUN2(VAR6);
        if (VAR6->VAR13 != VAR29)
        {
            VAR6->VAR19 = 0;
        }
    }
    if (VAR6->VAR31)
    {
        unsigned int VAR32 = VAR6->VAR19 * 8;
        unsigned int VAR33 = ~(0xff << VAR32);
        unsigned int VAR34 = VAR3 << VAR32;
        VAR6->VAR17 = (VAR6->VAR17 & VAR33) | VAR34;
        VAR6->VAR19++;
        switch (VAR6->VAR19)
        {
        case 1:
            if (VAR6->VAR13 == VAR35)
            {
                FUN2(VAR6);
            }
            break;
        case 2:
            VAR6->VAR17 <<= (VAR6->VAR36 - 1);
            break;
        case 3:
            if (!(VAR9[VAR6->VAR10].VAR11 & VAR12) && (VAR6->VAR13 == VAR14 || VAR6->VAR13 == VAR37))
            {
                FUN2(VAR6);
            }
            break;
        case 4:
            if ((VAR9[VAR6->VAR10].VAR11 & VAR12) && VAR9[VAR6->VAR10].VAR38 < 256 && (VAR6->VAR13 == VAR14 || VAR6->VAR13 == VAR37))
            {
                FUN2(VAR6);
            }
            break;
        case 5:
            if ((VAR9[VAR6->VAR10].VAR11 & VAR12) && VAR9[VAR6->VAR10].VAR38 >= 256 && (VAR6->VAR13 == VAR14 || VAR6->VAR13 == VAR37))
            {
                FUN2(VAR6);
            }
            break;
        default:
            break;
        }
    }
    if (!VAR6->VAR8 && !VAR6->VAR31 && VAR6->VAR13 == VAR37)
    {
        if (VAR6->VAR39 < (1 << VAR6->VAR23) + (1 << VAR6->VAR40))
        {
            for (VAR4 = VAR6->VAR36; VAR4--; VAR3 >>= 8)
            {
                VAR6->VAR41[VAR6->VAR39++] = (VAR42)(VAR3 & 0xff);
            }
        }
    }
    else if (!VAR6->VAR8 && !VAR6->VAR31 && VAR6->VAR13 == VAR43)
    {
        if ((VAR6->VAR17 & ((1 << VAR6->VAR18) - 1)) < (1 << VAR6->VAR23) + (1 << VAR6->VAR40))
        {
            for (VAR4 = VAR6->VAR36; VAR4--; VAR6->VAR17++, VAR3 >>= 8)
            {
                VAR6->VAR41[VAR6->VAR39 + (VAR6->VAR17 & ((1 << VAR6->VAR18) - 1))] = (VAR42)(VAR3 & 0xff);
            }
        }
    }
}