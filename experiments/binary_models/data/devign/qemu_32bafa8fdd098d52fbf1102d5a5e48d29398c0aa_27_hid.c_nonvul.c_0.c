static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const int VAR7[VAR8] = {
        [VAR9] = 0x01,
        [VAR10] = 0x02,
        [VAR11] = 0x04,
    };
    VAR12 *VAR13 = (VAR12 *)VAR2;
    VAR14 *VAR15;
    VAR16 *move;
    VAR17 *VAR18;
    assert(VAR13->VAR19 < VAR20);
    VAR15 = &VAR13->VAR21.VAR22[(VAR13->VAR23 + VAR13->VAR19) & VAR24];
    switch (VAR6->VAR25)
    {
    case VAR26:
        move = VAR6->VAR27.VAR28.VAR29;
        if (move->VAR30 == VAR31)
        {
            VAR15->VAR32 += move->VAR33;
        }
        else if (move->VAR30 == VAR34)
        {
            VAR15->VAR35 += move->VAR33;
        }
        break;
    case VAR36:
        move = VAR6->VAR27.VAR37.VAR29;
        if (move->VAR30 == VAR31)
        {
            VAR15->VAR32 = move->VAR33;
        }
        else if (move->VAR30 == VAR34)
        {
            VAR15->VAR35 = move->VAR33;
        }
        break;
    case VAR38:
        VAR18 = VAR6->VAR27.VAR18.VAR29;
        if (VAR18->VAR39)
        {
            VAR15->VAR40 |= VAR7[VAR18->VAR41];
            if (VAR18->VAR41 == VAR42)
            {
                VAR15->VAR43--;
            }
            else if (VAR18->VAR41 == VAR44)
            {
                VAR15->VAR43++;
            }
        }
        else
        {
            VAR15->VAR40 &= ~VAR7[VAR18->VAR41];
        }
        break;
    default:
        break;
    }
}