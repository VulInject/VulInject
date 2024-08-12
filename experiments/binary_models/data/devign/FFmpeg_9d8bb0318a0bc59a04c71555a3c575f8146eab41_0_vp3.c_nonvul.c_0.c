static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10 = 0;
    VAR11 *VAR12[64];
    VAR11 *VAR13[64];
    VAR6 = FUN2(VAR4, 4);
    VAR7 = FUN2(VAR4, 4);
    VAR10 = FUN3(VAR2, VAR4, &VAR2->VAR14[VAR6], 0, 1, VAR10);
    FUN4(VAR2, 0, VAR2->VAR15, VAR2->VAR16);
    VAR10 = FUN3(VAR2, VAR4, &VAR2->VAR14[VAR7], 0, 0, VAR10);
    if (!(VAR2->VAR17->VAR18 & VAR19))
    {
        FUN4(VAR2, VAR2->VAR20[1], VAR2->VAR15 / 2, VAR2->VAR16 / 2);
        FUN4(VAR2, VAR2->VAR20[2], VAR2->VAR15 / 2, VAR2->VAR16 / 2);
    }
    VAR8 = FUN2(VAR4, 4);
    VAR9 = FUN2(VAR4, 4);
    for (VAR5 = 1; VAR5 <= 5; VAR5++)
    {
        VAR12[VAR5] = &VAR2->VAR21[VAR8];
        VAR13[VAR5] = &VAR2->VAR21[VAR9];
    }
    for (VAR5 = 6; VAR5 <= 14; VAR5++)
    {
        VAR12[VAR5] = &VAR2->VAR22[VAR8];
        VAR13[VAR5] = &VAR2->VAR22[VAR9];
    }
    for (VAR5 = 15; VAR5 <= 27; VAR5++)
    {
        VAR12[VAR5] = &VAR2->VAR23[VAR8];
        VAR13[VAR5] = &VAR2->VAR23[VAR9];
    }
    for (VAR5 = 28; VAR5 <= 63; VAR5++)
    {
        VAR12[VAR5] = &VAR2->VAR24[VAR8];
        VAR13[VAR5] = &VAR2->VAR24[VAR9];
    }
    for (VAR5 = 1; VAR5 <= 63; VAR5++)
    {
        if (VAR2->VAR25 != -1)
            VAR10 = FUN3(VAR2, VAR4, VAR12[VAR5], VAR5, 1, VAR10);
        if (VAR2->VAR26 != -1)
            VAR10 = FUN3(VAR2, VAR4, VAR13[VAR5], VAR5, 0, VAR10);
    }
    return 0;
}