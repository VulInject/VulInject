static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR3->VAR11);
    uint32_t VAR12;
    uint8_t VAR13;
    VAR13 = VAR5[0];
    if (VAR9->VAR14 || !FUN3(VAR9->VAR10.VAR15.VAR16))
    {
        FUN4(VAR7, FUN5(VAR17));
        return 0;
    }
    VAR12 = FUN6(VAR7->VAR3.VAR18.VAR5);
    switch (VAR13)
    {
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        FUN7("" VAR23 "", VAR7->VAR3.VAR18.VAR24, VAR12);
        if (VAR7->VAR3.VAR18.VAR5[1] & 0xe0)
        {
            goto VAR25;
        }
        if (!FUN8(VAR9, VAR7->VAR3.VAR18.VAR24, VAR12))
        {
            goto VAR26;
        }
        VAR7->VAR27 = VAR7->VAR3.VAR18.VAR24 * (VAR9->VAR10.VAR28 / 512);
        VAR7->VAR29 = VAR12 * (VAR9->VAR10.VAR28 / 512);
        break;
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
        if (FUN9(VAR9->VAR10.VAR15.VAR16))
        {
            FUN4(VAR7, FUN5(VAR37));
            return 0;
        }
        FUN7("" VAR23 "", (VAR13 & 0xe) == 0xe ? "" : "", VAR7->VAR3.VAR18.VAR24, VAR12);
        if (VAR7->VAR3.VAR18.VAR5[1] & 0xe0)
        {
            goto VAR25;
        }
        if (!FUN8(VAR9, VAR7->VAR3.VAR18.VAR24, VAR12))
        {
            goto VAR26;
        }
        VAR7->VAR27 = VAR7->VAR3.VAR18.VAR24 * (VAR9->VAR10.VAR28 / 512);
        VAR7->VAR29 = VAR12 * (VAR9->VAR10.VAR28 / 512);
        break;
    default:
        FUN10();
    VAR25:
        FUN4(VAR7, FUN5(VAR38));
        return 0;
    VAR26:
        FUN4(VAR7, FUN5(VAR39));
        return 0;
    }
    if (VAR7->VAR29 == 0)
    {
        FUN11(&VAR7->VAR3, VAR40);
    }
    assert(VAR7->VAR41.VAR42 == 0);
    if (VAR7->VAR3.VAR18.VAR43 == VAR44)
    {
        return -VAR7->VAR29 * 512;
    }
    else
    {
        return VAR7->VAR29 * 512;
    }
}