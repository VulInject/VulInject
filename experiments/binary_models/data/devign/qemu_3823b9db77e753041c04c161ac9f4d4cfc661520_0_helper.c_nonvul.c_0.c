static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    int VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    switch (VAR6->VAR12.VAR13 >> VAR14)
    {
    case VAR15:
    case VAR16:
        VAR11 = 1;
        break;
    case VAR17:
    case VAR18:
        VAR11 = 10;
        break;
    case VAR19:
        VAR11 = 3;
        break;
    case VAR20:
        VAR11 = 5;
        break;
    default:
        VAR11 = 0;
        break;
    }
    if (VAR11)
    {
        VAR6->VAR21.VAR22 = FUN3(VAR6->VAR21.VAR22, 2, 4, VAR11);
    }
    switch (VAR2->VAR23)
    {
    case VAR24:
        VAR9 = VAR25;
        VAR7 = 0x04;
        VAR8 = VAR26;
        if (VAR6->VAR27)
            VAR10 = 2;
        else
            VAR10 = 4;
        break;
    case VAR28:
        VAR9 = VAR29;
        VAR7 = 0x08;
        VAR8 = VAR26;
        VAR10 = 0;
        break;
    case VAR30:
        VAR6->VAR12.VAR31 = 2;
    case VAR32:
        FUN4(VAR6, VAR33, VAR6->VAR12.VAR31);
        FUN4(VAR6, VAR34, VAR6->VAR12.VAR35);
        FUN5(VAR36, "", VAR6->VAR12.VAR31, (VAR37)VAR6->VAR12.VAR35);
        VAR9 = VAR38;
        VAR7 = 0x0c;
        VAR8 = VAR39 | VAR26;
        VAR10 = 4;
        break;
    case VAR40:
        FUN4(VAR6, VAR41, VAR6->VAR12.VAR31);
        FUN4(VAR6, VAR42, VAR6->VAR12.VAR35);
        FUN5(VAR36, "", VAR6->VAR12.VAR31, (VAR37)VAR6->VAR12.VAR35);
        VAR9 = VAR38;
        VAR7 = 0x10;
        VAR8 = VAR39 | VAR26;
        VAR10 = 8;
        break;
    case VAR43:
        VAR9 = VAR44;
        VAR7 = 0x18;
        VAR8 = VAR39 | VAR26;
        VAR10 = 4;
        if (VAR6->VAR21.VAR45 & VAR46)
        {
            VAR9 = VAR47;
            VAR8 |= VAR48;
        }
        break;
    case VAR49:
        VAR9 = VAR50;
        VAR7 = 0x1c;
        VAR8 = VAR39 | VAR26 | VAR48;
        if (VAR6->VAR21.VAR45 & VAR51)
        {
            VAR9 = VAR47;
        }
        VAR10 = 4;
        break;
    case VAR52:
        VAR9 = VAR47;
        VAR7 = 0x08;
        VAR8 = VAR39 | VAR26 | VAR48;
        VAR10 = 0;
        break;
    default:
        FUN6(VAR2, "", VAR2->VAR23);
        return;
    }
    if (VAR9 == VAR47)
    {
        VAR7 += VAR6->VAR21.VAR53;
    }
    else if (FUN7(VAR6, VAR54) & VAR55)
    {
        VAR7 += 0xffff0000;
    }
    else
    {
        VAR7 += FUN7(VAR6, VAR56);
    }
    if ((VAR6->VAR57 & VAR58) == VAR47)
    {
        VAR6->VAR21.VAR45 &= ~VAR59;
    }
    FUN8(VAR6, VAR9);
    VAR6->VAR57 &= ~VAR60;
    VAR6->VAR61 = FUN9(VAR6);
    VAR6->VAR62 = 0;
    VAR6->VAR57 = (VAR6->VAR57 & ~VAR58) | VAR9;
    VAR6->VAR57 &= ~VAR63;
    if (VAR6->VAR21.VAR64[FUN10(VAR6)] & VAR65)
    {
        VAR6->VAR57 |= VAR63;
    }
    VAR6->VAR66 |= VAR8;
    if (FUN11(VAR6, VAR67))
    {
        VAR6->VAR27 = (FUN7(VAR6, VAR54) & VAR68) != 0;
    }
    VAR6->VAR69[14] = VAR6->VAR69[15] + VAR10;
    VAR6->VAR69[15] = VAR7;
}