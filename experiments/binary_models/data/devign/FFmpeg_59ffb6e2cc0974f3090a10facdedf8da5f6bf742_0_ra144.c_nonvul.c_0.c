static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    static const uint8_t VAR8[10] = {6, 5, 5, 4, 4, 3, 3, 3, 3, 2};
    unsigned int VAR9, VAR10, VAR11;
    int VAR12;
    signed short *VAR13;
    VAR14 *VAR15 = VAR3;
    unsigned int VAR16;
    VAR17 *VAR18 = VAR2->VAR19;
    GetBitContext VAR20;
    if (VAR7 == 0)
        return 0;
    FUN2(&VAR20, VAR6, 20 * 8);
    for (VAR12 = 0; VAR12 < 10; VAR12++)
        VAR18->VAR21[VAR12] = VAR22[VAR12][FUN3(&VAR20, VAR8[VAR12]) << 1];
    FUN4(VAR18->VAR21, VAR18->VAR23);
    VAR16 = VAR24[FUN3(&VAR20, 5) << 1];
    VAR9 = FUN5(VAR16 * VAR18->VAR25) >> 12;
    FUN6(VAR18, VAR18->VAR26, VAR18->VAR27, 3, VAR18->VAR25, VAR18->VAR23, 0);
    if (VAR18->VAR25 < VAR16)
    {
        FUN6(VAR18, VAR18->VAR21, VAR18->VAR23, 3, VAR9, VAR18->VAR27, 1);
    }
    else
    {
        FUN6(VAR18, VAR18->VAR26, VAR18->VAR27, 3, VAR9, VAR18->VAR23, 1);
    }
    FUN6(VAR18, VAR18->VAR21, VAR18->VAR23, 3, VAR16, VAR18->VAR27, 2);
    FUN7(VAR18, VAR18->VAR21, VAR18->VAR23, 3, VAR16);
    for (VAR10 = 0, VAR11 = 0; VAR11 < 4; VAR11++)
    {
        unsigned int VAR28 = VAR18->VAR29[VAR11 * 2];
        unsigned short *VAR30 = VAR18->VAR31 + VAR10;
        signed short VAR32[40];
        FUN8(VAR18, VAR30, VAR28, VAR32, &VAR20);
        VAR13 = VAR32;
        while (VAR13 < VAR32 + VAR33)
            *VAR15++ = FUN9(*(VAR13++) << 2);
        VAR10 += 30;
    }
    VAR18->VAR25 = VAR16;
    FUN10(unsigned int *, VAR18->VAR26, VAR18->VAR21);
    FUN10(unsigned int *, VAR18->VAR27, VAR18->VAR23);
    *VAR4 = 2 * 160;
    return 20;
}