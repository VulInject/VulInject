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
        FUN3(&VAR28, VAR29, 64, VAR30, 1, 1, VAR31, 2, 2, 1);
        FUN3(&VAR32, VAR33, 7, VAR34, 1, 1, VAR35, 1, 1, 1);
        for (VAR4 = 0; VAR4 < 2; VAR4++)
        {
            FUN3(&VAR36[VAR4], VAR37, 26, VAR38[VAR4], 1, 1, VAR39[VAR4], 4, 4, 1);
            FUN3(&VAR40[VAR4], VAR41, 26, VAR42[VAR4], 1, 1, VAR43[VAR4], 4, 4, 1);
        }
        for (VAR4 = 0; VAR4 < 3; VAR4++)
        {
            FUN3(&VAR44[VAR4], VAR45, 16, VAR46[VAR4], 1, 1, VAR47[VAR4], 2, 2, 1);
        }
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN3(&VAR48[VAR4], VAR49, 16, VAR50[VAR4], 1, 1, VAR51[VAR4], 1, 1, 1);
            FUN3(&VAR52[VAR4], VAR53, 64, VAR54[VAR4], 1, 1, VAR55[VAR4], 2, 2, 1);
            FUN3(&VAR56[VAR4], VAR57, 73, VAR58[VAR4], 1, 1, VAR59[VAR4], 2, 2, 1);
        }
    }
    VAR2->VAR60 = -1;
    VAR2->VAR61 = 0;
    return 0;
}