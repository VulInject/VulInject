static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15;
    FUN2(VAR2->VAR16, &VAR14, &VAR15);
    if (VAR9->VAR2->VAR17 & VAR18)
        return FUN3(VAR19);
    if (VAR2->VAR20 & 15)
    {
        FUN4(VAR2, VAR21, ""
                                    "");
        return FUN3(VAR19);
    }
    VAR11 = FUN5(VAR6);
    if (!VAR11)
        return FUN3(VAR22);
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        int VAR23 = VAR12 ? 2 >> VAR15 : 2;
        VAR11->VAR24[VAR12] += (VAR11->VAR25[VAR12] * (VAR23 * (8 * VAR9->VAR26 - ((VAR9->VAR20 / VAR27) & 7)) - 1));
        VAR11->VAR25[VAR12] *= -1;
    }
    VAR13 = FUN6(VAR2, VAR4, VAR11, VAR7);
    FUN7(&VAR11);
    return VAR13;
}