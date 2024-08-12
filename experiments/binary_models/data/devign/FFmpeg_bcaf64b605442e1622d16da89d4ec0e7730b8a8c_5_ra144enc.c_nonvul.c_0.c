static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    static const uint8_t VAR8[VAR9] = {64, 32, 32, 16, 16, 8, 8, 8, 8, 4};
    static const uint8_t VAR10[VAR9] = {6, 5, 5, 4, 4, 3, 3, 3, 3, 2};
    VAR11 *VAR12 = VAR2->VAR13;
    PutBitContext VAR14;
    int32_t VAR15[VAR16 * VAR17];
    int32_t VAR18[VAR9][VAR19];
    int VAR20[VAR9];
    int16_t VAR21[VAR16][VAR9];
    int VAR22[VAR9];
    unsigned int VAR23[VAR16];
    const VAR24 *VAR25 = VAR6 ? (const VAR24 *)VAR6->VAR26[0] : NULL;
    int VAR27 = 0;
    int VAR28, VAR29, VAR30;
    if (VAR12->VAR31)
        return 0;
    if ((VAR30 = FUN2(VAR2, VAR4, VAR32)) < 0)
        return VAR30;
    for (VAR28 = 0; VAR28 < (2 * VAR17 + VAR17 / 2); VAR28++)
    {
        VAR15[VAR28] = VAR12->VAR33[VAR17 + VAR17 / 2 + VAR28];
        VAR27 += (VAR15[VAR28] * VAR15[VAR28]) >> 4;
    }
    if (VAR6)
    {
        int VAR34;
        for (VAR34 = 0; VAR34 < VAR6->VAR35 && VAR28 < VAR16 * VAR17; VAR28++, VAR34++)
        {
            VAR15[VAR28] = VAR25[VAR34] >> 2;
            VAR27 += (VAR15[VAR28] * VAR15[VAR28]) >> 4;
        }
    }
    if (VAR28 < VAR16 * VAR17)
        memset(&VAR15[VAR28], 0, (VAR16 * VAR17 - VAR28) * sizeof(*VAR15));
    VAR27 = VAR36[FUN3(FUN4(VAR27 >> 5) >> 10, VAR36, 32)];
    FUN5(&VAR12->VAR37, VAR15, VAR16 * VAR17, VAR9, VAR9, 16, VAR18, VAR20, VAR38, 0, VAR39, 12, 0);
    for (VAR28 = 0; VAR28 < VAR9; VAR28++)
        VAR21[VAR16 - 1][VAR28] = -(VAR18[VAR9 - 1][VAR28] << (12 - VAR20[VAR9 - 1]));
    if (FUN6(VAR22, VAR21[VAR16 - 1], VAR2))
    {
        FUN7(VAR21[VAR16 - 1], VAR12->VAR40[1]);
        if (FUN6(VAR22, VAR21[VAR16 - 1], VAR2))
        {
            memset(VAR22, 0, sizeof(VAR22));
        }
    }
    FUN8(&VAR14, VAR4->VAR26, VAR4->VAR41);
    for (VAR28 = 0; VAR28 < VAR9; VAR28++)
    {
        VAR29 = FUN3(VAR22[VAR28], VAR42[VAR28], VAR8[VAR28]);
        FUN9(&VAR14, VAR10[VAR28], VAR29);
        VAR22[VAR28] = VAR42[VAR28][VAR29];
    }
    VAR12->VAR43[0] = FUN10(VAR22);
    FUN11(VAR12->VAR40[0], VAR22);
    VAR23[0] = FUN12(VAR12, VAR21[0], 1, 1, VAR12->VAR44);
    VAR23[1] = FUN12(VAR12, VAR21[1], 2, VAR27 <= VAR12->VAR44, FUN4(VAR27 * VAR12->VAR44) >> 12);
    VAR23[2] = FUN12(VAR12, VAR21[2], 3, 0, VAR27);
    VAR23[3] = FUN13(VAR12->VAR43[0], VAR27);
    FUN7(VAR21[VAR16 - 1], VAR12->VAR40[0]);
    FUN9(&VAR14, 5, FUN3(VAR27, VAR36, 32));
    for (VAR28 = 0; VAR28 < VAR16; VAR28++)
        FUN14(VAR12, VAR12->VAR33 + VAR28 * VAR17, VAR21[VAR28], VAR23[VAR28], &VAR14);
    FUN15(&VAR14);
    VAR12->VAR44 = VAR27;
    VAR12->VAR43[1] = VAR12->VAR43[0];
    FUN16(unsigned int *, VAR12->VAR40[0], VAR12->VAR40[1]);
    VAR28 = 0;
    if (VAR6)
    {
        for (; VAR28 < VAR6->VAR35; VAR28++)
            VAR12->VAR33[VAR28] = VAR25[VAR28] >> 2;
        if ((VAR30 = FUN17(&VAR12->VAR45, VAR6)) < 0)
            return VAR30;
    }
    else
        VAR12->VAR31 = 1;
    memset(&VAR12->VAR33[VAR28], 0, (VAR16 * VAR17 - VAR28) * sizeof(*VAR12->VAR33));
    FUN18(&VAR12->VAR45, VAR2->VAR46, &VAR4->VAR47, &VAR4->VAR48);
    VAR4->VAR41 = VAR32;
    *VAR7 = 1;
    return 0;
}