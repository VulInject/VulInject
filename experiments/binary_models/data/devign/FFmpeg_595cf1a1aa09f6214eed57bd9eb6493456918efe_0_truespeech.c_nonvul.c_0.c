static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    short *VAR16 = VAR3;
    int VAR17 = 0;
    int16_t VAR18[240];
    int VAR19;
    if (VAR9 < 32)
    {
        FUN2(VAR2, VAR20, "", VAR9);
        return -1;
    }
    VAR19 = FUN3(VAR9 / 32, *VAR4 / 480);
    for (VAR15 = 0; VAR15 < VAR19; VAR15++)
    {
        FUN4(VAR12, VAR8 + VAR17);
        VAR17 += 32;
        FUN5(VAR12);
        FUN6(VAR12);
        memset(VAR18, 0, 240 * 2);
        for (VAR14 = 0; VAR14 < 4; VAR14++)
        {
            FUN7(VAR12, VAR14);
            FUN8(VAR12, VAR18 + VAR14 * 60, VAR14);
            FUN9(VAR12, VAR18 + VAR14 * 60, VAR14);
            FUN10(VAR12, VAR18 + VAR14 * 60, VAR14);
        }
        FUN11(VAR12);
        for (VAR14 = 0; VAR14 < 240; VAR14++)
            *VAR16++ = VAR18[VAR14];
    }
    *VAR4 = VAR17 * 15;
    return VAR17;
}