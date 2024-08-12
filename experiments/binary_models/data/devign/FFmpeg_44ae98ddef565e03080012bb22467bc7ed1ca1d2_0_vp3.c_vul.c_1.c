static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR4->VAR2 = VAR2;
    VAR4->VAR7 = VAR2->VAR7;
    VAR4->VAR8 = VAR2->VAR8;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = 0;
    FUN2(&VAR4->VAR12, VAR2);
    VAR4->VAR13 = -1;
    VAR4->VAR14 = (VAR4->VAR7 + 31) / 32;
    VAR4->VAR15 = (VAR4->VAR8 + 31) / 32;
    VAR4->VAR16 = VAR4->VAR14 * VAR4->VAR15 * 3 / 2;
    VAR4->VAR17 = VAR4->VAR14 * VAR4->VAR15;
    VAR4->VAR18 = VAR4->VAR14 * VAR4->VAR15 * 5 / 4;
    VAR4->VAR19 = FUN3(VAR4->VAR16);
    VAR4->VAR20 = (VAR4->VAR7 + 15) / 16;
    VAR4->VAR21 = (VAR4->VAR8 + 15) / 16;
    VAR4->VAR22 = VAR4->VAR20 * VAR4->VAR21;
    VAR4->VAR23 = VAR4->VAR7 / VAR24;
    VAR4->VAR25 = VAR4->VAR8 / VAR24;
    VAR4->VAR26 = VAR4->VAR23 * VAR4->VAR25 * 3 / 2;
    VAR4->VAR27 = VAR4->VAR23 * VAR4->VAR25;
    VAR4->VAR28 = VAR4->VAR23 * VAR4->VAR25 * 5 / 4;
    FUN4("", VAR4->VAR7, VAR4->VAR8);
    FUN4("", VAR4->VAR14, VAR4->VAR15, VAR4->VAR16);
    FUN4("", VAR4->VAR20, VAR4->VAR21, VAR4->VAR22);
    FUN4("", VAR4->VAR26, VAR4->VAR23, VAR4->VAR25, VAR4->VAR27, VAR4->VAR28);
    VAR4->VAR29 = FUN3(VAR4->VAR26 * sizeof(VAR30));
    VAR4->VAR31 = FUN3(VAR4->VAR26 * sizeof(int));
    VAR4->VAR32 = 0;
    for (VAR6 = 0; VAR6 < 16; VAR6++)
    {
        FUN5(&VAR4->VAR33[VAR6], 5, 32, &VAR34[VAR6][0][1], 4, 2, &VAR34[VAR6][0][0], 4, 2);
        FUN5(&VAR4->VAR35[VAR6], 5, 32, &VAR36[VAR6][0][1], 4, 2, &VAR36[VAR6][0][0], 4, 2);
        FUN5(&VAR4->VAR37[VAR6], 5, 32, &VAR38[VAR6][0][1], 4, 2, &VAR38[VAR6][0][0], 4, 2);
        FUN5(&VAR4->VAR39[VAR6], 5, 32, &VAR40[VAR6][0][1], 4, 2, &VAR40[VAR6][0][0], 4, 2);
        FUN5(&VAR4->VAR41[VAR6], 5, 32, &VAR42[VAR6][0][1], 4, 2, &VAR42[VAR6][0][0], 4, 2);
    }
    for (VAR6 = 0; VAR6 < 64; VAR6++)
        VAR43[VAR44[VAR6]] = VAR6;
    VAR4->VAR45 = FUN3(VAR4->VAR16 * 16 * sizeof(int));
    VAR4->VAR46 = FUN3(VAR4->VAR16 * 4 * sizeof(int));
    VAR4->VAR47 = FUN3(VAR4->VAR22 * 6 * sizeof(int));
    VAR4->VAR48 = FUN3(VAR4->VAR22 + 1);
    FUN6(VAR4);
    if (VAR2->FUN7(VAR2, &VAR4->VAR49) < 0)
    {
        FUN8("");
        return -1;
    }
    return 0;
}