static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    if (VAR4[0] != 0x80)
        return VAR7;
    VAR6 = (FUN2(VAR4) ^ 0x80000000) + 4;
    if (VAR5 < VAR6 || memcmp(VAR4 + VAR6 - 6, "", 6))
        return VAR7;
    VAR2->VAR8 = VAR4[7];
    if (VAR2->VAR8 > 2)
        return VAR7;
    VAR2->VAR9 = FUN2(VAR4 + 8);
    if (VAR2->VAR9 < 1 || VAR2->VAR9 > VAR10 / (VAR2->VAR8 * 18 * 8))
        return VAR7;
    VAR2->VAR11 = VAR2->VAR9 * VAR2->VAR8 * 18 * 8 / 32;
    return VAR6;
}