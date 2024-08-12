static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8 = 0;
    int VAR9;
    static const int VAR10[3] = {0x100000, 0x010000, 0x110000};
    static const int VAR11[4] = {0, 2, 8, 10};
    const int *VAR12 = VAR11;
    int VAR13, VAR14, VAR15;
    VAR7 = FUN2(VAR2, VAR4->VAR16[VAR5].VAR5, 9, 2);
    VAR6 = VAR7 & 0xF;
    VAR7 >>= 4;
    VAR9 = VAR17[VAR6];
    for (VAR15 = 8; VAR15; VAR15 >>= 1, VAR12++)
    {
        if (VAR6 & VAR15)
            VAR8 |= FUN2(VAR2, VAR4->VAR8[VAR5][VAR9].VAR5, VAR4->VAR8[VAR5][VAR9].VAR18, 1) << VAR12[0];
    }
    for (VAR13 = 0; VAR13 < 4; VAR13++)
    {
        VAR14 = (VAR19[VAR7] >> (6 - 2 * VAR13)) & 3;
        if (VAR14 == 1)
            VAR8 |= VAR10[FUN3(VAR2)] << VAR13;
        if (VAR14 == 2)
            VAR8 |= VAR10[2] << VAR13;
    }
    return VAR8;
}