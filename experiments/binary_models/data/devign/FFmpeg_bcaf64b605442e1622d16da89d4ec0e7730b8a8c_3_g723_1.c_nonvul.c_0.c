static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int16_t VAR11[VAR12 * VAR13];
    int16_t VAR14[VAR12 * VAR13];
    int16_t VAR15[VAR12];
    int16_t VAR16[VAR12 * VAR13 << 1];
    int16_t VAR17[VAR18 + VAR19];
    int VAR20, VAR21;
    VAR22 *VAR23 = (const VAR22 *)VAR6->VAR24[0];
    HFParam VAR25[4];
    int VAR26, VAR27;
    FUN2(VAR23, &VAR9->VAR28, &VAR9->VAR29);
    memcpy(VAR17, VAR9->VAR30, VAR31 * sizeof(VAR22));
    memcpy(VAR17 + VAR31, VAR23, VAR18 * sizeof(VAR22));
    FUN3(VAR17, VAR11);
    FUN4(&VAR11[VAR12 * 3], VAR9->VAR32, VAR15);
    FUN5(VAR9->VAR33, VAR15, VAR9->VAR32);
    memcpy(VAR17 + VAR12, VAR9->VAR30 + VAR34, sizeof(VAR22) * VAR34);
    memcpy(VAR17 + VAR12 + VAR34, VAR23, sizeof(VAR22) * (VAR31 + VAR34));
    memcpy(VAR9->VAR30, VAR23 + VAR31, sizeof(VAR22) * VAR31);
    memcpy(VAR23, VAR17 + VAR12, sizeof(VAR22) * VAR18);
    FUN6(VAR9, VAR16, VAR11, VAR17);
    memcpy(VAR23, VAR17 + VAR12, sizeof(VAR22) * VAR18);
    memcpy(VAR17, VAR9->VAR35, sizeof(VAR22) * VAR19);
    memcpy(VAR17 + VAR19, VAR23, sizeof(VAR22) * VAR18);
    FUN7(VAR17, VAR17, VAR18 + VAR19);
    VAR9->VAR36[0] = FUN8(VAR17, VAR19);
    VAR9->VAR36[1] = FUN8(VAR17, VAR19 + VAR31);
    for (VAR26 = VAR19, VAR27 = 0; VAR27 < VAR13; VAR26 += VAR34, VAR27++)
        FUN9(VAR17 + VAR26, VAR9->VAR36[VAR27 >> 1], VAR25 + VAR27);
    memcpy(VAR17, VAR9->VAR35, sizeof(VAR22) * VAR19);
    memcpy(VAR17 + VAR19, VAR23, sizeof(VAR22) * VAR18);
    memcpy(VAR9->VAR35, VAR17 + VAR18, sizeof(VAR22) * VAR19);
    for (VAR26 = 0, VAR27 = 0; VAR27 < VAR13; VAR26 += VAR34, VAR27++)
        FUN10(VAR25 + VAR27, VAR17 + VAR19 + VAR26, VAR23 + VAR26);
    FUN11(VAR15, VAR9->VAR32, VAR9->VAR33, 0);
    FUN12(VAR14, VAR15, VAR9->VAR32);
    memcpy(VAR9->VAR32, VAR15, sizeof(VAR22) * VAR12);
    VAR20 = 0;
    for (VAR26 = 0; VAR26 < VAR13; VAR26++)
    {
        int16_t VAR37[VAR34];
        int16_t VAR38[VAR34 + VAR39 - 1];
        int16_t VAR40[VAR34];
        int16_t VAR41[VAR12], VAR42[VAR12], VAR43[VAR12];
        memset(VAR41, 0, sizeof(VAR22) * VAR12);
        memset(VAR17, 0, sizeof(VAR22) * VAR19);
        memset(VAR40, 0, sizeof(VAR22) * VAR34);
        VAR40[0] = 1 << 13;
        FUN13(VAR14 + VAR20, VAR16 + (VAR20 << 1), VAR41, VAR41, VAR40, VAR17 + VAR19, 1);
        FUN10(VAR25 + VAR26, VAR17 + VAR19, VAR37);
        VAR40[0] = 0;
        memcpy(VAR42, VAR9->VAR44, sizeof(VAR22) * VAR12);
        memcpy(VAR43, VAR9->VAR45, sizeof(VAR22) * VAR12);
        FUN13(VAR14 + VAR20, VAR16 + (VAR20 << 1), VAR42, VAR43, VAR40, VAR17 + VAR19, 0);
        memcpy(VAR17, VAR9->VAR46, sizeof(VAR22) * VAR19);
        FUN14(VAR25 + VAR26, VAR17 + VAR19, VAR23);
        FUN15(VAR9, VAR38, VAR37, VAR23, VAR26);
        FUN16(VAR38, VAR9->VAR47, VAR9->VAR36[VAR26 >> 1], &VAR9->VAR48[VAR26], VAR9->VAR49);
        FUN17(VAR38, VAR37, VAR23);
        FUN18(VAR9, VAR37, VAR23, VAR26);
        FUN16(VAR37, VAR9->VAR47, VAR9->VAR36[VAR26 >> 1], &VAR9->VAR48[VAR26], VAR50);
        memmove(VAR9->VAR47, VAR9->VAR47 + VAR34, sizeof(VAR22) * (VAR19 - VAR34));
        for (VAR27 = 0; VAR27 < VAR34; VAR27++)
            VAR23[VAR27] = FUN19((VAR23[VAR27] << 1) + VAR37[VAR27]);
        memcpy(VAR9->VAR47 + VAR19 - VAR34, VAR23, sizeof(VAR22) * VAR34);
        FUN13(VAR14 + VAR20, VAR16 + (VAR20 << 1), VAR9->VAR44, VAR9->VAR45, VAR23, VAR17 + VAR19, 0);
        memmove(VAR9->VAR46, VAR9->VAR46 + VAR34, sizeof(VAR22) * (VAR19 - VAR34));
        memcpy(VAR9->VAR46 + VAR19 - VAR34, VAR17 + VAR19, sizeof(VAR22) * VAR34);
        VAR23 += VAR34;
        VAR20 += VAR12;
    }
    if ((VAR21 = FUN20(VAR2, VAR4, 24)) < 0)
        return VAR21;
    *VAR7 = 1;
    VAR4->VAR51 = FUN21(VAR9, VAR4->VAR24, VAR4->VAR51);
    return 0;
}