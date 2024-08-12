static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = &VAR2->VAR12;
    int VAR13, VAR14, VAR15 = 0;
    int VAR16[2], VAR17[2], VAR18[2];
    int VAR19, VAR20;
    int VAR21 = 0, VAR22 = 0, VAR23 = 0;
    int VAR24, VAR25, VAR26;
    int VAR27, VAR28, VAR29;
    int VAR30, VAR31, VAR32;
    VAR14 = VAR12->VAR33;
    VAR13 = VAR12->VAR34[VAR3];
    if (VAR12->VAR35)
    {
        VAR12->VAR36[0][VAR3][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0] = 0;
        VAR12->VAR36[0][VAR3][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1] = 0;
        VAR12->VAR37.VAR38.VAR39[1][VAR13][0] = 0;
        VAR12->VAR37.VAR38.VAR39[1][VAR13][1] = 0;
        if (VAR6 == 1)
        {
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][0] = 0;
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][1] = 0;
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14][0] = 0;
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14][1] = 0;
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14 + 1][0] = 0;
            VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14 + 1][1] = 0;
            VAR2->VAR40[VAR12->VAR41][0] = VAR2->VAR40[VAR12->VAR41][1] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + 1][0] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + 1][1] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + VAR14][0] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + VAR14][1] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + VAR14 + 1][0] = 0;
            VAR12->VAR37.VAR38.VAR39[1][VAR13 + VAR14 + 1][1] = 0;
        }
        return;
    }
    VAR15 = ((VAR3 == 0) || (VAR3 == 1)) ? 1 : -1;
    if (VAR12->VAR41 || (VAR3 == 1) || (VAR3 == 3))
    {
        if ((VAR2->VAR42[VAR13]) || (!VAR2->VAR42[VAR13] && !VAR2->VAR42[VAR13 - 1]))
        {
            VAR16[0] = VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1][0];
            VAR16[1] = VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1][1];
            VAR21 = 1;
        }
        else
        {
            VAR16[0] = (VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1][0] + VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1 + VAR15 * VAR14][0] + 1) >> 1;
            VAR16[1] = (VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1][1] + VAR12->VAR37.VAR38.VAR39[0][VAR13 - 1 + VAR15 * VAR14][1] + 1) >> 1;
            VAR21 = 1;
        }
        if (!(VAR3 & 1) && VAR2->VAR10[VAR12->VAR41 - 1])
        {
            VAR21 = 0;
            VAR16[0] = VAR16[1] = 0;
        }
    }
    else
        VAR16[0] = VAR16[1] = 0;
    VAR17[0] = VAR17[1] = VAR18[0] = VAR18[1] = 0;
    if (VAR3 == 0 || VAR3 == 1 || VAR2->VAR42[VAR13])
    {
        if (!VAR12->VAR43)
        {
            if (!VAR2->VAR10[VAR12->VAR41 - VAR12->VAR44])
            {
                VAR22 = 1;
                VAR32 = VAR3 | 2;
                VAR31 = VAR12->VAR34[VAR32] - 2 * VAR14;
                if (VAR2->VAR42[VAR31] && VAR2->VAR42[VAR13])
                {
                    VAR32 = (VAR3 & 2) | (VAR3 & 1);
                }
                VAR17[0] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14][0];
                VAR17[1] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14][1];
                if (VAR2->VAR42[VAR31] && !VAR2->VAR42[VAR13])
                {
                    VAR17[0] = (VAR17[0] + VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32 ^ 2] - 2 * VAR14][0] + 1) >> 1;
                    VAR17[1] = (VAR17[1] + VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32 ^ 2] - 2 * VAR14][1] + 1) >> 1;
                }
            }
            if (VAR12->VAR45 > 1)
            {
                if (!VAR2->VAR10[VAR12->VAR41 - VAR12->VAR44 + 1])
                {
                    VAR23 = 1;
                    VAR32 = 2;
                    VAR30 = VAR12->VAR34[2] - 2 * VAR14 + 2;
                    if (VAR2->VAR42[VAR30] && VAR2->VAR42[VAR13])
                    {
                        VAR32 = VAR3 & 2;
                    }
                    VAR18[0] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14 + 2][0];
                    VAR18[1] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14 + 2][1];
                    if (VAR2->VAR42[VAR30] && !VAR2->VAR42[VAR13])
                    {
                        VAR18[0] = (1 + VAR18[0] + (VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32 ^ 2] - 2 * VAR14 + 2][0])) >> 1;
                        VAR18[1] = (1 + VAR18[1] + (VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32 ^ 2] - 2 * VAR14 + 2][1])) >> 1;
                    }
                    if (VAR12->VAR41 == VAR12->VAR45 - 1)
                    {
                        if (!VAR2->VAR10[VAR12->VAR41 - VAR12->VAR44 - 1])
                        {
                            VAR23 = 1;
                            VAR32 = 3;
                            VAR30 = VAR12->VAR34[3] - 2 * VAR14 - 2;
                            if (VAR2->VAR42[VAR30] && VAR2->VAR42[VAR13])
                            {
                                VAR32 = VAR3 | 1;
                            }
                            VAR18[0] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14 - 2][0];
                            VAR18[1] = VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[VAR32] - 2 * VAR14 - 2][1];
                            if (VAR2->VAR42[VAR30] && !VAR2->VAR42[VAR13])
                            {
                                VAR18[0] = (1 + VAR18[0] + VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[1] - 2 * VAR14 - 2][0]) >> 1;
                                VAR18[1] = (1 + VAR18[1] + VAR12->VAR37.VAR38.VAR39[0][VAR12->VAR34[1] - 2 * VAR14 - 2][1]) >> 1;
                            }
                        }
                        else
                            VAR23 = 0;
                    }
                }
            }
        }
    }
    else
    {
        VAR31 = VAR12->VAR34[1];
        VAR22 = 1;
        VAR17[0] = VAR12->VAR37.VAR38.VAR39[0][VAR31][0];
        VAR17[1] = VAR12->VAR37.VAR38.VAR39[0][VAR31][1];
        VAR30 = VAR12->VAR34[0];
        VAR23 = 1;
        VAR18[0] = VAR12->VAR37.VAR38.VAR39[0][VAR30][0];
        VAR18[1] = VAR12->VAR37.VAR38.VAR39[0][VAR30][1];
    }
    VAR27 = VAR21 + VAR22 + VAR23;
    if (!VAR12->VAR41 && !(VAR3 == 1 || VAR3 == 3))
    {
        VAR16[0] = VAR16[1] = 0;
    }
    if ((VAR12->VAR43 && VAR2->VAR42[VAR13]) || (VAR12->VAR43 && !(VAR3 & 2)))
    {
        VAR17[0] = VAR17[1] = VAR18[0] = VAR18[1] = 0;
    }
    if (!VAR2->VAR42[VAR13])
    {
        if (VAR12->VAR45 == 1)
        {
            VAR19 = VAR17[0];
            VAR20 = VAR17[1];
        }
        else
        {
            if (VAR27 >= 2)
            {
                VAR19 = FUN2(VAR16[0], VAR17[0], VAR18[0]);
                VAR20 = FUN2(VAR16[1], VAR17[1], VAR18[1]);
            }
            else if (VAR27)
            {
                if (VAR21)
                {
                    VAR19 = VAR16[0];
                    VAR20 = VAR16[1];
                }
                if (VAR22)
                {
                    VAR19 = VAR17[0];
                    VAR20 = VAR17[1];
                }
                if (VAR23)
                {
                    VAR19 = VAR18[0];
                    VAR20 = VAR18[1];
                }
            }
            else
                VAR19 = VAR20 = 0;
        }
    }
    else
    {
        if (VAR21)
            VAR24 = (VAR16[1] & 4) ? 1 : 0;
        else
            VAR24 = 0;
        if (VAR22)
            VAR25 = (VAR17[1] & 4) ? 1 : 0;
        else
            VAR25 = 0;
        if (VAR23)
            VAR26 = (VAR18[1] & 4) ? 1 : 0;
        else
            VAR26 = 0;
        VAR29 = VAR24 + VAR25 + VAR26;
        VAR28 = VAR27 - VAR29;
        if (VAR27 == 3)
        {
            if ((VAR28 == 3) || (VAR29 == 3))
            {
                VAR19 = FUN2(VAR16[0], VAR17[0], VAR18[0]);
                VAR20 = FUN2(VAR16[1], VAR17[1], VAR18[1]);
            }
            else if (VAR28 >= VAR29)
            {
                VAR19 = !VAR24 ? VAR16[0] : VAR17[0];
                VAR20 = !VAR24 ? VAR16[1] : VAR17[1];
            }
            else
            {
                VAR19 = VAR24 ? VAR16[0] : VAR17[0];
                VAR20 = VAR24 ? VAR16[1] : VAR17[1];
            }
        }
        else if (VAR27 == 2)
        {
            if (VAR28 >= VAR29)
            {
                if (!VAR24 && VAR21)
                {
                    VAR19 = VAR16[0];
                    VAR20 = VAR16[1];
                }
                else if (!VAR25 && VAR22)
                {
                    VAR19 = VAR17[0];
                    VAR20 = VAR17[1];
                }
                else if (VAR23)
                {
                    VAR19 = VAR18[0];
                    VAR20 = VAR18[1];
                }
                else
                    VAR19 = VAR20 = 0;
            }
            else
            {
                if (VAR24 && VAR21)
                {
                    VAR19 = VAR16[0];
                    VAR20 = VAR16[1];
                }
                else if (VAR25 && VAR22)
                {
                    VAR19 = VAR17[0];
                    VAR20 = VAR17[1];
                }
                else if (VAR23)
                {
                    VAR19 = VAR18[0];
                    VAR20 = VAR18[1];
                }
                else
                    VAR19 = VAR20 = 0;
            }
        }
        else if (VAR27 == 1)
        {
            VAR19 = (VAR21) ? VAR16[0] : ((VAR22) ? VAR17[0] : VAR18[0]);
            VAR20 = (VAR21) ? VAR16[1] : ((VAR22) ? VAR17[1] : VAR18[1]);
        }
        else
            VAR19 = VAR20 = 0;
    }
    VAR12->VAR36[0][VAR3][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0] = ((VAR19 + VAR4 + VAR7) & ((VAR7 << 1) - 1)) - VAR7;
    VAR12->VAR36[0][VAR3][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1] = ((VAR20 + VAR5 + VAR8) & ((VAR8 << 1) - 1)) - VAR8;
    if (VAR6 == 1)
    {
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14 + 1][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + VAR14 + 1][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1];
    }
    else if (VAR6 == 2)
    {
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][0] = VAR12->VAR37.VAR38.VAR39[0][VAR13][0];
        VAR12->VAR37.VAR38.VAR39[0][VAR13 + 1][1] = VAR12->VAR37.VAR38.VAR39[0][VAR13][1];
        VAR12->VAR36[0][VAR3 + 1][0] = VAR12->VAR36[0][VAR3][0];
        VAR12->VAR36[0][VAR3 + 1][1] = VAR12->VAR36[0][VAR3][1];
    }
}