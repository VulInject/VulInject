static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5);
static int FUN2(VAR1 *VAR2, VAR6 *VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    int VAR13 = 0;
    VAR14 *VAR15[64];
    VAR14 *VAR16[64];
    VAR9 = FUN3(VAR7, 4);
    VAR10 = FUN3(VAR7, 4);
    VAR13 = FUN4(VAR2, VAR7, &VAR2->VAR17[VAR9], 0, 1, VAR13);
    FUN1(VAR2, 0, VAR2->VAR4, VAR2->VAR5);
    VAR13 = FUN4(VAR2, VAR7, &VAR2->VAR17[VAR10], 0, 0, VAR13);
    if (!(VAR2->VAR18->VAR19 & VAR20))
    {
        FUN1(VAR2, VAR2->VAR21[1], VAR2->VAR4 / 2, VAR2->VAR5 / 2);
        FUN1(VAR2, VAR2->VAR21[2], VAR2->VAR4 / 2, VAR2->VAR5 / 2);
    }
    VAR11 = FUN3(VAR7, 4);
    VAR12 = FUN3(VAR7, 4);
    for (VAR8 = 1; VAR8 <= 5; VAR8++)
    {
        VAR15[VAR8] = &VAR2->VAR22[VAR11];
        VAR16[VAR8] = &VAR2->VAR22[VAR12];
    }
    for (VAR8 = 6; VAR8 <= 14; VAR8++)
    {
        VAR15[VAR8] = &VAR2->VAR23[VAR11];
        VAR16[VAR8] = &VAR2->VAR23[VAR12];
    }
    for (VAR8 = 15; VAR8 <= 27; VAR8++)
    {
        VAR15[VAR8] = &VAR2->VAR24[VAR11];
        VAR16[VAR8] = &VAR2->VAR24[VAR12];
    }
    for (VAR8 = 28; VAR8 <= 63; VAR8++)
    {
        VAR15[VAR8] = &VAR2->VAR25[VAR11];
        VAR16[VAR8] = &VAR2->VAR25[VAR12];
    }
    for (VAR8 = 1; VAR8 <= 63; VAR8++)
    {
        if (VAR2->VAR26 != -1)
            VAR13 = FUN4(VAR2, VAR7, VAR15[VAR8], VAR8, 1, VAR13);
        if (VAR2->VAR27 != -1)
            VAR13 = FUN4(VAR2, VAR7, VAR16[VAR8], VAR8, 0, VAR13);
    }
    return 0;
}