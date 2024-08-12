static int FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    int VAR4 = 0;
    VAR2->VAR5 = VAR2->VAR6 = NULL;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2(&VAR7, VAR8, 23, VAR9, 1, 1, VAR10, 1, 1, VAR11);
        FUN2(&VAR12, VAR13, 4, VAR14, 1, 1, VAR15, 1, 1, VAR11);
        FUN2(&VAR16, VAR17, 64, VAR18, 1, 1, VAR19, 2, 2, VAR11);
        FUN2(&VAR20, VAR21, 7, VAR22, 1, 1, VAR23, 1, 1, VAR11);
        for (VAR4 = 0; VAR4 < 3; VAR4++)
        {
            FUN2(&VAR24[VAR4], VAR25, 16, VAR26[VAR4], 1, 1, VAR27[VAR4], 2, 2, VAR11);
            FUN2(&VAR28[VAR4], VAR29, 8, VAR30[VAR4], 1, 1, VAR31[VAR4], 1, 1, VAR11);
            FUN2(&VAR32[VAR4], VAR33, 15, VAR34[VAR4], 1, 1, VAR35[VAR4], 1, 1, VAR11);
        }
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN2(&VAR36[VAR4], VAR37, 16, VAR38[VAR4], 1, 1, VAR39[VAR4], 1, 1, VAR11);
            FUN2(&VAR40[VAR4], VAR41, 64, VAR42[VAR4], 1, 1, VAR43[VAR4], 2, 2, VAR11);
            FUN2(&VAR44[VAR4], VAR45, 73, VAR46[VAR4], 1, 1, VAR47[VAR4], 2, 2, VAR11);
        }
        for (VAR4 = 0; VAR4 < 8; VAR4++)
            FUN2(&VAR48[VAR4], VAR49, VAR50[VAR4], &VAR51[VAR4][0][1], 8, 4, &VAR51[VAR4][0][0], 8, 4, VAR11);
        FUN2(&VAR52, VAR53, 64, &VAR54[0][1], 4, 2, &VAR54[0][0], 4, 2, VAR11);
    }
    VAR2->VAR55 = -1;
    VAR2->VAR56 = 0;
    return 0;
}