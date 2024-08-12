int FUN1(enum PixelFormat VAR1, int VAR2, int VAR3)
{
    const VAR4 *VAR5 = &VAR6[VAR1];
    int VAR7[4];
    int VAR8[4];
    int VAR9;
    if (VAR5->VAR10 & VAR11)
        return (VAR2 * (VAR5->VAR12[0].VAR13 + 1) + 7) >> 3;
    FUN2(VAR7, VAR8, VAR5);
    VAR9 = (VAR8[VAR3] == 1 || VAR8[VAR3] == 2) ? VAR5->VAR14 : 0;
    return VAR7[VAR3] * (((VAR2 + (1 << VAR9) - 1)) >> VAR9);
}