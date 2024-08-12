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
            VAR10 = (VAR8->VAR15 & ~VAR16) >> (32 * VAR6->VAR13);
        }
        break;
    case VAR17:
        VAR10 = VAR6->VAR18;
        break;
    case VAR19:
        if (VAR6->VAR18 < FUN3(VAR6->VAR20))
        {
            VAR10 = VAR6->VAR20[VAR6->VAR18];
        }
        break;
    case VAR21:
        VAR10 = VAR8->VAR22;
        break;
    case VAR23:
        for (VAR11 = 0; VAR11 < VAR24; ++VAR11)
        {
            if (FUN4(VAR8, VAR11))
            {
                VAR10 = VAR11 + 1;
            }
        }
        break;
    case VAR25:
        VAR10 = VAR8->VAR26;
        break;
    case VAR27:
        VAR10 = VAR8->VAR28;
        break;
    case VAR29:
        VAR10 = VAR8->VAR30;
        break;
    case VAR31:
        VAR10 = FUN4(VAR8, VAR8->VAR30);
        break;
    case VAR32:
        VAR10 = FUN5(VAR8, VAR8->VAR30);
        break;
    case VAR33:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR35;
        break;
    case VAR36:
        VAR10 = VAR8->VAR30;
        break;
    case VAR37:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR38[0];
        break;
    case VAR39:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR38[1];
        break;
    case VAR40:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR41[0];
        break;
    case VAR42:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR41[1];
        break;
    case VAR43:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR44[0];
        break;
    case VAR45:
        VAR10 = VAR6->VAR34[VAR8->VAR30].VAR44[1];
        break;
    default:
        VAR10 = 0;
    }
    return VAR10;
}