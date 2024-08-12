static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR11;
    int VAR12, VAR13;
    if (VAR5 < 5)
        return VAR14;
    VAR13 = FUN2(&VAR4);
    VAR12 = VAR13 >> 4;
    if (VAR10 && VAR10->VAR15 == VAR12)
        return 0;
    if (!VAR10)
    {
        VAR10 = FUN3(sizeof(*VAR10));
        if (!VAR10)
            return FUN4(VAR16);
        VAR7->VAR11 = VAR10;
    }
    VAR10->VAR15 = VAR12;
    VAR10->VAR17 = 0;
    VAR10->VAR18 = 0;
    VAR10->VAR19 = FUN5(&VAR4) + 1;
    VAR10->VAR20 = FUN5(&VAR4) + 1;
    if (!VAR2->VAR19 || !VAR2->VAR20)
    {
        VAR2->VAR19 = VAR10->VAR19;
        VAR2->VAR20 = VAR10->VAR20;
    }
    if (VAR13 & 1 << 3)
    {
        if (VAR5 < 13)
            return VAR14;
        VAR10->VAR17 = FUN5(&VAR4);
        VAR10->VAR19 = FUN5(&VAR4) - VAR10->VAR17 + 1;
        VAR10->VAR18 = FUN5(&VAR4);
        VAR10->VAR20 = FUN5(&VAR4) - VAR10->VAR18 + 1;
    }
    return 0;
}