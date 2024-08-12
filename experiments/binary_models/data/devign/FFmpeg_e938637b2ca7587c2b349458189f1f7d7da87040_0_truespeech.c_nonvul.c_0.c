static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    short *VAR13 = VAR3;
    int VAR14 = 0;
    int16_t VAR15[240];
    int VAR16;
    if (!VAR7)
        return 0;
    VAR16 = FUN2(VAR7 / 32, *VAR4 / 480);
    for (VAR12 = 0; VAR12 < VAR16; VAR12++)
    {
        FUN3(VAR9, VAR6 + VAR14);
        VAR14 += 32;
        FUN4(VAR9);
        FUN5(VAR9);
        memset(VAR15, 0, 240 * 2);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
        {
            FUN6(VAR9, VAR11);
            FUN7(VAR9, VAR15 + VAR11 * 60, VAR11);
            FUN8(VAR9, VAR15 + VAR11 * 60, VAR11);
            FUN9(VAR9, VAR15 + VAR11 * 60, VAR11);
        }
        FUN10(VAR9);
        for (VAR11 = 0; VAR11 < 240; VAR11++)
            *VAR13++ = VAR15[VAR11];
    }
    *VAR4 = VAR14 * 15;
    return VAR14;
}