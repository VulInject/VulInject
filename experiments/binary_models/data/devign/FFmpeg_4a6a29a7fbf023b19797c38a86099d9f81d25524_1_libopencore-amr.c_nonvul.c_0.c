static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    static const uint8_t VAR14[16] = {12, 13, 15, 17, 19, 20, 26, 31, 5, 0, 0, 0, 0, 0, 0, 0};
    enum Mode VAR15;
    int VAR16, VAR17;
    FUN2(VAR2, "", VAR8, VAR9, VAR2->VAR18);
    VAR17 = 160 * FUN3(VAR2->VAR19);
    if (*VAR4 < VAR17)
    {
        FUN4(VAR2, VAR20, "");
        return FUN5(VAR21);
    }
    VAR15 = (VAR8[0] >> 3) & 0x000F;
    VAR16 = VAR14[VAR15] + 1;
    if (VAR16 > VAR9)
    {
        FUN4(VAR2, VAR20, "", VAR9, VAR16);
        return VAR22;
    }
    FUN2(VAR2, "", VAR16, VAR8[0], VAR8[1], VAR8[2], VAR8[3]);
    FUN6(VAR12->VAR23, VAR8, VAR3, 0);
    *VAR4 = VAR17;
    return VAR16;
}