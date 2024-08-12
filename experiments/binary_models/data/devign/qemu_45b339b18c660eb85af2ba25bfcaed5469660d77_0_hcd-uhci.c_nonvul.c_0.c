static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9 = 0, VAR10, VAR11, VAR12;
    uint8_t VAR13;
    VAR10 = ((VAR4->VAR14 >> 21) + 1) & 0x7ff;
    VAR13 = VAR4->VAR14 & 0xff;
    VAR12 = VAR6->VAR15.VAR16;
    if (VAR4->VAR17 & VAR18)
        VAR4->VAR17 &= ~VAR19;
    if (VAR12 < 0)
        goto VAR20;
    VAR9 = VAR6->VAR15.VAR16;
    VAR4->VAR17 = (VAR4->VAR17 & ~0x7ff) | ((VAR9 - 1) & 0x7ff);
    VAR4->VAR17 &= ~(VAR19 | VAR21);
    if (VAR4->VAR17 & VAR22)
        *VAR8 |= 0x01;
    if (VAR13 == VAR23)
    {
        if ((VAR4->VAR17 & VAR24) && VAR9 < VAR10)
        {
            *VAR8 |= 0x02;
            FUN2(VAR6->VAR25->VAR14, VAR6->VAR4);
            return VAR26;
        }
    }
    FUN3(VAR6->VAR25->VAR14, VAR6->VAR4);
    return VAR27;
VAR20:
    while (!FUN4(&VAR6->VAR25->VAR28))
    {
        VAR5 *VAR29 = FUN5(&VAR6->VAR25->VAR28);
        FUN6(VAR29);
        FUN7(VAR29);
    }
    switch (VAR12)
    {
    case VAR30:
        VAR4->VAR17 |= VAR31;
        VAR4->VAR17 &= ~VAR19;
        VAR2->VAR32 |= VAR33;
        if (VAR4->VAR17 & VAR22)
        {
            *VAR8 |= 0x01;
        }
        FUN8(VAR2);
        FUN9(VAR6->VAR25->VAR14, VAR6->VAR4);
        return VAR26;
    case VAR34:
        VAR4->VAR17 |= VAR35 | VAR31;
        VAR4->VAR17 &= ~VAR19;
        VAR2->VAR32 |= VAR33;
        if (VAR4->VAR17 & VAR22)
        {
            *VAR8 |= 0x01;
        }
        FUN8(VAR2);
        FUN10(VAR6->VAR25->VAR14, VAR6->VAR4);
        return VAR36;
    case VAR37:
        VAR4->VAR17 |= VAR21;
        if (VAR13 == VAR38)
            break;
        return VAR26;
    case VAR39:
    case VAR40:
    default:
        break;
    }
    VAR4->VAR17 |= VAR41;
    VAR11 = (VAR4->VAR17 >> VAR42) & 3;
    if (VAR11 != 0)
    {
        VAR11--;
        if (VAR11 == 0)
        {
            VAR4->VAR17 &= ~VAR19;
            VAR2->VAR32 |= VAR33;
            if (VAR4->VAR17 & VAR22)
                *VAR8 |= 0x01;
            FUN8(VAR2);
            FUN11(VAR6->VAR25->VAR14, VAR6->VAR4);
        }
    }
    VAR4->VAR17 = (VAR4->VAR17 & ~(3 << VAR42)) | (VAR11 << VAR42);
    return VAR26;
}