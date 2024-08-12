void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2(&VAR4, VAR5, 9, VAR6, 1, 1, VAR7, 1, 1);
        FUN2(&VAR8, VAR9, 28, VAR10, 1, 1, VAR11, 1, 1);
        FUN2(&VAR12, VAR13, 16, &VAR14[0][1], 2, 1, &VAR14[0][0], 2, 1);
        FUN2(&VAR15, VAR16, 33, &VAR17[0][1], 2, 1, &VAR17[0][0], 2, 1);
        FUN3(&VAR18);
        FUN3(&VAR19);
        FUN3(&VAR20);
        FUN3(&VAR21);
        FUN3(&VAR22);
        FUN4(&VAR18);
        FUN4(&VAR19);
        FUN4(&VAR20);
        FUN4(&VAR21);
        FUN4(&VAR22);
        FUN2(&VAR23, VAR24, 10, &VAR25[0][1], 2, 1, &VAR25[0][0], 2, 1);
        FUN2(&VAR26, VAR24, 10, &VAR27[0][1], 2, 1, &VAR27[0][0], 2, 1);
        FUN2(&VAR28, VAR29, 15, &VAR30[0][1], 4, 2, &VAR30[0][0], 4, 2);
        FUN2(&VAR31, VAR32, 4, &VAR33[0][1], 2, 1, &VAR33[0][0], 2, 1);
        FUN2(&VAR34, VAR35, 15, &VAR36[0][1], 2, 1, &VAR36[0][0], 2, 1);
        FUN2(&VAR37, VAR38, 4, &VAR39[0][1], 2, 1, &VAR39[0][0], 2, 1);
    }
}