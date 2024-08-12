static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    unsigned VAR10 = 0;
    int VAR11 = 16;
    int VAR12, VAR13;
    unsigned VAR14 = VAR8->VAR15;
    VAR8->VAR16[0] = VAR8->VAR16[VAR8->VAR15];
    VAR8->VAR17 = VAR4->VAR18;
    VAR8->VAR19 = VAR8->VAR20[VAR14];
    switch (VAR8->VAR21 = FUN2(VAR6, 2))
    {
    case VAR22:
        VAR8->VAR15 = 1 << FUN2(VAR6, 2);
        VAR12 = VAR8->VAR15 - 1;
        if (VAR8->VAR15 == 1)
            VAR8->VAR17 = 0;
        if (VAR8->VAR15 > 4)
        {
            FUN3(VAR2->VAR23, VAR24, "", VAR8->VAR15);
            return -1;
        }
        VAR8->VAR20[0] = 0;
        VAR8->VAR20[VAR8->VAR15] = VAR11;
        VAR11 = (VAR11 + (VAR8->VAR15 >> 1)) / VAR8->VAR15;
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            VAR8->VAR20[VAR9 + 1] = VAR8->VAR20[VAR9] + VAR11;
        VAR8->VAR16[1] = FUN4(VAR6);
        for (VAR9 = 1; VAR9 < VAR8->VAR15; VAR9++)
            VAR8->VAR16[VAR9 + 1] = VAR8->VAR16[1];
        break;
    case VAR25:
        VAR11 += FUN2(VAR6, 2);
        VAR13 = FUN2(VAR6, 2);
        VAR8->VAR15 = VAR13 + 1;
        VAR8->VAR20[0] = 0;
        VAR8->VAR20[VAR8->VAR15] = VAR11;
        for (VAR9 = 0; VAR9 < VAR13; VAR9++)
            VAR8->VAR20[VAR8->VAR15 - 1 - VAR9] = VAR8->VAR20[VAR8->VAR15 - VAR9] - 2 * FUN2(VAR6, 2) - 2;
        VAR10 = FUN2(VAR6, VAR26[VAR8->VAR15]);
        for (VAR9 = 0; VAR9 < VAR8->VAR15; VAR9++)
            VAR8->VAR16[VAR8->VAR15 - VAR9] = FUN4(VAR6);
        break;
    case VAR27:
        VAR8->VAR20[0] = FUN2(VAR6, 2);
        VAR12 = FUN2(VAR6, 2);
        VAR8->VAR15 = VAR12 + 1;
        VAR8->VAR20[VAR8->VAR15] = VAR11;
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            VAR8->VAR20[VAR9 + 1] = VAR8->VAR20[VAR9] + 2 * FUN2(VAR6, 2) + 2;
        VAR10 = FUN2(VAR6, VAR26[VAR8->VAR15]);
        FUN5(VAR6, VAR8->VAR16 + 1, VAR8->VAR15);
        break;
    case VAR28:
        VAR8->VAR20[0] = FUN2(VAR6, 2);
        VAR11 += FUN2(VAR6, 2);
        VAR12 = FUN2(VAR6, 2);
        VAR13 = FUN2(VAR6, 2);
        VAR8->VAR15 = VAR12 + VAR13 + 1;
        if (VAR8->VAR15 > 5)
        {
            FUN3(VAR2->VAR23, VAR24, "", VAR8->VAR15);
            return -1;
        }
        VAR8->VAR20[VAR8->VAR15] = VAR11;
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
            VAR8->VAR20[VAR9 + 1] = VAR8->VAR20[VAR9] + 2 * FUN2(VAR6, 2) + 2;
        for (VAR9 = 0; VAR9 < VAR13; VAR9++)
            VAR8->VAR20[VAR8->VAR15 - 1 - VAR9] = VAR8->VAR20[VAR8->VAR15 - VAR9] - 2 * FUN2(VAR6, 2) - 2;
        VAR10 = FUN2(VAR6, VAR26[VAR8->VAR15]);
        FUN5(VAR6, VAR8->VAR16 + 1, VAR8->VAR15);
        break;
    }
    if (VAR10 > VAR8->VAR15 + 1)
    {
        FUN3(VAR2->VAR23, VAR24, "", VAR10);
        return -1;
    }
    VAR8->VAR29 = (VAR8->VAR15 > 1) + 1;
    VAR8->VAR30[0] = VAR8->VAR20[0];
    VAR8->VAR30[VAR8->VAR29] = VAR8->VAR20[VAR8->VAR15];
    if (VAR8->VAR29 > 1)
    {
        unsigned int VAR31;
        if (VAR8->VAR21 == VAR22)
        {
            VAR31 = VAR8->VAR15 >> 1;
        }
        else if (VAR8->VAR21 & 1)
        {
            VAR31 = VAR8->VAR15 - FUN6(VAR10 - 1, 1);
        }
        else
        {
            if (!VAR10)
                VAR31 = 1;
            else if (VAR10 == 1)
                VAR31 = VAR8->VAR15 - 1;
            else
                VAR31 = VAR10 - 1;
        }
        VAR8->VAR30[1] = VAR8->VAR20[VAR31];
    }
    VAR8->VAR32[0] = -(VAR8->VAR32[1] != VAR14);
    VAR8->VAR32[1] = -1;
    if ((VAR8->VAR21 & 1) && VAR10)
    {
        VAR8->VAR32[1] = VAR8->VAR15 + 1 - VAR10;
    }
    else if ((VAR8->VAR21 == 2) && (VAR10 > 1))
        VAR8->VAR32[1] = VAR10 - 1;
    return 0;
}