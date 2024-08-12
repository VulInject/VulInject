static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8[VAR3].VAR9;
    FUN2(VAR3, "", VAR4, VAR5);
    switch (VAR4)
    {
    case VAR10:
        VAR7->VAR11 = VAR5;
        FUN3(VAR2->VAR12, &VAR2->VAR8[VAR3].VAR13, ((VAR14)VAR7->VAR15 << 32) | VAR7->VAR11, 1024);
        VAR2->VAR8[VAR3].VAR16 = NULL;
        break;
    case VAR17:
        VAR7->VAR15 = VAR5;
        FUN3(VAR2->VAR12, &VAR2->VAR8[VAR3].VAR13, ((VAR14)VAR7->VAR15 << 32) | VAR7->VAR11, 1024);
        VAR2->VAR8[VAR3].VAR16 = NULL;
        break;
    case VAR18:
        VAR7->VAR19 = VAR5;
        FUN3(VAR2->VAR12, &VAR2->VAR8[VAR3].VAR20, ((VAR14)VAR7->VAR21 << 32) | VAR7->VAR19, 256);
        break;
    case VAR22:
        VAR7->VAR21 = VAR5;
        FUN3(VAR2->VAR12, &VAR2->VAR8[VAR3].VAR20, ((VAR14)VAR7->VAR21 << 32) | VAR7->VAR19, 256);
        break;
    case VAR23:
        VAR7->VAR24 &= ~VAR5;
        FUN4(VAR2);
        break;
    case VAR25:
        VAR7->VAR26 = VAR5 & 0xfdc000ff;
        FUN4(VAR2);
        break;
    case VAR27:
        VAR7->VAR28 = VAR5 & ~(VAR29 | VAR30);
        if (VAR7->VAR28 & VAR31)
        {
            VAR7->VAR28 |= VAR29;
        }
        if (VAR7->VAR28 & VAR32)
        {
            VAR7->VAR28 |= VAR30;
        }
        if ((VAR7->VAR28 & VAR30) && !VAR2->VAR8[VAR3].VAR33)
        {
            FUN5(&VAR2->VAR8[VAR3]);
            VAR2->VAR8[VAR3].VAR33 = true;
        }
        FUN6(VAR2, VAR3);
        break;
    case VAR34:
        VAR2->VAR8[VAR3].VAR3.VAR35[0].VAR36 = (VAR5 >> 8) & 0xff;
        VAR2->VAR8[VAR3].VAR3.VAR35[0].VAR37 = VAR5 & 0xff;
        break;
    case VAR38:
        VAR7->VAR39 = VAR5;
        break;
    case VAR40:
        VAR7->VAR41 = VAR5;
        break;
    case VAR42:
        if (((VAR7->VAR43 & VAR44) == 1) && ((VAR5 & VAR44) == 0))
        {
            FUN7(VAR2, VAR3);
        }
        VAR7->VAR43 = VAR5;
        break;
    case VAR45:
        VAR7->VAR46 &= ~VAR5;
        break;
    case VAR47:
        VAR7->VAR48 |= VAR5;
        break;
    case VAR49:
        VAR7->VAR50 |= VAR5;
        FUN6(VAR2, VAR3);
        break;
    default:
        break;
    }
}