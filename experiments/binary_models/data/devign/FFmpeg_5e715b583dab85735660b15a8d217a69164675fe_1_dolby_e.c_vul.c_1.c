static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5 = FUN2(VAR2), VAR6;
    if ((VAR4 = FUN3(VAR2, 1, VAR5)) < 0)
        return VAR4;
    FUN4(&VAR2->VAR7, 4);
    VAR6 = FUN5(&VAR2->VAR7, 10);
    if (!VAR6)
    {
        FUN6(VAR2->VAR8, VAR9, "");
        return VAR10;
    }
    if ((VAR4 = FUN3(VAR2, VAR6, VAR5)) < 0)
        return VAR4;
    FUN4(&VAR2->VAR7, 14);
    VAR2->VAR11 = FUN5(&VAR2->VAR7, 6);
    if (VAR2->VAR11 > VAR12)
    {
        FUN6(VAR2->VAR8, VAR9, "");
        return VAR10;
    }
    VAR2->VAR13 = VAR14[VAR2->VAR11];
    VAR2->VAR15 = VAR16[VAR2->VAR11];
    VAR2->VAR17 = FUN5(&VAR2->VAR7, 4);
    VAR2->VAR18 = FUN5(&VAR2->VAR7, 4);
    if (!VAR19[VAR2->VAR17] || !VAR19[VAR2->VAR18])
    {
        FUN6(VAR2->VAR8, VAR9, "");
        return VAR10;
    }
    FUN7(&VAR2->VAR7, 88);
    for (VAR3 = 0; VAR3 < VAR2->VAR13; VAR3++)
        VAR2->VAR20[VAR3] = FUN5(&VAR2->VAR7, 10);
    VAR2->VAR21 = FUN5(&VAR2->VAR7, 8);
    VAR2->VAR22 = FUN5(&VAR2->VAR7, 8);
    FUN7(&VAR2->VAR7, 10 * VAR2->VAR15);
    for (VAR3 = 0; VAR3 < VAR2->VAR13; VAR3++)
    {
        VAR2->VAR23[VAR3] = FUN5(&VAR2->VAR7, 4);
        FUN8(&VAR2->VAR7);
        VAR2->VAR24[VAR3] = FUN5(&VAR2->VAR7, 10);
        VAR2->VAR25[VAR3] = FUN5(&VAR2->VAR7, 10);
    }
    if (FUN9(&VAR2->VAR7) < 0)
    {
        FUN6(VAR2->VAR8, VAR9, "");
        return VAR10;
    }
    FUN10(VAR2, VAR6 + 1);
    return 0;
}