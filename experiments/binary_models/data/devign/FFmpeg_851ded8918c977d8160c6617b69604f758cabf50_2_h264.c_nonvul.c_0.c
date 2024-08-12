static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    if (VAR2->VAR5 == VAR6)
    {
        return FUN2(VAR2, 3, 1);
    }
    else if (VAR2->VAR5 == VAR7)
    {
        if (FUN3(&VAR2->VAR8, &VAR2->VAR9[14]) == 0)
        {
            if (FUN3(&VAR2->VAR8, &VAR2->VAR9[15]) == 0)
            {
                return 3 * FUN3(&VAR2->VAR8, &VAR2->VAR9[16]);
            }
            else
            {
                return 2 - FUN3(&VAR2->VAR8, &VAR2->VAR9[17]);
            }
        }
        else
        {
            return FUN2(VAR2, 17, 0) + 5;
        }
    }
    else if (VAR2->VAR5 == VAR10)
    {
        const int VAR11 = VAR2->VAR12[0];
        const int VAR13 = VAR2->VAR14;
        int VAR15 = 0;
        int VAR16;
        if (VAR2->VAR17[VAR11] == VAR2->VAR18 && !FUN4(VAR4->VAR19.VAR20[VAR11]))
            VAR15++;
        if (VAR2->VAR17[VAR13] == VAR2->VAR18 && !FUN4(VAR4->VAR19.VAR20[VAR13]))
            VAR15++;
        if (!FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + VAR15]))
            return 0;
        if (!FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 3]))
        {
            return 1 + FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 5]);
        }
        VAR16 = FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 4]) << 3;
        VAR16 |= FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 5]) << 2;
        VAR16 |= FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 5]) << 1;
        VAR16 |= FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 5]);
        if (VAR16 < 8)
            return VAR16 + 3;
        else if (VAR16 == 13)
        {
            return FUN2(VAR2, 32, 0) + 23;
        }
        else if (VAR16 == 14)
            return 11;
        else if (VAR16 == 15)
            return 22;
        VAR16 = (VAR16 << 1) | FUN3(&VAR2->VAR8, &VAR2->VAR9[27 + 5]);
        return VAR16 - 4;
    }
    else
    {
        return -1;
    }
}