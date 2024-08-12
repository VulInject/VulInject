static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13;
    FUN2(&VAR10->VAR14, VAR4, VAR5 * 8);
    VAR12 = FUN3(&VAR10->VAR14, 10);
    VAR10->VAR15 = FUN3(&VAR10->VAR14, 3);
    FUN4("", VAR10->VAR15, VAR10->VAR16);
    FUN5(&VAR10->VAR14, 16);
    if (VAR10->VAR15 == VAR17 || VAR10->VAR15 == VAR18)
    {
        VAR10->VAR19[0] = FUN6(&VAR10->VAR14);
        VAR13 = FUN3(&VAR10->VAR14, 3);
        if (VAR13 == 0)
            return -1;
        VAR10->VAR20[0][0] = VAR13;
        VAR10->VAR20[0][1] = VAR13;
    }
    if (VAR10->VAR15 == VAR18)
    {
        VAR10->VAR19[1] = FUN6(&VAR10->VAR14);
        VAR13 = FUN3(&VAR10->VAR14, 3);
        if (VAR13 == 0)
            return -1;
        VAR10->VAR20[1][0] = VAR13;
        VAR10->VAR20[1][1] = VAR13;
    }
    VAR10->VAR21.VAR15 = VAR10->VAR15;
    VAR10->VAR21.VAR22 = VAR10->VAR15 == VAR23;
    VAR10->VAR24 = 8;
    VAR10->VAR25 = 8;
    VAR10->VAR26 = 1;
    return 0;
}