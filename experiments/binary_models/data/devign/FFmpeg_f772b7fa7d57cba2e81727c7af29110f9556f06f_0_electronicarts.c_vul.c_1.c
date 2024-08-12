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
        VAR13 = (VAR6->VAR16 ? FUN4(VAR9) : FUN3(VAR9)) - 8;
        switch (VAR12)
        {
        case VAR17:
            FUN5(VAR9, 32);
            VAR13 -= 32;
        case VAR18:
        case VAR19:
        case VAR20:
        case VAR21:
            if (!VAR6->VAR22)
            {
                FUN5(VAR9, VAR13);
                break;
            }
            else if (VAR6->VAR22 == VAR23 || VAR6->VAR22 == VAR24)
            {
                VAR15 = FUN3(VAR9);
                FUN5(VAR9, 8);
                VAR13 -= 12;
            }
            VAR10 = FUN6(VAR9, VAR4, VAR13);
            if (VAR10 != VAR13)
                VAR10 = FUN7(VAR25);
            else
            {
                VAR4->VAR26 = VAR6->VAR27;
                VAR4->VAR28 = 90000;
                VAR4->VAR28 *= VAR6->VAR29;
                VAR4->VAR28 /= VAR6->VAR30;
                switch (VAR6->VAR22)
                {
                case VAR31:
                    VAR6->VAR29 += ((VAR13 - 12) * 2) / VAR6->VAR32;
                    break;
                case VAR23:
                case VAR24:
                    VAR6->VAR29 += VAR15;
                    break;
                default:
                    VAR6->VAR29 += VAR13 / (VAR6->VAR33 * VAR6->VAR32);
                }
            }
            VAR11 = 1;
            break;
        case 0:
        case VAR34:
        case VAR35:
        case VAR36:
        case VAR37:
            VAR10 = FUN7(VAR25);
            VAR11 = 1;
            break;
        case VAR38:
        case VAR39:
        case VAR40:
        case VAR41:
            VAR14 = VAR42;
        case VAR43:
        case VAR44:
            FUN8(VAR9, -8, VAR45);
            VAR13 += 8;
            goto VAR46;
        case VAR47:
            FUN8(VAR9, 8, VAR45);
            VAR13 -= 8;
            goto VAR46;
        case VAR48:
        case VAR49:
        case VAR50:
            VAR14 = VAR42;
        case VAR51:
        VAR46:
            VAR10 = FUN6(VAR9, VAR4, VAR13);
            if (VAR10 != VAR13)
                VAR10 = VAR52;
            else
            {
                VAR4->VAR26 = VAR6->VAR53;
                VAR4->VAR54 |= VAR14;
            }
            VAR11 = 1;
            break;
        default:
            FUN8(VAR9, VAR13, VAR45);
            break;
        }
    }
    return VAR10;
}