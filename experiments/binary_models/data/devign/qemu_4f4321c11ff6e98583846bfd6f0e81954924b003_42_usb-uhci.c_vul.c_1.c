static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9 = 0, VAR10, VAR11, VAR12;
    uint8_t VAR13;
    VAR10 = ((VAR4->VAR14 >> 21) + 1) & 0x7ff;
    VAR13 = VAR4->VAR14 & 0xff;
    VAR12 = VAR6->VAR15.VAR9;
    if (VAR4->VAR16 & VAR17)
        VAR4->VAR16 &= ~VAR18;
    if (VAR12 < 0)
        goto VAR19;
    VAR9 = VAR6->VAR15.VAR9;
    VAR4->VAR16 = (VAR4->VAR16 & ~0x7ff) | ((VAR9 - 1) & 0x7ff);
    VAR4->VAR16 &= ~(VAR18 | VAR20);
    if (VAR4->VAR16 & VAR21)
        *VAR8 |= 0x01;
    if (VAR13 == VAR22)
    {
        if (VAR9 > VAR10)
        {
            VAR12 = VAR23;
            goto VAR19;
        }
        if (VAR9 > 0)
        {
            FUN2(VAR4->VAR24, VAR6->VAR24, VAR9);
        }
        if ((VAR4->VAR16 & VAR25) && VAR9 < VAR10)
        {
            *VAR8 |= 0x02;
            FUN3("", VAR6->VAR4, VAR6->VAR14);
            return 1;
        }
    }
    return 0;
VAR19:
    switch (VAR12)
    {
    case VAR26:
        VAR4->VAR16 |= VAR27;
        VAR4->VAR16 &= ~VAR18;
        VAR2->VAR28 |= VAR29;
        if (VAR4->VAR16 & VAR21)
        {
            *VAR8 |= 0x01;
        }
        FUN4(VAR2);
        return 1;
    case VAR23:
        VAR4->VAR16 |= VAR30 | VAR27;
        VAR4->VAR16 &= ~VAR18;
        VAR2->VAR28 |= VAR29;
        if (VAR4->VAR16 & VAR21)
        {
            *VAR8 |= 0x01;
        }
        FUN4(VAR2);
        return -1;
    case VAR31:
        VAR4->VAR16 |= VAR20;
        if (VAR13 == VAR32)
            break;
        return 1;
    case VAR33:
    default:
        break;
    }
    VAR4->VAR16 |= VAR34;
    VAR11 = (VAR4->VAR16 >> VAR35) & 3;
    if (VAR11 != 0)
    {
        VAR11--;
        if (VAR11 == 0)
        {
            VAR4->VAR16 &= ~VAR18;
            VAR2->VAR28 |= VAR29;
            if (VAR4->VAR16 & VAR21)
                *VAR8 |= 0x01;
            FUN4(VAR2);
        }
    }
    VAR4->VAR16 = (VAR4->VAR16 & ~(3 << VAR35)) | (VAR11 << VAR35);
    return 1;
}