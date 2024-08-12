int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6, int *VAR7)
{
    int VAR8, VAR9;
    if (VAR5 < 24)
        return VAR10;
    if (FUN2(VAR4) != 0x8000)
        return VAR10;
    VAR8 = FUN2(VAR4 + 2) + 4;
    if (VAR5 >= VAR8 && memcmp(VAR4 + VAR8 - 6, "", 6))
        return VAR10;
    if (VAR4[4] != 3 || VAR4[5] != 18 || VAR4[6] != 4)
    {
        FUN3(VAR2, "");
        return VAR11;
    }
    VAR2->VAR12 = VAR4[7];
    if (VAR2->VAR12 > 2)
        return VAR10;
    VAR2->VAR13 = FUN4(VAR4 + 8);
    if (VAR2->VAR13 < 1 || VAR2->VAR13 > VAR14 / (VAR2->VAR12 * VAR15 * 8))
        return VAR10;
    VAR2->VAR16 = VAR2->VAR13 * VAR2->VAR12 * VAR15 * 8 / VAR17;
    if (VAR7)
    {
        VAR9 = FUN2(VAR4 + 16);
        FUN5(VAR9, VAR2->VAR13, VAR18, VAR7);
    }
    *VAR6 = VAR8;
    return 0;
}