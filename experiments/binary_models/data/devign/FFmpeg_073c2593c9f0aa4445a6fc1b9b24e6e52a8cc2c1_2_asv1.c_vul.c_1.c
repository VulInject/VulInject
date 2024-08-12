static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2(&VAR4, VAR5, 17, &VAR6[0][1], 2, 1, &VAR6[0][0], 2, 1);
        FUN2(&VAR7, VAR5, 8, &VAR8[0][1], 2, 1, &VAR8[0][0], 2, 1);
        FUN2(&VAR9, VAR5, 16, &VAR10[0][1], 2, 1, &VAR10[0][0], 2, 1);
        FUN2(&VAR11, VAR5, 7, &VAR12[0][1], 2, 1, &VAR12[0][0], 2, 1);
        FUN2(&VAR13, VAR14, 63, &VAR15[0][1], 2, 1, &VAR15[0][0], 2, 1);
    }
}