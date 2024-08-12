int FUN1(VAR1 *VAR2, uint8_t VAR3, uint64_t VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    uint8_t VAR8, VAR9;
    uint32_t VAR10;
    ZpciFib VAR11;
    VAR12 *VAR13;
    uint64_t VAR14 = VAR15;
    if (VAR7->VAR16.VAR17 & VAR18)
    {
        FUN2(VAR7, VAR19, 6);
        return 0;
    }
    VAR8 = VAR7->VAR20[VAR3] & 0xff;
    VAR9 = (VAR7->VAR20[VAR3] >> 16) & 0xff;
    VAR10 = VAR7->VAR20[VAR3] >> 32;
    if (VAR4 & 0x7)
    {
        FUN2(VAR7, VAR21, 6);
        return 0;
    }
    VAR13 = FUN3(VAR10);
    if (!VAR13)
    {
        FUN4("", VAR10);
        FUN5(VAR2, VAR22);
        return 0;
    }
    switch (VAR13->VAR23)
    {
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
        FUN5(VAR2, VAR22);
        return 0;
    default:
        break;
    }
    if (FUN6(VAR2, VAR4, VAR5, (VAR28 *)&VAR11, sizeof(VAR11)))
    {
        return 0;
    }
    if (VAR11.VAR29 != 0)
    {
        FUN2(VAR7, VAR30, 6);
        return 0;
    }
    switch (VAR8)
    {
    case VAR31:
        if (VAR13->VAR32)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        else if (FUN8(VAR7, VAR13, VAR11))
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR35);
        }
        break;
    case VAR36:
        if (!VAR13->VAR32)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        else
        {
            FUN9(VAR13);
        }
        break;
    case VAR37:
        if (VAR9 != 0)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR38);
        }
        else if (VAR13->VAR39)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        else if (FUN10(VAR7, VAR13, VAR11))
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR40);
        }
        break;
    case VAR41:
        if (VAR9 != 0)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR38);
        }
        else if (!VAR13->VAR39)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        else
        {
            FUN11(VAR13);
        }
        break;
    case VAR42:
        if (VAR9 != 0)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR38);
        }
        else if (!VAR13->VAR39)
        {
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        else
        {
            FUN11(VAR13);
            if (FUN10(VAR7, VAR13, VAR11))
            {
                VAR14 = VAR33;
                FUN7(VAR7, VAR3, VAR40);
            }
        }
        break;
    case VAR43:
        switch (VAR13->VAR23)
        {
        case VAR44:
        case VAR45:
            VAR13->VAR23 = VAR46;
            break;
        default:
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        break;
    case VAR47:
        switch (VAR13->VAR23)
        {
        case VAR45:
            VAR13->VAR23 = VAR44;
            break;
        default:
            VAR14 = VAR33;
            FUN7(VAR7, VAR3, VAR34);
        }
        break;
    case VAR48:
        VAR13->VAR49 = FUN12(&VAR11.VAR49);
        break;
    default:
        FUN2(&VAR2->VAR7, VAR30, 6);
        VAR14 = VAR33;
    }
    FUN5(VAR2, VAR14);
    return 0;
}