static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    uint32_t VAR6;
    VAR7 *VAR8;
    VAR8 = &VAR3->VAR9[VAR4].VAR10;
    switch (VAR5)
    {
    case VAR11:
        VAR6 = VAR8->VAR12;
        break;
    case VAR13:
        VAR6 = VAR8->VAR14;
        break;
    case VAR15:
        VAR6 = VAR8->VAR16;
        break;
    case VAR17:
        VAR6 = VAR8->VAR18;
        break;
    case VAR19:
        VAR6 = VAR8->VAR20;
        break;
    case VAR21:
        VAR6 = VAR8->VAR22;
        break;
    case VAR23:
        VAR6 = VAR8->VAR24;
        break;
    case VAR25:
        VAR6 = VAR8->VAR26;
        break;
    case VAR27:
        VAR6 = VAR8->VAR28;
        break;
    case VAR29:
        if (VAR3->VAR9[VAR4].VAR4.VAR30[0].VAR31)
        {
            VAR6 = VAR32 | VAR33 | VAR34;
        }
        else
        {
            VAR6 = VAR35;
        }
        break;
    case VAR36:
        VAR6 = VAR8->VAR37;
        break;
    case VAR38:
        VAR6 = VAR8->VAR39;
        break;
    case VAR40:
        VAR8->VAR41 &= ~VAR3->VAR9[VAR4].VAR42;
        VAR3->VAR9[VAR4].VAR42 = 0;
        VAR6 = VAR8->VAR41;
        break;
    case VAR43:
        VAR6 = VAR8->VAR44;
        break;
    case VAR45:
    default:
        VAR6 = 0;
    }
    FUN2(VAR4, "", VAR5, VAR6);
    return VAR6;
}