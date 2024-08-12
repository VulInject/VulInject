static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10 = -1;
    if (VAR6->VAR11)
    {
        FUN2(VAR2, 1);
        VAR6->VAR11 = 0;
    }
VAR12:
    VAR6->VAR13 = 0;
    for (VAR9 = 0; VAR9 < VAR6->VAR14; VAR9++)
    {
        struct VAR15 *VAR16 = VAR6->VAR17[VAR9];
        if (VAR16->VAR18 && !VAR16->VAR4.VAR19)
        {
            while (1)
            {
                int64_t VAR20;
                VAR21 *VAR22;
                VAR8 = FUN3(VAR16->VAR23, &VAR16->VAR4);
                if (VAR8 < 0)
                {
                    if (!FUN4(&VAR16->VAR24) && VAR8 != VAR25)
                        return VAR8;
                    FUN5(&VAR16->VAR4);
                    break;
                }
                else
                {
                    if (VAR6->VAR26 == VAR27)
                        VAR6->VAR26 = VAR16->VAR4.VAR28;
                }
                if (VAR6->VAR29 == VAR27)
                    break;
                if (VAR16->VAR4.VAR28 == VAR27)
                {
                    VAR6->VAR29 = VAR27;
                    break;
                }
                VAR22 = VAR16->VAR23->VAR30[VAR16->VAR4.VAR31];
                VAR20 = FUN6(VAR16->VAR4.VAR28, VAR32, VAR22->VAR33.VAR34, VAR35) - VAR6->VAR29;
                if (VAR20 >= 0 && (VAR6->VAR36 & VAR37 || VAR16->VAR4.VAR38 & VAR39))
                {
                    VAR6->VAR29 = VAR27;
                    break;
                }
            }
        }
        if (VAR16->VAR4.VAR19)
        {
            struct VAR15 *VAR40 = VAR6->VAR17[VAR10];
            if (VAR10 < 0 || FUN7(VAR16->VAR4.VAR28, VAR16->VAR23->VAR30[VAR16->VAR4.VAR31]->VAR33, VAR40->VAR4.VAR28, VAR40->VAR23->VAR30[VAR40->VAR4.VAR31]->VAR33) > 0)
                VAR10 = VAR9;
        }
    }
    if (VAR6->VAR13)
    {
        if (FUN2(VAR2, 0))
            goto VAR12;
    }
    if (VAR10 >= 0)
    {
        *VAR4 = VAR6->VAR17[VAR10]->VAR4;
        VAR4->VAR31 += VAR6->VAR17[VAR10]->VAR41;
        FUN5(&VAR6->VAR17[VAR10]->VAR4);
        return 0;
    }
    return VAR25;
}