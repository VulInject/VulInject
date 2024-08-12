int FUN1(int VAR1[4], enum PixelFormat VAR2, int VAR3)
{
    int VAR4;
    const VAR5 *VAR6 = &VAR7[VAR2];
    int VAR8[4];
    int VAR9[4];
    memset(VAR1, 0, 4 * sizeof(VAR1[0]));
    if ((unsigned)VAR2 >= VAR10 || VAR6->VAR11 & VAR12)
        return FUN2(VAR13);
    if (VAR6->VAR11 & VAR14)
    {
        VAR1[0] = (VAR3 * (VAR6->VAR15[0].VAR16 + 1) + 7) >> 3;
        return 0;
    }
    FUN3(VAR8, VAR9, VAR6);
    for (VAR4 = 0; VAR4 < 4; VAR4++)
    {
        int VAR17 = (VAR9[VAR4] == 1 || VAR9[VAR4] == 2) ? VAR6->VAR18 : 0;
        VAR1[VAR4] = VAR8[VAR4] * (((VAR3 + (1 << VAR17) - 1)) >> VAR17);
    }
    return 0;
}