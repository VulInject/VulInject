static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = 0;
    int VAR11 = 0;
    unsigned int VAR12, VAR13;
    int VAR14 = 0;
    int FUN2(VAR15);
    while (!VAR11)
    {
        VAR12 = FUN3(VAR9);
        VAR13 = VAR6->VAR16 ? FUN4(VAR9) : FUN3(VAR9);
        if (VAR13 <= 8)
            return VAR17;
        VAR13 -= 8;
        switch (VAR12)
        {
        case VAR18:
            if (VAR13 < 32)
                return VAR17;
            FUN5(VAR9, 32);
            VAR13 -= 32;
        case VAR19:
        case VAR20:
        case VAR21:
        case VAR22:
            if (!VAR6->VAR23)
            {
                FUN5(VAR9, VAR13);
                break;
            }
            else if (VAR6->VAR23 == VAR24 || VAR6->VAR23 == VAR25)
            {
                VAR15 = FUN3(VAR9);
                FUN5(VAR9, 8);
                VAR13 -= 12;
            }
            VAR10 = FUN6(VAR9, VAR4, VAR13);
            if (VAR10 < 0)
                return VAR10;
            VAR4->VAR26 = VAR6->VAR27;
            switch (VAR6->VAR23)
            {
            case VAR28:
            case VAR29:
            case VAR30:
            case VAR31:
                VAR4->VAR32 = FUN7(VAR4->VAR33);
                break;
            case VAR34:
                VAR4->VAR32 = FUN8(VAR4->VAR33);
                break;
            case VAR35:
                VAR4->VAR32 = VAR10 * 2 / VAR6->VAR36;
                break;
            case VAR24:
            case VAR25:
                VAR4->VAR32 = VAR15;
                break;
            default:
                VAR4->VAR32 = VAR13 / (VAR6->VAR37 * VAR6->VAR36);
            }
            VAR11 = 1;
            break;
        case 0:
        case VAR38:
        case VAR39:
        case VAR40:
        case VAR41:
            VAR10 = FUN9(VAR42);
            VAR11 = 1;
            break;
        case VAR43:
        case VAR44:
        case VAR45:
        case VAR46:
        case VAR47:
            VAR14 = VAR48;
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
            FUN10(VAR9, -8, VAR53);
            VAR13 += 8;
            goto VAR54;
        case VAR55:
            FUN5(VAR9, 8);
            VAR13 -= 8;
            goto VAR54;
        case VAR56:
        case VAR57:
        case VAR58:
            VAR14 = VAR48;
        case VAR59:
        VAR54:
            VAR10 = FUN6(VAR9, VAR4, VAR13);
            if (VAR10 < 0)
                return VAR10;
            VAR4->VAR26 = VAR6->VAR60;
            VAR4->VAR61 |= VAR14;
            VAR11 = 1;
            break;
        default:
            FUN5(VAR9, VAR13);
            break;
        }
    }
    return VAR10;
}