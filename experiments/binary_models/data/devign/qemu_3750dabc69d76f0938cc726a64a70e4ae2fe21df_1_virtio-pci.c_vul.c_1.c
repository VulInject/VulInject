static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    uint32_t VAR10 = 0;
    int VAR11;
    switch (VAR3)
    {
    case VAR12:
        VAR10 = VAR6->VAR13;
        break;
    case VAR14:
        if (VAR6->VAR13 <= 1)
        {
            VAR10 = VAR8->VAR15 >> (32 * VAR6->VAR13);
        }
        break;
    case VAR16:
        VAR10 = VAR6->VAR17;
        break;
    case VAR18:
        if (VAR6->VAR17 <= FUN3(VAR6->VAR19))
        {
            VAR10 = VAR6->VAR19[VAR6->VAR17];
        }
        break;
    case VAR20:
        VAR10 = VAR8->VAR21;
        break;
    case VAR22:
        for (VAR11 = 0; VAR11 < VAR23; ++VAR11)
        {
            if (FUN4(VAR8, VAR11))
            {
                VAR10 = VAR11 + 1;
            }
        }
        break;
    case VAR24:
        VAR10 = VAR8->VAR25;
        break;
    case VAR26:
        VAR10 = VAR8->VAR27;
        break;
    case VAR28:
        VAR10 = VAR8->VAR29;
        break;
    case VAR30:
        VAR10 = FUN4(VAR8, VAR8->VAR29);
        break;
    case VAR31:
        VAR10 = FUN5(VAR8, VAR8->VAR29);
        break;
    case VAR32:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR34;
        break;
    case VAR35:
        VAR10 = VAR8->VAR29;
        break;
    case VAR36:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR37[0];
        break;
    case VAR38:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR37[1];
        break;
    case VAR39:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR40[0];
        break;
    case VAR41:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR40[1];
        break;
    case VAR42:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR43[0];
        break;
    case VAR44:
        VAR10 = VAR6->VAR33[VAR8->VAR29].VAR43[1];
        break;
    default:
        VAR10 = 0;
    }
    return VAR10;
}