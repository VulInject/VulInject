static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = 0;
    for (VAR3 = 0; VAR3 < FUN2(VAR2); ++VAR3)
    {
        VAR2->VAR4 <<= 8;
        VAR2->VAR4 |= VAR2->VAR5[VAR3];
    }
    if (FUN2(VAR2) == 3)
    {
        VAR2->VAR4 += VAR2->VAR6 * VAR7;
    }
    VAR2->VAR8 = VAR9;
    switch (VAR2->VAR10)
    {
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
        VAR2->VAR8 = VAR16;
        break;
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR2->VAR8 = VAR29;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
        FUN3(VAR2, VAR2->VAR4, VAR2->VAR10);
        break;
    case VAR36:
        switch (FUN4(VAR2))
        {
        case VAR37:
            VAR2->VAR38 = !!(VAR2->VAR5[1] & 0x02);
            break;
        case VAR39:
            VAR2->VAR38 = FUN5(VAR2->VAR5[0], 6, 1);
            if (VAR2->VAR40 > 1)
            {
                VAR2->VAR41 = FUN5(VAR2->VAR5[1], 5, 1);
            }
            break;
        default:
            break;
        }
        if (VAR2->VAR42)
        {
            VAR2->VAR42 = false;
        }
        break;
    case VAR43:
        VAR2->VAR6 = VAR2->VAR5[0];
        break;
    case VAR44:
        VAR2->VAR45 = VAR2->VAR5[0] | (VAR2->VAR5[1] << 8);
        break;
    case VAR46:
        VAR2->VAR47 = VAR2->VAR5[0];
        break;
    case VAR48:
        VAR2->VAR49 = VAR2->VAR5[0];
        break;
    default:
        break;
    }
}