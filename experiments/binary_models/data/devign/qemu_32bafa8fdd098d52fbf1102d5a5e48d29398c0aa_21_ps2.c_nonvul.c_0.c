static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const int VAR7[VAR8] = {
        [VAR9] = VAR10,
        [VAR11] = VAR12,
        [VAR13] = VAR14,
    };
    VAR15 *VAR16 = (VAR15 *)VAR2;
    VAR17 *move;
    VAR18 *VAR19;
    if (!(VAR16->VAR20 & VAR21))
        return;
    switch (VAR6->VAR22)
    {
    case VAR23:
        move = VAR6->VAR24.VAR25.VAR26;
        if (move->VAR27 == VAR28)
        {
            VAR16->VAR29 += move->VAR30;
        }
        else if (move->VAR27 == VAR31)
        {
            VAR16->VAR32 -= move->VAR30;
        }
        break;
    case VAR33:
        VAR19 = VAR6->VAR24.VAR19.VAR26;
        if (VAR19->VAR34)
        {
            VAR16->VAR35 |= VAR7[VAR19->VAR36];
            if (VAR19->VAR36 == VAR37)
            {
                VAR16->VAR38--;
            }
            else if (VAR19->VAR36 == VAR39)
            {
                VAR16->VAR38++;
            }
        }
        else
        {
            VAR16->VAR35 &= ~VAR7[VAR19->VAR36];
        }
        break;
    default:
        break;
    }
}