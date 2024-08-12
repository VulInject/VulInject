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
                    if (!VAR16->VAR24.VAR25)
                        return VAR8;
                    break;
                }
                else
                {
                    if (VAR6->VAR26 == VAR27 && VAR16->VAR4.VAR28 != VAR27)
                        VAR6->VAR26 = FUN4(VAR16->VAR4.VAR28, VAR16->VAR23->VAR29[VAR16->VAR4.VAR30]->VAR31, VAR32);
                }
                if (VAR6->VAR33 == VAR27)
                    break;
                if (VAR16->VAR4.VAR28 == VAR27)
                {
                    VAR6->VAR33 = VAR27;
                    break;
                }
                VAR22 = VAR16->VAR23->VAR29[VAR16->VAR4.VAR30];
                VAR20 = FUN5(VAR16->VAR4.VAR28, VAR34, VAR22->VAR31.VAR35, VAR36) - VAR6->VAR33;
                if (VAR20 >= 0 && (VAR6->VAR37 & VAR38 || VAR16->VAR4.VAR39 & VAR40))
                {
                    VAR6->VAR33 = VAR27;
                    break;
                }
            }
        }
        if (VAR16->VAR4.VAR19)
        {
            struct VAR15 *VAR41 = VAR6->VAR17[VAR10];
            if (VAR10 < 0 || VAR16->VAR42 < VAR41->VAR42)
            {
                VAR10 = VAR9;
            }
            else if (VAR16->VAR42 == VAR41->VAR42)
            {
                int64_t VAR28 = VAR16->VAR4.VAR28;
                int64_t VAR43 = VAR41->VAR4.VAR28;
                VAR21 *VAR22 = VAR16->VAR23->VAR29[VAR16->VAR4.VAR30];
                VAR21 *VAR44 = VAR41->VAR23->VAR29[VAR41->VAR4.VAR30];
                if (VAR28 == VAR27)
                {
                    VAR10 = VAR9;
                }
                else if (VAR43 != VAR27)
                {
                    if (VAR22->VAR45 != VAR27)
                        VAR28 -= VAR22->VAR45;
                    if (VAR44->VAR45 != VAR27)
                        VAR43 -= VAR44->VAR45;
                    if (FUN6(VAR28, VAR22->VAR31, VAR43, VAR44->VAR31) < 0)
                        VAR10 = VAR9;
                }
            }
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
        VAR4->VAR30 += VAR6->VAR17[VAR10]->VAR46;
        FUN7(&VAR6->VAR17[VAR10]->VAR4);
        return 0;
    }
    return VAR47;