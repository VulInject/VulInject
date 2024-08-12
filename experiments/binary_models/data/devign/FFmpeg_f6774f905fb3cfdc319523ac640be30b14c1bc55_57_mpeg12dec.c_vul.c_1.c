static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13, VAR14;
    FUN2(&VAR10->VAR15, VAR4, VAR5 * 8);
    VAR12 = FUN3(&VAR10->VAR15, 10);
    VAR10->VAR16 = FUN3(&VAR10->VAR15, 3);
    if (VAR10->VAR16 == 0 || VAR10->VAR16 > 3)
        return -1;
    VAR14 = FUN3(&VAR10->VAR15, 16);
    if (VAR10->VAR16 == VAR17 || VAR10->VAR16 == VAR18)
    {
        VAR10->VAR19[0] = FUN4(&VAR10->VAR15);
        VAR13 = FUN3(&VAR10->VAR15, 3);
        if (VAR13 == 0 && (VAR2->VAR20 & VAR21))
            return -1;
        VAR10->VAR22[0][0] = VAR13;
        VAR10->VAR22[0][1] = VAR13;
    }
    if (VAR10->VAR16 == VAR18)
    {
        VAR10->VAR19[1] = FUN4(&VAR10->VAR15);
        VAR13 = FUN3(&VAR10->VAR15, 3);
        if (VAR13 == 0 && (VAR2->VAR20 & VAR21))
            return -1;
        VAR10->VAR22[1][0] = VAR13;
        VAR10->VAR22[1][1] = VAR13;
    }
    VAR10->VAR23.VAR24.VAR16 = VAR10->VAR16;
    VAR10->VAR23.VAR24.VAR25 = VAR10->VAR16 == VAR26;
    if (VAR2->VAR27 & VAR28)
        FUN5(VAR2, VAR29, "", VAR14, VAR12, VAR10->VAR16);
    VAR10->VAR30 = 8;
    VAR10->VAR31 = 8;
    return 0;
}