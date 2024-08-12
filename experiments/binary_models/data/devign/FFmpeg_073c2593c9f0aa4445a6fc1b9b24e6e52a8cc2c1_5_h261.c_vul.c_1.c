static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2(&VAR4, VAR5, 35, VAR6, 1, 1, VAR7, 1, 1);
        FUN2(&VAR8, VAR9, 10, VAR10, 1, 1, VAR11, 1, 1);
        FUN2(&VAR12, VAR13, 17, &VAR14[0][1], 2, 1, &VAR14[0][0], 2, 1);
        FUN2(&VAR15, VAR16, 63, &VAR17[0][1], 2, 1, &VAR17[0][0], 2, 1);
        FUN3(&VAR18);
        FUN4(&VAR18);
    }
}