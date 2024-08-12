static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    static const uint8_t VAR7[VAR8] = {64, 32, 32, 16, 16, 8, 8, 8, 8, 4};
    static const uint8_t VAR9[VAR8] = {6, 5, 5, 4, 4, 3, 3, 3, 3, 2};
    VAR10 *VAR11;
    PutBitContext VAR12;
    int32_t VAR13[VAR14 * VAR15];
    int32_t VAR16[VAR8][VAR17];
    int VAR18[VAR8];
    int16_t VAR19[VAR14][VAR8];
    int VAR20[VAR8];
    unsigned int VAR21[VAR14];
    int VAR22 = 0;
    int VAR23, VAR24;
    if (VAR5 < VAR25)
    {
        FUN2(VAR2, VAR26, "");
        return 0;
    }
    VAR11 = VAR2->VAR27;
    for (VAR23 = 0; VAR23 < (2 * VAR15 + VAR15 / 2); VAR23++)
    {
        VAR13[VAR23] = VAR11->VAR28[VAR15 + VAR15 / 2 + VAR23];
        VAR22 += (VAR13[VAR23] * VAR13[VAR23]) >> 4;
    }
    for (VAR23 = 2 * VAR15 + VAR15 / 2; VAR23 < VAR14 * VAR15; VAR23++)
    {
        VAR13[VAR23] = *((VAR29 *)VAR6 + VAR23 - 2 * VAR15 - VAR15 / 2) >> 2;
        VAR22 += (VAR13[VAR23] * VAR13[VAR23]) >> 4;
    }
    VAR22 = VAR30[FUN3(FUN4(VAR22 >> 5) >> 10, VAR30, 32)];
    FUN5(&VAR11->VAR31, VAR13, VAR14 * VAR15, VAR8, VAR8, 16, VAR16, VAR18, VAR32, 0, VAR33, 12, 0);
    for (VAR23 = 0; VAR23 < VAR8; VAR23++)
        VAR19[VAR14 - 1][VAR23] = -(VAR16[VAR8 - 1][VAR23] << (12 - VAR18[VAR8 - 1]));
    if (FUN6(VAR20, VAR19[VAR14 - 1], VAR2))
    {
        FUN7(VAR19[VAR14 - 1], VAR11->VAR34[1]);
        FUN6(VAR20, VAR19[VAR14 - 1], VAR2);
    }
    FUN8(&VAR12, VAR4, VAR5);
    for (VAR23 = 0; VAR23 < VAR8; VAR23++)
    {
        VAR24 = FUN3(VAR20[VAR23], VAR35[VAR23], VAR7[VAR23]);
        FUN9(&VAR12, VAR9[VAR23], VAR24);
        VAR20[VAR23] = VAR35[VAR23][VAR24];
    }
    VAR11->VAR36[0] = FUN10(VAR20);
    FUN11(VAR11->VAR34[0], VAR20);
    VAR21[0] = FUN12(VAR11, VAR19[0], 1, 1, VAR11->VAR37);
    VAR21[1] = FUN12(VAR11, VAR19[1], 2, VAR22 <= VAR11->VAR37, FUN4(VAR22 * VAR11->VAR37) >> 12);
    VAR21[2] = FUN12(VAR11, VAR19[2], 3, 0, VAR22);
    VAR21[3] = FUN13(VAR11->VAR36[0], VAR22);
    FUN7(VAR19[VAR14 - 1], VAR11->VAR34[0]);
    FUN9(&VAR12, 5, FUN3(VAR22, VAR30, 32));
    for (VAR23 = 0; VAR23 < VAR14; VAR23++)
        FUN14(VAR11, VAR11->VAR28 + VAR23 * VAR15, VAR19[VAR23], VAR21[VAR23], &VAR12);
    FUN15(&VAR12);
    VAR11->VAR37 = VAR22;
    VAR11->VAR36[1] = VAR11->VAR36[0];
    FUN16(unsigned int *, VAR11->VAR34[0], VAR11->VAR34[1]);
    for (VAR23 = 0; VAR23 < VAR14 * VAR15; VAR23++)
        VAR11->VAR28[VAR23] = *((VAR29 *)VAR6 + VAR23) >> 2;
    return VAR25;
}