static void FUN1(void)
{
    static int VAR1 = 0;
    if (!VAR1)
    {
        VAR1 = 1;
        FUN2(&VAR2, VAR3, 12, VAR4, 1, 1, VAR5, 2, 2);
        FUN2(&VAR6, VAR3, 12, VAR7, 1, 1, VAR8, 2, 2);
        FUN2(&VAR9, VAR10, 17, &VAR11[0][1], 2, 1, &VAR11[0][0], 2, 1);
        FUN2(&VAR12, VAR13, 36, &VAR14[0][1], 2, 1, &VAR14[0][0], 2, 1);
        FUN2(&VAR15, VAR16, 64, &VAR17[0][1], 2, 1, &VAR17[0][0], 2, 1);
        FUN2(&VAR18, VAR19, 7, &VAR20[0][1], 2, 1, &VAR20[0][0], 2, 1);
        FUN2(&VAR21, VAR22, 11, &VAR23[0][1], 2, 1, &VAR23[0][0], 2, 1);
        FUN3(&VAR24);
        FUN3(&VAR25);
        FUN4(&VAR24);
        FUN4(&VAR25);
    }
}