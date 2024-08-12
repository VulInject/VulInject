static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    TM2Huff VAR5;
    int VAR6 = 0;
    VAR5.VAR7 = FUN2(&VAR2->VAR8, 5);
    VAR5.VAR9 = FUN2(&VAR2->VAR8, 5);
    VAR5.VAR10 = FUN2(&VAR2->VAR8, 5);
    VAR5.VAR11 = FUN3(&VAR2->VAR8, 17);
    VAR5.VAR12 = 0;
    if ((VAR5.VAR7 < 1) || (VAR5.VAR7 > 32) || (VAR5.VAR9 < 0) || (VAR5.VAR9 > 32))
    {
        FUN4(VAR2->VAR13, VAR14, "", VAR5.VAR7, VAR5.VAR9);
        return -1;
    }
    if ((VAR5.VAR11 <= 0) || (VAR5.VAR11 > 0x10000))
    {
        FUN4(VAR2->VAR13, VAR14, "", VAR5.VAR11);
        return -1;
    }
    if (VAR5.VAR9 == 0)
        VAR5.VAR9 = 1;
    VAR5.VAR15 = (VAR5.VAR11 + 1) >> 1;
    VAR5.VAR16 = FUN5(VAR5.VAR15 * sizeof(int));
    VAR5.VAR17 = FUN5(VAR5.VAR15 * sizeof(VAR18));
    VAR5.VAR19 = FUN5(VAR5.VAR15 * sizeof(int));
    if (FUN6(VAR2, 0, 0, &VAR5) == -1)
        VAR6 = -1;
    if (VAR5.VAR12 != VAR5.VAR15)
    {
        FUN4(VAR2->VAR13, VAR14, "", VAR5.VAR12, VAR5.VAR15);
        VAR6 = -1;
    }
    if (VAR6 != -1)
    {
        int VAR20;
        VAR6 = FUN7(&VAR4->VAR21, VAR5.VAR9, VAR5.VAR15, VAR5.VAR19, sizeof(int), sizeof(int), VAR5.VAR17, sizeof(VAR18), sizeof(VAR18), 0);
        if (VAR6 < 0)
        {
            FUN4(VAR2->VAR13, VAR14, "");
            VAR6 = -1;
        }
        else
            VAR6 = 0;
        if (VAR6 != -1)
        {
            VAR4->VAR17 = VAR5.VAR9;
            VAR4->VAR22 = VAR5.VAR15;
            VAR4->VAR23 = FUN8(VAR4->VAR22 * sizeof(int));
            for (VAR20 = 0; VAR20 < VAR4->VAR22; VAR20++)
                VAR4->VAR23[VAR20] = VAR5.VAR16[VAR20];
        }
    }
    FUN9(VAR5.VAR16);
    FUN9(VAR5.VAR17);
    FUN9(VAR5.VAR19);
    return VAR6;
}