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
        VAR6 = ((VAR26)VAR3->VAR9[VAR4].VAR4.VAR27[0].VAR28 << 8) | VAR3->VAR9[VAR4].VAR4.VAR27[0].VAR29;
        break;
    case VAR30:
        VAR6 = VAR8->VAR31;
        break;
    case VAR32:
        if (VAR3->VAR9[VAR4].VAR4.VAR27[0].VAR33)
        {
            VAR6 = VAR34 | VAR35 | VAR36;
        }
        else
        {
            VAR6 = VAR37;
        }
        break;
    case VAR38:
        VAR6 = VAR8->VAR39;
        break;
    case VAR40:
        VAR6 = VAR8->VAR41;
        break;
    case VAR42:
        VAR8->VAR43 &= ~VAR3->VAR9[VAR4].VAR44;
        VAR3->VAR9[VAR4].VAR44 = 0;
        VAR6 = VAR8->VAR43;
        break;
    case VAR45:
        VAR6 = VAR8->VAR46;
        break;
    case VAR47:
    default:
        VAR6 = 0;
    }
    FUN2(VAR4, "", VAR5, VAR6);
    return VAR6;
}