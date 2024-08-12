static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    uint32_t VAR9;
    int VAR10, VAR11;
    VAR3 &= 0xff;
    VAR9 = (VAR2 >> VAR6->VAR12) & 1;
    VAR11 = (VAR2 >> (VAR6->VAR12 + 1)) & 1;
    VAR8 = &VAR6->VAR13[VAR11];
    switch (VAR9)
    {
    case VAR14:
        FUN2(FUN3(VAR8), VAR8->VAR15, VAR3 & 0xff);
        VAR10 = 0;
        switch (VAR8->VAR15)
        {
        case VAR16:
            VAR10 = VAR3 & VAR17;
            VAR3 &= VAR18;
            switch (VAR3)
            {
            case VAR19:
                VAR10 |= VAR19;
                break;
            case VAR20:
                FUN4(VAR8);
                break;
            case VAR21:
                if (VAR8->VAR22)
                {
                    VAR8->VAR22 = 0;
                    if (VAR8->VAR23)
                    {
                        FUN5(VAR8);
                    }
                }
                else if (VAR8->VAR24)
                {
                    VAR8->VAR24 = 0;
                }
                FUN6(VAR8);
                break;
            default:
                break;
            }
            break;
        case VAR25 ... VAR26:
        case VAR27 ... VAR28:
        case VAR29 ... VAR30:
        case VAR31 ... VAR32:
            VAR8->VAR33[VAR8->VAR15] = VAR3;
            break;
        case VAR34:
        case VAR35:
            VAR8->VAR33[VAR8->VAR15] = VAR3;
            FUN7(VAR8);
            break;
        case VAR36:
        case VAR37:
            VAR8->VAR33[VAR8->VAR15] = VAR3;
            VAR8->VAR38[VAR8->VAR15] = VAR3;
            FUN7(VAR8);
            break;
        case VAR39:
            switch (VAR3 & VAR40)
            {
            case 0:
            default:
                break;
            case VAR41:
                FUN8(&VAR6->VAR13[0]);
                return;
            case VAR42:
                FUN8(&VAR6->VAR13[1]);
                return;
            case VAR43:
                FUN9(FUN10(VAR6));
                return;
            }
            break;
        default:
            break;
        }
        if (VAR8->VAR15 == 0)
            VAR8->VAR15 = VAR10;
        else
            VAR8->VAR15 = 0;
        break;
    case VAR44:
        FUN11(FUN3(VAR8), VAR3);
        VAR8->VAR45 = VAR3;
        if (VAR8->VAR33[VAR35] & VAR46)
        {
            if (VAR8->VAR47)
                FUN12(VAR8->VAR47, &VAR8->VAR45, 1);
            else if (VAR8->VAR48 == VAR49 && !VAR8->VAR50)
            {
                FUN13(VAR8, VAR3);
            }
        }
        VAR8->VAR38[VAR51] |= VAR52;
        VAR8->VAR38[VAR53] |= VAR54;
        FUN5(VAR8);
        break;
    default:
        break;
    }
}