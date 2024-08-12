static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR6;
    VAR7 *VAR8 = &VAR2->VAR5.VAR9;
    int VAR10;
    int VAR11;
    bool VAR12;
    VAR10 = 0x80;
    if (!(VAR8->VAR13 & VAR14))
    {
        VAR15 *VAR16 = &VAR2->VAR16;
        VAR8->VAR17 = 0;
        VAR8->VAR18 = 0;
        VAR4->VAR19 = VAR16->VAR19;
        if (!(VAR16->VAR20 & VAR10))
        {
            VAR8->VAR21 |= VAR22;
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= (VAR24 | VAR25);
            return;
        }
        VAR2->VAR26 = !!(VAR16->VAR27 & VAR28);
        VAR8->VAR21 |= (VAR2->VAR26) ? VAR29 : 0;
        VAR2->VAR30 = 0;
        VAR12 = !!(VAR16->VAR27 & VAR31);
    }
    else
    {
        VAR8->VAR13 &= ~(VAR14 | VAR32);
        VAR12 = true;
    }
    VAR2->VAR33 = false;
    do
    {
        VAR11 = FUN2(VAR2, VAR2->VAR34, VAR12);
        switch (VAR11)
        {
        case -VAR35:
            break;
        case 0:
            VAR8->VAR13 &= ~VAR36;
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= VAR37 | VAR38 | VAR25;
            VAR8->VAR18 = VAR39 | VAR40;
            VAR8->VAR41 = VAR2->VAR34 + 8;
            break;
        case -VAR42:
            break;
        case -VAR43:
            VAR8->VAR13 &= ~VAR36;
            VAR8->VAR18 = VAR44;
            VAR2->VAR45[0] = 0x80;
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= VAR37 | VAR38 | VAR24 | VAR25;
            VAR8->VAR41 = VAR2->VAR34 + 8;
            break;
        case -VAR46:
            VAR8->VAR13 &= ~VAR36;
            VAR8->VAR17 = VAR47;
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= VAR37 | VAR38 | VAR24 | VAR25;
            VAR8->VAR41 = VAR2->VAR34 + 8;
            break;
        case -VAR48:
            VAR8->VAR21 &= ~VAR22;
            VAR8->VAR21 |= (1 << 8);
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= VAR24 | VAR25;
            break;
        case -VAR49:
            VAR8->VAR13 &= ~VAR36;
            VAR8->VAR13 |= VAR14;
            break;
        default:
            VAR8->VAR13 &= ~VAR36;
            VAR8->VAR17 = VAR50;
            VAR8->VAR13 &= ~VAR23;
            VAR8->VAR13 |= VAR37 | VAR38 | VAR24 | VAR25;
            VAR8->VAR41 = VAR2->VAR34 + 8;
            break;
        }
    } while (VAR11 == -VAR35);
}