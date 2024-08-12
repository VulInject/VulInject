static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7 = 0;
    VAR8 *VAR9, VAR10[82];
    AVBPrint VAR11;
    VAR12 *VAR13;
    while ((VAR10[VAR7++] = FUN2(&VAR2->VAR14)) && VAR7 < 81)
        ;
    if (VAR7 > 80)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return VAR17;
    }
    VAR3 = FUN4(VAR3 - VAR7, 0);
    if (FUN2(&VAR2->VAR14) != 0)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return VAR17;
    }
    VAR3 = FUN4(VAR3 - 1, 0);
    if ((VAR6 = FUN5(&VAR11, VAR2->VAR14.VAR18, VAR2->VAR14.VAR18 + VAR3)) < 0)
        return VAR6;
    FUN6(&VAR11, (char **)&VAR9);
    VAR13 = FUN7(VAR5, VAR19, VAR11.VAR20);
    if (!VAR13)
    {
        FUN8(VAR9);
    }
    FUN9(&VAR13->VAR21, "", VAR10, 0);
    memcpy(VAR13->VAR9, VAR9, VAR11.VAR20);
    FUN8(VAR9);
    FUN10(&VAR2->VAR14, VAR3 + 4);
    return 0;