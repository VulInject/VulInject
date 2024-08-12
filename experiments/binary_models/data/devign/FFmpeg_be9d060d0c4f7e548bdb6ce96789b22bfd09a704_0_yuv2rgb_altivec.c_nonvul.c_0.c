FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, int VAR6, VAR3 *VAR7, VAR3 **VAR8, int VAR9, VAR10 *VAR11, int VAR12, int VAR13)
{
    int VAR14, VAR15;
    short VAR16 FUN2((FUN3(16)));
    VAR3 *VAR17;
    short *VAR18;
    vector signed short VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29;
    vector signed short VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
    vector unsigned char VAR36, VAR37, VAR38, VAR39[3];
    vector unsigned char *VAR40, *VAR41;
    vector signed short VAR42 = FUN4((vector signed short)FUN5(1 << 3), 0);
    vector unsigned short VAR43 = FUN4((vector unsigned short)FUN5(4), 0);
    unsigned long VAR44[16] FUN2((FUN3(16)));
    vector signed short *VAR45, *VAR46;
    vector signed short *VAR47, *VAR48;
    VAR45 = malloc(sizeof(vector signed short) * VAR6 * VAR2->VAR49);
    VAR46 = malloc(sizeof(vector signed short) * VAR9 * VAR2->VAR49);
    for (VAR14 = 0; VAR14 < VAR6 * VAR2->VAR49; VAR14++)
    {
        VAR16 = VAR2->VAR50[VAR14];
        VAR17 = &VAR45[VAR14];
        for (VAR15 = 0; VAR15 < 8; VAR15++)
            VAR17[VAR15] = VAR16;
    }
    for (VAR14 = 0; VAR14 < VAR9 * VAR2->VAR49; VAR14++)
    {
        VAR16 = VAR2->VAR51[VAR14];
        VAR17 = &VAR46[VAR14];
        for (VAR15 = 0; VAR15 < 8; VAR15++)
            VAR17[VAR15] = VAR16;
    }
    VAR47 = VAR45 + VAR13 * VAR6;
    VAR48 = VAR46 + VAR13 * VAR9;
    VAR40 = (vector unsigned char *)VAR11;
    for (VAR14 = 0; VAR14 < VAR12; VAR14 += 16)
    {
        VAR22 = VAR42;
        VAR25 = VAR42;
        for (VAR15 = 0; VAR15 < VAR6; VAR15++)
        {
            VAR20 = FUN6(0, &VAR5[VAR15][VAR14]);
            VAR21 = FUN6(16, &VAR5[VAR15][VAR14]);
            VAR22 = FUN7(VAR20, VAR47[VAR15], VAR22);
            VAR25 = FUN7(VAR21, VAR47[VAR15], VAR25);
        }
        VAR28 = VAR42;
        VAR29 = VAR42;
        for (VAR15 = 0; VAR15 < VAR9; VAR15++)
        {
            VAR19 = FUN6(0, &VAR8[VAR15][VAR14 / 2]);
            VAR28 = FUN7(VAR19, VAR48[VAR15], VAR28);
            VAR19 = FUN6(0, &VAR8[VAR15][VAR14 / 2 + 2048]);
            VAR29 = FUN7(VAR19, VAR48[VAR15], VAR29);
        }
        VAR22 = FUN8(VAR22, VAR43);
        VAR25 = FUN8(VAR25, VAR43);
        VAR28 = FUN8(VAR28, VAR43);
        VAR29 = FUN8(VAR29, VAR43);
        VAR22 = FUN9(VAR22);
        VAR25 = FUN9(VAR25);
        VAR28 = FUN9(VAR28);
        VAR29 = FUN9(VAR29);
        VAR23 = FUN10(VAR28, VAR28);
        VAR24 = FUN10(VAR29, VAR29);
        VAR26 = FUN11(VAR28, VAR28);
        VAR27 = FUN11(VAR29, VAR29);
        FUN12(VAR2, VAR22, VAR23, VAR24, &VAR30, &VAR31, &VAR32);
        FUN12(VAR2, VAR25, VAR26, VAR27, &VAR33, &VAR34, &VAR35);
        VAR36 = FUN13(VAR30, VAR33);
        VAR37 = FUN13(VAR31, VAR34);
        VAR38 = FUN13(VAR32, VAR35);
        FUN14(VAR36, VAR37, VAR38, VAR40);
    }
    if (VAR14 < VAR12)
    {
        VAR14 -= 16;
        VAR22 = VAR42;
        VAR25 = VAR42;
        for (VAR15 = 0; VAR15 < VAR6; VAR15++)
        {
            VAR20 = FUN6(0, &VAR5[VAR15][VAR14]);
            VAR21 = FUN6(16, &VAR5[VAR15][VAR14]);
            VAR22 = FUN7(VAR20, VAR47[VAR15], VAR22);
            VAR25 = FUN7(VAR21, VAR47[VAR15], VAR25);
        }
        VAR28 = VAR42;
        VAR29 = VAR42;
        for (VAR15 = 0; VAR15 < VAR9; VAR15++)
        {
            VAR19 = FUN6(0, &VAR8[VAR15][VAR14 / 2]);
            VAR28 = FUN7(VAR19, VAR48[VAR15], VAR28);
            VAR19 = FUN6(0, &VAR8[VAR15][VAR14 / 2 + 2048]);
            VAR29 = FUN7(VAR19, VAR48[VAR15], VAR29);
        }
        VAR22 = FUN8(VAR22, VAR43);
        VAR25 = FUN8(VAR25, VAR43);
        VAR28 = FUN8(VAR28, VAR43);
        VAR29 = FUN8(VAR29, VAR43);
        VAR22 = FUN9(VAR22);
        VAR25 = FUN9(VAR25);
        VAR28 = FUN9(VAR28);
        VAR29 = FUN9(VAR29);
        VAR23 = FUN10(VAR28, VAR28);
        VAR24 = FUN10(VAR29, VAR29);
        VAR26 = FUN11(VAR28, VAR28);
        VAR27 = FUN11(VAR29, VAR29);
        FUN12(VAR2, VAR22, VAR23, VAR24, &VAR30, &VAR31, &VAR32);
        FUN12(VAR2, VAR25, VAR26, VAR27, &VAR33, &VAR34, &VAR35);
        VAR36 = FUN13(VAR30, VAR33);
        VAR37 = FUN13(VAR31, VAR34);
        VAR38 = FUN13(VAR32, VAR35);
        VAR41 = (vector unsigned char *)VAR44;
        FUN14(VAR36, VAR37, VAR38, VAR41);
        memcpy(&((VAR52 *)VAR11)[VAR14], VAR44, (VAR12 - VAR14) / 4);
    }
    if (VAR45)
        free(VAR45);
    if (VAR46)
        free(VAR46);
}