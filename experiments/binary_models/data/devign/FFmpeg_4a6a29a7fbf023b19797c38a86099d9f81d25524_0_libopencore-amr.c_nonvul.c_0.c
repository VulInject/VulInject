static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    int VAR15, VAR16;
    static const uint8_t VAR17[16] = {18, 24, 33, 37, 41, 47, 51, 59, 61, 6, 6, 0, 0, 0, 1, 1};
    VAR16 = 320 * FUN2(VAR2->VAR18);
    if (*VAR4 < VAR16)
    {
        FUN3(VAR2, VAR19, "");
        return FUN4(VAR20);
    }
    VAR14 = (VAR8[0] >> 3) & 0x000F;
    VAR15 = VAR17[VAR14];
    if (VAR15 > VAR9)
    {
        FUN3(VAR2, VAR19, "", VAR9, VAR15 + 1);
        return VAR21;
    }
    FUN5(VAR12->VAR22, VAR8, VAR3, VAR23);
    *VAR4 = VAR16;
    return VAR15;
}