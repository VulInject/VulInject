static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7;
    if (VAR2->VAR8 - VAR2->VAR9 < 1)
        return VAR10;
    VAR7 = FUN2(&VAR2->VAR9);
    VAR5->VAR11 = VAR7 >> 5;
    VAR5->VAR12 = VAR7 & 0x1f;
    if (VAR5->VAR12 == VAR13)
    {
        VAR3 -= 3;
        if (VAR2->VAR8 - VAR2->VAR9 < VAR3)
            return VAR10;
        for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            VAR5->VAR14[VAR6] = FUN2(&VAR2->VAR9) >> 3;
    }
    else if (VAR5->VAR12 == VAR15)
    {
        if (VAR2->VAR8 - VAR2->VAR9 < 2)
            return VAR10;
        VAR7 = FUN3(&VAR2->VAR9);
        VAR5->VAR14[0] = VAR7 >> 11;
        VAR5->VAR16[0] = VAR7 & 0x7ff;
        for (VAR6 = 1; VAR6 < VAR17 * 3; VAR6++)
        {
            int VAR18 = FUN4(0, VAR5->VAR14[0] - (VAR6 - 1) / 3);
            VAR5->VAR14[VAR6] = VAR18;
            VAR5->VAR16[VAR6] = VAR5->VAR16[0];
        }
    }
    else
    {
        VAR3 = (VAR3 - 3) >> 1;
        if (VAR2->VAR8 - VAR2->VAR9 < VAR3)
            return VAR10;
        for (VAR6 = 0; VAR6 < VAR3; VAR6++)
        {
            VAR7 = FUN3(&VAR2->VAR9);
            VAR5->VAR14[VAR6] = VAR7 >> 11;
            VAR5->VAR16[VAR6] = VAR7 & 0x7ff;
        }
    }
    return 0;
}