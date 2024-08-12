static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15;
    FUN2(VAR2->VAR16, &VAR14, &VAR15);
    if (VAR9->VAR2->VAR17 & VAR18)
        return FUN3(VAR19);
    VAR11 = FUN4(VAR6);
    if (!VAR11)
        return FUN3(VAR20);
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        int VAR21 = VAR12 ? 2 >> VAR15 : 2;
        VAR11->VAR22[VAR12] += (VAR11->VAR23[VAR12] * (VAR21 * (8 * VAR9->VAR24 - ((VAR9->VAR25 / VAR26) & 7)) - 1));
        VAR11->VAR23[VAR12] *= -1;
    }
    VAR13 = FUN5(VAR2, VAR4, VAR11, VAR7);
    FUN6(&VAR11);
    return VAR13;
}