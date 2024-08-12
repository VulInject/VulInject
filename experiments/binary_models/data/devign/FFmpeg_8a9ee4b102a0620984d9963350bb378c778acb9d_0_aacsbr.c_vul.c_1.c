static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    VAR8->VAR10[0] = VAR8->VAR10[VAR8->VAR11[1]];
    VAR8->VAR11[0] = VAR8->VAR11[1];
    VAR8->VAR12 = VAR4->VAR13;
    switch (VAR8->VAR14 = FUN2(VAR6, 2))
    {
    case VAR15:
        VAR8->VAR11[1] = 1 << FUN2(VAR6, 2);
        if (VAR8->VAR11[1] == 1)
            VAR8->VAR12 = 0;
        VAR8->VAR10[1] = FUN3(VAR6);
        for (VAR9 = 1; VAR9 < VAR8->VAR11[1]; VAR9++)
            VAR8->VAR10[VAR9 + 1] = VAR8->VAR10[1];
        break;
    case VAR16:
        VAR8->VAR17[1] = FUN2(VAR6, 2);
        VAR8->VAR18[1] = FUN2(VAR6, 2);
        VAR8->VAR11[1] = VAR8->VAR18[1] + 1;
        for (VAR9 = 0; VAR9 < VAR8->VAR18[1]; VAR9++)
            VAR8->VAR19[1][VAR9] = 2 * FUN2(VAR6, 2) + 2;
        VAR8->VAR20 = FUN2(VAR6, VAR21[VAR8->VAR11[1]]);
        for (VAR9 = 0; VAR9 < VAR8->VAR11[1]; VAR9++)
            VAR8->VAR10[VAR8->VAR11[1] - VAR9] = FUN3(VAR6);
        break;
    case VAR22:
        VAR8->VAR17[0] = FUN2(VAR6, 2);
        VAR8->VAR18[0] = FUN2(VAR6, 2);
        VAR8->VAR11[1] = VAR8->VAR18[0] + 1;
        for (VAR9 = 0; VAR9 < VAR8->VAR18[0]; VAR9++)
            VAR8->VAR19[0][VAR9] = 2 * FUN2(VAR6, 2) + 2;
        VAR8->VAR20 = FUN2(VAR6, VAR21[VAR8->VAR11[1]]);
        FUN4(VAR6, VAR8->VAR10 + 1, VAR8->VAR11[1]);
        break;
    case VAR23:
        VAR8->VAR17[0] = FUN2(VAR6, 2);
        VAR8->VAR17[1] = FUN2(VAR6, 2);
        VAR8->VAR18[0] = FUN2(VAR6, 2);
        VAR8->VAR18[1] = FUN2(VAR6, 2);
        VAR8->VAR11[1] = VAR8->VAR18[0] + VAR8->VAR18[1] + 1;
        for (VAR9 = 0; VAR9 < VAR8->VAR18[0]; VAR9++)
            VAR8->VAR19[0][VAR9] = 2 * FUN2(VAR6, 2) + 2;
        for (VAR9 = 0; VAR9 < VAR8->VAR18[1]; VAR9++)
            VAR8->VAR19[1][VAR9] = 2 * FUN2(VAR6, 2) + 2;
        VAR8->VAR20 = FUN2(VAR6, VAR21[VAR8->VAR11[1]]);
        FUN4(VAR6, VAR8->VAR10 + 1, VAR8->VAR11[1]);
        break;
    }
    if (VAR8->VAR20 > VAR8->VAR11[1] + 1)
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR8->VAR20);
        return -1;
    }
    if (VAR8->VAR14 == VAR15 && VAR8->VAR11[1] > 4)
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR8->VAR11[1]);
        return -1;
    }
    if (VAR8->VAR14 == VAR23 && VAR8->VAR11[1] > 5)
    {
        FUN5(VAR2->VAR24, VAR25, "", VAR8->VAR11[1]);
        return -1;
    }
    VAR8->VAR26 = (VAR8->VAR11[1] > 1) + 1;
    return 0;