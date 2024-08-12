static void FUN1(int VAR1, int VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12, VAR13;
    VAR14 *VAR15 = (VAR14 *)&VAR6->VAR16[(VAR6->VAR17[0][1] - VAR6->VAR17[0][0]) * VAR2 + VAR1];
    for (VAR12 = 0; VAR12 < (VAR4->VAR17[1][1] - VAR4->VAR17[1][0]); ++VAR12)
        for (VAR11 = 0; VAR11 < (VAR4->VAR17[0][1] - VAR4->VAR17[0][0]); ++VAR11)
        {
            VAR13 = (VAR6->VAR17[0][1] - VAR6->VAR17[0][0]) * VAR12 + VAR11;
            VAR15[VAR13] = ((VAR14)(VAR8->VAR16[VAR12][VAR11]) * VAR10->VAR18 + (1 << 15)) >> 16;
        }
}