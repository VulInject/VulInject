static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13, VAR14;
    if (FUN2(VAR10->VAR2) < 0)
        return -2;
    FUN3(&VAR10->VAR15, VAR4, VAR5 * 8);
    VAR12 = FUN4(&VAR10->VAR15, 10);
    VAR10->VAR16 = FUN4(&VAR10->VAR15, 3);
    VAR14 = FUN4(&VAR10->VAR15, 16);
    if (VAR10->VAR16 == VAR17 || VAR10->VAR16 == VAR18)
    {
        VAR10->VAR19[0] = FUN5(&VAR10->VAR15);
        VAR13 = FUN4(&VAR10->VAR15, 3);
        if (VAR13 == 0)
            return -1;
        VAR10->VAR20[0][0] = VAR13;
        VAR10->VAR20[0][1] = VAR13;
    }
    if (VAR10->VAR16 == VAR18)
    {
        VAR10->VAR19[1] = FUN5(&VAR10->VAR15);
        VAR13 = FUN4(&VAR10->VAR15, 3);
        if (VAR13 == 0)
            return -1;
        VAR10->VAR20[1][0] = VAR13;
        VAR10->VAR20[1][1] = VAR13;
    }
    VAR10->VAR21.VAR16 = VAR10->VAR16;
    VAR10->VAR21.VAR22 = VAR10->VAR16 == VAR23;
    VAR10->VAR24 = 8;
    VAR10->VAR25 = 8;
    VAR10->VAR26 = 1;
    return 0;
}