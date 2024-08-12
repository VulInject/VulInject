static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, VAR9 *VAR10, int VAR11, int VAR12)
{
    VAR5 *VAR13;
    VAR5 *VAR14;
    svq1_pmv VAR15;
    VAR9 *VAR16[4];
    int VAR17, VAR18;
    VAR16[0] = &VAR10[0];
    if (VAR12 == 0)
    {
        VAR16[1] = VAR16[2] = VAR16[0];
    }
    else
    {
        VAR16[1] = &VAR10[(VAR11 / 8) + 2];
        VAR16[2] = &VAR10[(VAR11 / 8) + 4];
    }
    VAR18 = FUN2(VAR4, &VAR15, VAR16);
    if (VAR18 != 0)
        return VAR18;
    VAR16[0] = &VAR15;
    if (VAR12 == 0)
    {
        VAR16[1] = VAR16[2] = VAR16[0];
    }
    else
    {
        VAR16[1] = &VAR10[(VAR11 / 8) + 3];
    }
    VAR18 = FUN2(VAR4, &VAR10[0], VAR16);
    if (VAR18 != 0)
        return VAR18;
    VAR16[1] = &VAR10[0];
    VAR16[2] = &VAR10[(VAR11 / 8) + 1];
    VAR18 = FUN2(VAR4, &VAR10[(VAR11 / 8) + 2], VAR16);
    if (VAR18 != 0)
        return VAR18;
    VAR16[2] = &VAR10[(VAR11 / 8) + 2];
    VAR16[3] = &VAR10[(VAR11 / 8) + 3];
    VAR18 = FUN2(VAR4, VAR16[3], VAR16);
    if (VAR18 != 0)
        return VAR18;
    for (VAR17 = 0; VAR17 < 4; VAR17++)
    {
        int VAR19 = VAR16[VAR17]->VAR11 + (VAR17 & 1) * 16;
        int VAR20 = VAR16[VAR17]->VAR12 + (VAR17 >> 1) * 16;
        if (VAR12 + (VAR20 >> 1) < 0)
            VAR20 = 0;
        if (VAR11 + (VAR19 >> 1) < 0)
            VAR19 = 0;
        VAR13 = &VAR7[(VAR11 + (VAR19 >> 1)) + (VAR12 + (VAR20 >> 1)) * VAR8];
        VAR14 = VAR6;
        VAR2->VAR21[1][((VAR20 & 1) << 1) | (VAR19 & 1)](VAR14, VAR13, VAR8, 8);
        if (VAR17 & 1)
            VAR6 += 8 * (VAR8 - 1);
        else
            VAR6 += 8;
    }
    return 0;
}