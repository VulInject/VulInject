static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    if (VAR2->VAR6[VAR5][VAR4] <= 7)
    {
        int VAR7, VAR8, VAR9;
        for (VAR8 = 0; VAR8 < 8; VAR8 += 4)
        {
            VAR7 = 0;
            for (VAR9 = 3; VAR9 >= 0; VAR9--)
            {
                VAR7 *= VAR10[VAR2->VAR6[VAR5][VAR4]];
                VAR7 += VAR2->VAR11[VAR5][VAR4][VAR3 * 8 + VAR8 + VAR9];
                VAR7 += (VAR10[VAR2->VAR6[VAR5][VAR4]] - 1) / 2;
            }
            FUN2(&VAR2->VAR12, VAR13[VAR2->VAR6[VAR5][VAR4]] / 4, VAR7);
        }
    }
    else
    {
        int VAR8;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
        {
            int VAR14 = VAR13[VAR2->VAR6[VAR5][VAR4]] / 16;
            FUN3(&VAR2->VAR12, VAR14, VAR2->VAR11[VAR5][VAR4][VAR3 * 8 + VAR8]);
        }
    }
}