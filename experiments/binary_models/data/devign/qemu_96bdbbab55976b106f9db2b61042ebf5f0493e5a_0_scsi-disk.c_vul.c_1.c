static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR3->VAR11);
    int32_t VAR12;
    uint8_t VAR13;
    VAR13 = VAR5[0];
    if (VAR9->VAR14 || !FUN3(VAR9->VAR10.VAR15.VAR16))
    {
        FUN4(VAR7, FUN5(VAR17));
    }
    switch (VAR13)
    {
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
        VAR12 = VAR7->VAR3.VAR22.VAR23 / VAR9->VAR10.VAR24;
        FUN6("" VAR25 "", VAR7->VAR3.VAR22.VAR26, VAR12);
        if (VAR7->VAR3.VAR22.VAR5[1] & 0xe0)
        {
            goto VAR27;
        }
        if (VAR7->VAR3.VAR22.VAR26 > VAR9->VAR10.VAR28)
        {
            goto VAR29;
        }
        VAR7->VAR30 = VAR7->VAR3.VAR22.VAR26 * (VAR9->VAR10.VAR24 / 512);
        VAR7->VAR31 = VAR12 * (VAR9->VAR10.VAR24 / 512);
        break;
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
        VAR12 = VAR7->VAR3.VAR22.VAR23 / VAR9->VAR10.VAR24;
        FUN6("" VAR25 "", (VAR13 & 0xe) == 0xe ? "" : "", VAR7->VAR3.VAR22.VAR26, VAR12);
        if (VAR7->VAR3.VAR22.VAR5[1] & 0xe0)
        {
            goto VAR27;
        }
        if (VAR7->VAR3.VAR22.VAR26 > VAR9->VAR10.VAR28)
        {
            goto VAR29;
        }
        VAR7->VAR30 = VAR7->VAR3.VAR22.VAR26 * (VAR9->VAR10.VAR24 / 512);
        VAR7->VAR31 = VAR12 * (VAR9->VAR10.VAR24 / 512);
        break;
    default:
        FUN7();
    VAR29:
        FUN4(VAR7, FUN5(VAR42));
    }
    if (VAR7->VAR31 == 0)
    {
        FUN8(&VAR7->VAR3, VAR43);
    }
    assert(VAR7->VAR44.VAR45 == 0);
    if (VAR7->VAR3.VAR22.VAR46 == VAR47)
    {
        return -VAR7->VAR31 * 512;
    }
    else
    {
        return VAR7->VAR31 * 512;
    }