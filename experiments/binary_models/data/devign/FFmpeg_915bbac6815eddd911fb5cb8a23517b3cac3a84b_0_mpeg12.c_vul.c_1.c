void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        FUN2(&VAR4, 9, 12, VAR5, 1, 1, VAR6, 2, 2);
        FUN2(&VAR7, 9, 12, VAR8, 1, 1, VAR9, 2, 2);
        FUN2(&VAR10, 9, 17, &VAR11[0][1], 2, 1, &VAR11[0][0], 2, 1);
        FUN2(&VAR12, 9, 35, &VAR13[0][1], 2, 1, &VAR13[0][0], 2, 1);
        FUN2(&VAR14, 9, 63, &VAR15[0][1], 2, 1, &VAR15[0][0], 2, 1);
        FUN2(&VAR16, 6, 32, &VAR17[0][1], 2, 1, &VAR17[0][0], 2, 1);
        FUN2(&VAR18, 6, 32, &VAR19[0][1], 2, 1, &VAR19[0][0], 2, 1);
        FUN3(&VAR20);
        FUN3(&VAR21);
        FUN2(&VAR20.VAR22, 9, VAR20.VAR23 + 2, &VAR20.VAR24[0][1], 4, 2, &VAR20.VAR24[0][0], 4, 2);
        FUN2(&VAR21.VAR22, 9, VAR21.VAR23 + 2, &VAR21.VAR24[0][1], 4, 2, &VAR21.VAR24[0][0], 4, 2);
    }