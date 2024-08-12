static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const int VAR7[VAR8] = {
        [VAR9] = VAR10,
        [VAR11] = VAR12,
        [VAR13] = VAR14,
    };
    VAR15 *VAR16 = (VAR15 *)VAR2;
    VAR17 *VAR18;
    VAR19 *move;
    switch (VAR6->VAR20)
    {
    case VAR21:
        VAR18 = VAR6->VAR22.VAR18.VAR23;
        if (VAR18->VAR24)
        {
            VAR16->VAR25 |= VAR7[VAR18->VAR26];
        }
        else
        {
            VAR16->VAR25 &= ~VAR7[VAR18->VAR26];
        }
        if (VAR18->VAR24 && VAR18->VAR26 == VAR27)
        {
            VAR16->FUN2(VAR16->VAR28, VAR16->VAR29[VAR30], VAR16->VAR29[VAR31], -1, VAR16->VAR25);
        }
        if (VAR18->VAR24 && VAR18->VAR26 == VAR32)
        {
            VAR16->FUN2(VAR16->VAR28, VAR16->VAR29[VAR30], VAR16->VAR29[VAR31], 1, VAR16->VAR25);
        }
        break;
    case VAR33:
        move = VAR6->VAR22.VAR34.VAR23;
        VAR16->VAR29[move->VAR29] = move->VAR35;
        break;
    case VAR36:
        move = VAR6->VAR22.VAR37.VAR23;
        VAR16->VAR29[move->VAR29] += move->VAR35;
        break;
    default:
        break;
    }
}