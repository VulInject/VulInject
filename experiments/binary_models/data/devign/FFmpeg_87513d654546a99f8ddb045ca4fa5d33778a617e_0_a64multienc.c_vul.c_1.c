static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10 = 0;
    int VAR11 = FUN2(VAR2->VAR11, VAR12);
    int VAR13 = FUN2(VAR2->VAR13, VAR14);
    VAR15 *VAR16 = VAR4->VAR17[0];
    for (VAR7 = 0; VAR7 < VAR12; VAR7 += 8)
    {
        for (VAR6 = 0; VAR6 < VAR14; VAR6 += 8)
        {
            for (VAR9 = VAR7; VAR9 < VAR7 + 8 && VAR9 < VAR12; VAR9++)
            {
                for (VAR8 = VAR6; VAR8 < VAR6 + 8 && VAR8 < VAR14; VAR8 += 2)
                {
                    if (VAR8 < VAR13 && VAR9 < VAR11)
                    {
                        VAR10 = (VAR16[(VAR8 + 0 + VAR9 * VAR4->VAR18[0])] + VAR16[(VAR8 + 1 + VAR9 * VAR4->VAR18[0])]) / 2;
                        VAR5[0] = VAR10;
                    }
                    VAR5++;
                }
            }
        }
    }
}