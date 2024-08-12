int FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    int VAR4;
    VAR5 *VAR6;
    FUN2(VAR2);
    if (!VAR3)
    {
        VAR3 = 1;
        for (VAR4 = 0; VAR4 < VAR7; VAR4++)
        {
            FUN3(&VAR8[VAR4]);
            FUN4(&VAR8[VAR4]);
        }
        for (VAR4 = 0; VAR4 < 2; VAR4++)
        {
            VAR6 = &VAR9[VAR4];
            FUN5(&VAR6->VAR10, VAR11, VAR6->VAR12 + 1, VAR6->VAR13, 1, 1, VAR6->VAR14, 2, 2);
        }
        FUN5(&VAR15[0], VAR16, 120, &VAR17[0][1], 8, 4, &VAR17[0][0], 8, 4);
        FUN5(&VAR18[0], VAR16, 120, &VAR19[0][1], 8, 4, &VAR19[0][0], 8, 4);
        FUN5(&VAR15[1], VAR16, 120, &VAR20[0][1], 8, 4, &VAR20[0][0], 8, 4);
        FUN5(&VAR18[1], VAR16, 120, &VAR21[0][1], 8, 4, &VAR21[0][0], 8, 4);
        FUN5(&VAR22, VAR16, 512, &VAR23[0][1], 8, 4, &VAR23[0][0], 8, 4);
        FUN5(&VAR24, VAR16, 512, &VAR25[0][1], 8, 4, &VAR25[0][0], 8, 4);
        FUN5(&VAR26, VAR27, 16, &VAR28[0][1], 2, 1, &VAR28[0][0], 2, 1);
        FUN5(&VAR29, VAR30, 4, &VAR31[0][1], 2, 1, &VAR31[0][0], 2, 1);
        FUN5(&VAR32, VAR33, 8, &VAR34[0][1], 2, 1, &VAR34[0][0], 2, 1);
        FUN5(&VAR35, VAR36, 33, &VAR37[0][1], 2, 1, &VAR37[0][0], 2, 1);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN5(&VAR38[VAR4], VAR39, 128, &VAR40[VAR4][0][1], 8, 4, &VAR40[VAR4][0][0], 8, 4);
        }
        FUN5(&VAR41, VAR42, 64, &VAR43[0][1], 4, 2, &VAR43[0][0], 4, 2);
        FUN5(&VAR44, VAR45, 8, VAR46, 1, 1, VAR47, 1, 1);
        FUN5(&VAR48, VAR49, 25, VAR50, 1, 1, VAR51, 1, 1);
        FUN5(&VAR52, VAR53, 4, &VAR54[0][1], 2, 1, &VAR54[0][0], 2, 1);
    }
    switch (VAR2->VAR55)
    {
    case 1:
    case 2:
        VAR2->VAR56 = VAR57;
        break;
    case 3:
    case 4:
        VAR2->VAR56 = VAR58;
        break;
    case 5:
        VAR2->VAR56 = VAR59;
        break;
    }
    VAR2->VAR60 = VAR2->VAR61;
    return 0;
}