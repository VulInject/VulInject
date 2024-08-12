static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    static const uint8_t VAR8[10] = {6, 5, 5, 4, 4, 3, 3, 3, 3, 2};
    unsigned int VAR9[4];
    uint16_t VAR10[4][30];
    unsigned int VAR11[10];
    int VAR12, VAR13;
    VAR14 *VAR15 = VAR3;
    unsigned int VAR16;
    VAR17 *VAR18 = VAR2->VAR19;
    GetBitContext VAR20;
    if (VAR7 < 20)
    {
        FUN2(VAR2, VAR21, "", VAR7);
        *VAR4 = 0;
        return VAR7;
    }
    FUN3(&VAR20, VAR6, 20 * 8);
    for (VAR12 = 0; VAR12 < 10; VAR12++)
        VAR11[VAR12] = VAR22[VAR12][FUN4(&VAR20, VAR8[VAR12])];
    FUN5(VAR18->VAR23[0], VAR11);
    VAR18->VAR24[0] = FUN6(VAR11);
    VAR16 = VAR25[FUN4(&VAR20, 5)];
    VAR9[0] = FUN7(VAR18, VAR10[0], 0, 1, VAR18->VAR26);
    VAR9[1] = FUN7(VAR18, VAR10[1], 1, VAR16 <= VAR18->VAR26, FUN8(VAR16 * VAR18->VAR26) >> 12);
    VAR9[2] = FUN7(VAR18, VAR10[2], 2, 0, VAR16);
    VAR9[3] = FUN9(VAR18->VAR24[0], VAR16);
    FUN10(VAR10[3], VAR18->VAR23[0]);
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        FUN11(VAR18, VAR10[VAR12], VAR9[VAR12], &VAR20);
        for (VAR13 = 0; VAR13 < VAR27; VAR13++)
            *VAR15++ = FUN12(VAR18->VAR28[VAR13 + 10] << 2);
    }
    VAR18->VAR26 = VAR16;
    VAR18->VAR24[1] = VAR18->VAR24[0];
    FUN13(unsigned int *, VAR18->VAR23[0], VAR18->VAR23[1]);
    *VAR4 = 2 * 160;
    return 20;
}