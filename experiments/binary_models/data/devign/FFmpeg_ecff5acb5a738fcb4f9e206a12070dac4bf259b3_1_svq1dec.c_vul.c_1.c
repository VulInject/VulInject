static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, VAR9 *VAR10, int VAR11, int VAR12)
{
    VAR5 *VAR13;
    VAR5 *VAR14;
    svq1_pmv VAR15;
    VAR9 *VAR16[3];
    int VAR17;
    VAR16[0] = &VAR10[0];
    if (VAR12 == 0)
    {
        VAR16[1] = VAR16[2] = VAR16[0];
    }
    else
    {
        VAR16[1] = &VAR10[VAR11 / 8 + 2];
        VAR16[2] = &VAR10[VAR11 / 8 + 4];
    }
    VAR17 = FUN2(VAR4, &VAR15, VAR16);
    if (VAR17 != 0)
        return VAR17;
    VAR10[0].VAR11 = VAR10[VAR11 / 8 + 2].VAR11 = VAR10[VAR11 / 8 + 3].VAR11 = VAR15.VAR11;
    VAR10[0].VAR12 = VAR10[VAR11 / 8 + 2].VAR12 = VAR10[VAR11 / 8 + 3].VAR12 = VAR15.VAR12;
    if (VAR12 + (VAR15.VAR12 >> 1) < 0)
        VAR15.VAR12 = 0;
    if (VAR11 + (VAR15.VAR11 >> 1) < 0)
        VAR15.VAR11 = 0;
    VAR13 = &VAR7[(VAR11 + (VAR15.VAR11 >> 1)) + (VAR12 + (VAR15.VAR12 >> 1)) * VAR8];
    VAR14 = VAR6;
    VAR2->VAR18[0][(VAR15.VAR12 & 1) << 1 | (VAR15.VAR11 & 1)](VAR14, VAR13, VAR8, 16);
    return 0;
}