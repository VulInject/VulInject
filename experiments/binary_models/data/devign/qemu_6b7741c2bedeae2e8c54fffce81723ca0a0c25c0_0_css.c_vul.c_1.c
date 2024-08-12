static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7.VAR8;
    VAR9 *VAR10 = &VAR2->VAR7.VAR11;
    int VAR12;
    int VAR13;
    VAR12 = 0x80;
    if (!(VAR10->VAR14 & VAR15))
    {
        assert(VAR4 != NULL);
        VAR6->VAR16 = VAR4->VAR16;
        if (!(VAR4->VAR17 & VAR12))
        {
            VAR10->VAR18 |= VAR19;
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= (VAR21 | VAR22);
            return;
        }
        VAR2->VAR23 = !!(VAR4->VAR24 & VAR25);
        VAR2->VAR26 = 0;
    }
    else
    {
        VAR10->VAR14 &= ~(VAR15 | VAR27);
    }
    VAR2->VAR28 = false;
    do
    {
        VAR13 = FUN2(VAR2, VAR2->VAR29);
        switch (VAR13)
        {
        case -VAR30:
            break;
        case 0:
            VAR10->VAR14 &= ~VAR31;
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= VAR32 | VAR33 | VAR22;
            VAR10->VAR34 = VAR35 | VAR36;
            VAR10->VAR37 = VAR2->VAR29 + 8;
            break;
        case -VAR38:
            VAR10->VAR14 &= ~VAR31;
            VAR10->VAR34 = VAR39;
            VAR2->VAR40[0] = 0x80;
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= VAR32 | VAR33 | VAR21 | VAR22;
            VAR10->VAR37 = VAR2->VAR29 + 8;
            break;
        case -VAR41:
            VAR10->VAR14 &= ~VAR31;
            VAR10->VAR42 = VAR43;
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= VAR32 | VAR33 | VAR21 | VAR22;
            VAR10->VAR37 = VAR2->VAR29 + 8;
            break;
        case -VAR44:
            VAR10->VAR18 &= ~VAR19;
            VAR10->VAR18 |= (1 << 8);
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= VAR21 | VAR22;
            break;
        case -VAR45:
            VAR10->VAR14 &= ~VAR31;
            VAR10->VAR14 |= VAR15;
            break;
        default:
            VAR10->VAR14 &= ~VAR31;
            VAR10->VAR42 = VAR46;
            VAR10->VAR14 &= ~VAR20;
            VAR10->VAR14 |= VAR32 | VAR33 | VAR21 | VAR22;
            VAR10->VAR37 = VAR2->VAR29 + 8;
            break;
        }
    } while (VAR13 == -VAR30);