static void FUN1(int VAR1, int VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12;
    int VAR13 = VAR4->VAR14[0][1] - VAR4->VAR14[0][0];
    for (VAR12 = 0; VAR12 < (VAR4->VAR14[1][1] - VAR4->VAR14[1][0]); ++VAR12)
    {
        VAR15 *VAR16 = &VAR6->VAR17[(VAR6->VAR14[0][1] - VAR6->VAR14[0][0]) * (VAR2 + VAR12) + VAR1];
        int *VAR18 = VAR8->VAR19 + VAR12 * VAR8->VAR20;
        if (VAR10->VAR21 == 16384)
        {
            for (VAR11 = 0; VAR11 < VAR13; ++VAR11)
                VAR16[VAR11] = VAR18[VAR11] / 2;
        }
        else
        {
            for (VAR11 = 0; VAR11 < VAR13; ++VAR11)
                VAR16[VAR11] = (VAR18[VAR11] * (VAR22)VAR10->VAR21) / 32768;
        }
    }
}