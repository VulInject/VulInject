static int FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    int VAR4;
    VAR2->VAR5 = (struct VAR6){NULL, 0, 0, 0};
    VAR2->VAR7 = (struct VAR6){NULL, 0, 0, 0};
    VAR2->VAR8 = (struct VAR6){NULL, 0, 0, 0};
    VAR2->VAR9 = VAR2->VAR10 = (struct VAR6){NULL, 0, 0, 0};
    VAR2->VAR11 = VAR2->VAR12 = NULL;
    for (VAR4 = 0; VAR4 < 64; VAR4++)
    {
        int VAR13 = (VAR14[VAR4][1] << VAR14[VAR4][4]) + VAR14[VAR4][3];
        FUN2(NULL, VAR15, "", VAR13);
        if (VAR4 % 16 == 15)
            FUN2(NULL, VAR15, "");
    }
    for (VAR4 = 0; VAR4 < 64; VAR4++)
    {
        int VAR13 = VAR14[VAR4][2] + VAR14[VAR4][4];
        FUN2(NULL, VAR15, "", VAR13);
        if (VAR4 % 16 == 15)
            FUN2(NULL, VAR15, "");
    }
    if (!VAR3)
    {
        VAR3 = 1;
        FUN3(&VAR16, VAR17, 23, VAR18, 1, 1, VAR19, 1, 1, 1);
        FUN3(&VAR20, VAR21, 4, VAR22, 1, 1, VAR23, 1, 1, 1);
        FUN3(&VAR24, VAR25, 64, VAR26, 1, 1, VAR27, 2, 2, 1);
        FUN3(&VAR28, VAR29, 24, &VAR30[0][1], 1, 1, &VAR30[0][0], 1, 1, 1);
        FUN3(&VAR31, VAR32, 22, &VAR33[0][1], 1, 1, &VAR33[0][0], 1, 1, 1);
        FUN3(&VAR34, VAR35, 7, VAR36, 1, 1, VAR37, 1, 1, 1);
        for (VAR4 = 0; VAR4 < 3; VAR4++)
        {
            FUN3(&VAR38[VAR4], VAR39, 16, VAR40[VAR4], 1, 1, VAR41[VAR4], 2, 2, 1);
        }
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN3(&VAR42[VAR4], VAR43, 16, VAR44[VAR4], 1, 1, VAR45[VAR4], 1, 1, 1);
            FUN3(&VAR46[VAR4], VAR47, 64, VAR48[VAR4], 1, 1, VAR49[VAR4], 2, 2, 1);
            FUN3(&VAR50[VAR4], VAR51, 73, VAR52[VAR4], 1, 1, VAR53[VAR4], 2, 2, 1);
        }
    }
    VAR2->VAR54 = -1;
    VAR2->VAR55 = 0;
    return 0;
}