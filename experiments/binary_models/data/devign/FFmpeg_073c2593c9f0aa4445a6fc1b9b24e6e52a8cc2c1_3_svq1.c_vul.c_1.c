static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    FUN2(VAR4);
    VAR4->VAR2 = VAR2;
    VAR4->VAR7 = (VAR2->VAR7 + 3) & ~3;
    VAR4->VAR8 = (VAR2->VAR8 + 3) & ~3;
    VAR4->VAR9 = VAR2->VAR10->VAR11;
    VAR2->VAR12 = VAR13;
    VAR2->VAR14 = 1;
    VAR4->VAR15 = VAR2->VAR15;
    if (FUN3(VAR4) < 0)
        return -1;
    FUN4(&VAR16, 2, 4, &VAR17[0][1], 2, 1, &VAR17[0][0], 2, 1);
    FUN4(&VAR18, 7, 33, &VAR19[0][1], 2, 1, &VAR19[0][0], 2, 1);
    for (VAR6 = 0; VAR6 < 6; VAR6++)
    {
        FUN4(&VAR20[VAR6], 3, 8, &VAR21[VAR6][0][1], 2, 1, &VAR21[VAR6][0][0], 2, 1);
        FUN4(&VAR22[VAR6], 3, 8, &VAR23[VAR6][0][1], 2, 1, &VAR23[VAR6][0][0], 2, 1);
    }
    FUN4(&VAR24, 8, 256, &VAR25[0][1], 4, 2, &VAR25[0][0], 4, 2);
    FUN4(&VAR26, 9, 512, &VAR27[0][1], 4, 2, &VAR27[0][0], 4, 2);
    return 0;
}