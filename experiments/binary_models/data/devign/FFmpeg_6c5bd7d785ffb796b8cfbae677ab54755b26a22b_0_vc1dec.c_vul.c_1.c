static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, int VAR11)
{
    VAR12 *VAR13 = &VAR2->VAR13;
    int VAR14, VAR15, VAR16 = 0;
    int VAR17[2], VAR18[2], VAR19[2];
    int VAR20, VAR21;
    int VAR22 = 0, VAR23 = 0, VAR24 = 0;
    int VAR25, VAR26, VAR27;
    int VAR28, VAR29, VAR30;
    int VAR31, VAR32, VAR33;
    VAR15 = VAR13->VAR34;
    VAR14 = VAR13->VAR35[VAR3];
    if (VAR13->VAR36)
    {
        VAR13->VAR37[0][VAR3][0] = VAR13->VAR38.VAR39[0][VAR14][0] = 0;
        VAR13->VAR37[0][VAR3][1] = VAR13->VAR38.VAR39[0][VAR14][1] = 0;
        VAR13->VAR38.VAR39[1][VAR14][0] = 0;
        VAR13->VAR38.VAR39[1][VAR14][1] = 0;
        if (VAR6 == 1)
        {
            VAR13->VAR38.VAR39[0][VAR14 + 1][0] = 0;
            VAR13->VAR38.VAR39[0][VAR14 + 1][1] = 0;
            VAR13->VAR38.VAR39[0][VAR14 + VAR15][0] = 0;
            VAR13->VAR38.VAR39[0][VAR14 + VAR15][1] = 0;
            VAR13->VAR38.VAR39[0][VAR14 + VAR15 + 1][0] = 0;
            VAR13->VAR38.VAR39[0][VAR14 + VAR15 + 1][1] = 0;
            VAR2->VAR40[VAR13->VAR41][0] = VAR2->VAR40[VAR13->VAR41][1] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + 1][0] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + 1][1] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + VAR15][0] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + VAR15][1] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + VAR15 + 1][0] = 0;
            VAR13->VAR38.VAR39[1][VAR14 + VAR15 + 1][1] = 0;
        }
        return;
    }
    VAR16 = ((VAR3 == 0) || (VAR3 == 1)) ? 1 : -1;
    if (VAR13->VAR41 || (VAR3 == 1) || (VAR3 == 3))
    {
        if ((VAR2->VAR42[VAR14]) || (!VAR2->VAR42[VAR14] && !VAR2->VAR42[VAR14 - 1]))
        {
            VAR17[0] = VAR13->VAR38.VAR39[VAR11][VAR14 - 1][0];
            VAR17[1] = VAR13->VAR38.VAR39[VAR11][VAR14 - 1][1];
            VAR22 = 1;
        }
        else
        {
            VAR17[0] = (VAR13->VAR38.VAR39[VAR11][VAR14 - 1][0] + VAR13->VAR38.VAR39[VAR11][VAR14 - 1 + VAR16 * VAR15][0] + 1) >> 1;
            VAR17[1] = (VAR13->VAR38.VAR39[VAR11][VAR14 - 1][1] + VAR13->VAR38.VAR39[VAR11][VAR14 - 1 + VAR16 * VAR15][1] + 1) >> 1;
            VAR22 = 1;
        }
        if (!(VAR3 & 1) && VAR2->VAR10[VAR13->VAR41 - 1])
        {
            VAR22 = 0;
            VAR17[0] = VAR17[1] = 0;
        }
    }
    else
        VAR17[0] = VAR17[1] = 0;
    VAR18[0] = VAR18[1] = VAR19[0] = VAR19[1] = 0;
    if (VAR3 == 0 || VAR3 == 1 || VAR2->VAR42[VAR14])
    {
        if (!VAR13->VAR43)
        {
            if (!VAR2->VAR10[VAR13->VAR41 - VAR13->VAR44])
            {
                VAR23 = 1;
                VAR33 = VAR3 | 2;
                VAR32 = VAR13->VAR35[VAR33] - 2 * VAR15;
                if (VAR2->VAR42[VAR32] && VAR2->VAR42[VAR14])
                {
                    VAR33 = (VAR3 & 2) | (VAR3 & 1);
                }
                VAR18[0] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15][0];
                VAR18[1] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15][1];
                if (VAR2->VAR42[VAR32] && !VAR2->VAR42[VAR14])
                {
                    VAR18[0] = (VAR18[0] + VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33 ^ 2] - 2 * VAR15][0] + 1) >> 1;
                    VAR18[1] = (VAR18[1] + VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33 ^ 2] - 2 * VAR15][1] + 1) >> 1;
                }
            }
            if (VAR13->VAR45 > 1)
            {
                if (!VAR2->VAR10[VAR13->VAR41 - VAR13->VAR44 + 1])
                {
                    VAR24 = 1;
                    VAR33 = 2;
                    VAR31 = VAR13->VAR35[2] - 2 * VAR15 + 2;
                    if (VAR2->VAR42[VAR31] && VAR2->VAR42[VAR14])
                    {
                        VAR33 = VAR3 & 2;
                    }
                    VAR19[0] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15 + 2][0];
                    VAR19[1] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15 + 2][1];
                    if (VAR2->VAR42[VAR31] && !VAR2->VAR42[VAR14])
                    {
                        VAR19[0] = (1 + VAR19[0] + (VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33 ^ 2] - 2 * VAR15 + 2][0])) >> 1;
                        VAR19[1] = (1 + VAR19[1] + (VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33 ^ 2] - 2 * VAR15 + 2][1])) >> 1;
                    }
                    if (VAR13->VAR41 == VAR13->VAR45 - 1)
                    {
                        if (!VAR2->VAR10[VAR13->VAR41 - VAR13->VAR44 - 1])
                        {
                            VAR24 = 1;
                            VAR33 = 3;
                            VAR31 = VAR13->VAR35[3] - 2 * VAR15 - 2;
                            if (VAR2->VAR42[VAR31] && VAR2->VAR42[VAR14])
                            {
                                VAR33 = VAR3 | 1;
                            }
                            VAR19[0] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15 - 2][0];
                            VAR19[1] = VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[VAR33] - 2 * VAR15 - 2][1];
                            if (VAR2->VAR42[VAR31] && !VAR2->VAR42[VAR14])
                            {
                                VAR19[0] = (1 + VAR19[0] + VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[1] - 2 * VAR15 - 2][0]) >> 1;
                                VAR19[1] = (1 + VAR19[1] + VAR13->VAR38.VAR39[VAR11][VAR13->VAR35[1] - 2 * VAR15 - 2][1]) >> 1;
                            }
                        }
                        else
                            VAR24 = 0;
                    }
                }
            }
        }
    }
    else
    {
        VAR32 = VAR13->VAR35[1];
        VAR23 = 1;
        VAR18[0] = VAR13->VAR38.VAR39[VAR11][VAR32][0];
        VAR18[1] = VAR13->VAR38.VAR39[VAR11][VAR32][1];
        VAR31 = VAR13->VAR35[0];
        VAR24 = 1;
        VAR19[0] = VAR13->VAR38.VAR39[VAR11][VAR31][0];
        VAR19[1] = VAR13->VAR38.VAR39[VAR11][VAR31][1];
    }
    VAR28 = VAR22 + VAR23 + VAR24;
    if (!VAR13->VAR41 && !(VAR3 == 1 || VAR3 == 3))
    {
        VAR17[0] = VAR17[1] = 0;
    }
    if ((VAR13->VAR43 && VAR2->VAR42[VAR14]) || (VAR13->VAR43 && !(VAR3 & 2)))
    {
        VAR18[0] = VAR18[1] = VAR19[0] = VAR19[1] = 0;
    }
    if (!VAR2->VAR42[VAR14])
    {
        if (VAR13->VAR45 == 1)
        {
            VAR20 = VAR18[0];
            VAR21 = VAR18[1];
        }
        else
        {
            if (VAR28 >= 2)
            {
                VAR20 = FUN2(VAR17[0], VAR18[0], VAR19[0]);
                VAR21 = FUN2(VAR17[1], VAR18[1], VAR19[1]);
            }
            else if (VAR28)
            {
                if (VAR22)
                {
                    VAR20 = VAR17[0];
                    VAR21 = VAR17[1];
                }
                else if (VAR23)
                {
                    VAR20 = VAR18[0];
                    VAR21 = VAR18[1];
                }
                else if (VAR24)
                {
                    VAR20 = VAR19[0];
                    VAR21 = VAR19[1];
                }
                else
                    FUN3(0);
            }
            else
                VAR20 = VAR21 = 0;
        }
    }
    else
    {
        if (VAR22)
            VAR25 = (VAR17[1] & 4) ? 1 : 0;
        else
            VAR25 = 0;
        if (VAR23)
            VAR26 = (VAR18[1] & 4) ? 1 : 0;
        else
            VAR26 = 0;
        if (VAR24)
            VAR27 = (VAR19[1] & 4) ? 1 : 0;
        else
            VAR27 = 0;
        VAR30 = VAR25 + VAR26 + VAR27;
        VAR29 = VAR28 - VAR30;
        if (VAR28 == 3)
        {
            if ((VAR29 == 3) || (VAR30 == 3))
            {
                VAR20 = FUN2(VAR17[0], VAR18[0], VAR19[0]);
                VAR21 = FUN2(VAR17[1], VAR18[1], VAR19[1]);
            }
            else if (VAR29 >= VAR30)
            {
                VAR20 = !VAR25 ? VAR17[0] : VAR18[0];
                VAR21 = !VAR25 ? VAR17[1] : VAR18[1];
            }
            else
            {
                VAR20 = VAR25 ? VAR17[0] : VAR18[0];
                VAR21 = VAR25 ? VAR17[1] : VAR18[1];
            }
        }
        else if (VAR28 == 2)
        {
            if (VAR29 >= VAR30)
            {
                if (!VAR25 && VAR22)
                {
                    VAR20 = VAR17[0];
                    VAR21 = VAR17[1];
                }
                else if (!VAR26 && VAR23)
                {
                    VAR20 = VAR18[0];
                    VAR21 = VAR18[1];
                }
                else if (VAR24)
                {
                    VAR20 = VAR19[0];
                    VAR21 = VAR19[1];
                }
                else
                    VAR20 = VAR21 = 0;
            }
            else
            {
                if (VAR25 && VAR22)
                {
                    VAR20 = VAR17[0];
                    VAR21 = VAR17[1];
                }
                else if (VAR26 && VAR23)
                {
                    VAR20 = VAR18[0];
                    VAR21 = VAR18[1];
                }
                else if (VAR24)
                {
                    VAR20 = VAR19[0];
                    VAR21 = VAR19[1];
                }
                else
                    VAR20 = VAR21 = 0;
            }
        }
        else if (VAR28 == 1)
        {
            VAR20 = (VAR22) ? VAR17[0] : ((VAR23) ? VAR18[0] : VAR19[0]);
            VAR21 = (VAR22) ? VAR17[1] : ((VAR23) ? VAR18[1] : VAR19[1]);
        }
        else
            VAR20 = VAR21 = 0;
    }
    VAR13->VAR37[VAR11][VAR3][0] = VAR13->VAR38.VAR39[VAR11][VAR14][0] = ((VAR20 + VAR4 + VAR7) & ((VAR7 << 1) - 1)) - VAR7;
    VAR13->VAR37[VAR11][VAR3][1] = VAR13->VAR38.VAR39[VAR11][VAR14][1] = ((VAR21 + VAR5 + VAR8) & ((VAR8 << 1) - 1)) - VAR8;
    if (VAR6 == 1)
    {
        VAR13->VAR38.VAR39[VAR11][VAR14 + 1][0] = VAR13->VAR38.VAR39[VAR11][VAR14][0];
        VAR13->VAR38.VAR39[VAR11][VAR14 + 1][1] = VAR13->VAR38.VAR39[VAR11][VAR14][1];
        VAR13->VAR38.VAR39[VAR11][VAR14 + VAR15][0] = VAR13->VAR38.VAR39[VAR11][VAR14][0];
        VAR13->VAR38.VAR39[VAR11][VAR14 + VAR15][1] = VAR13->VAR38.VAR39[VAR11][VAR14][1];
        VAR13->VAR38.VAR39[VAR11][VAR14 + VAR15 + 1][0] = VAR13->VAR38.VAR39[VAR11][VAR14][0];
        VAR13->VAR38.VAR39[VAR11][VAR14 + VAR15 + 1][1] = VAR13->VAR38.VAR39[VAR11][VAR14][1];
    }
    else if (VAR6 == 2)
    {
        VAR13->VAR38.VAR39[VAR11][VAR14 + 1][0] = VAR13->VAR38.VAR39[VAR11][VAR14][0];
        VAR13->VAR38.VAR39[VAR11][VAR14 + 1][1] = VAR13->VAR38.VAR39[VAR11][VAR14][1];
        VAR13->VAR37[VAR11][VAR3 + 1][0] = VAR13->VAR37[VAR11][VAR3][0];
        VAR13->VAR37[VAR11][VAR3 + 1][1] = VAR13->VAR37[VAR11][VAR3][1];
    }
}