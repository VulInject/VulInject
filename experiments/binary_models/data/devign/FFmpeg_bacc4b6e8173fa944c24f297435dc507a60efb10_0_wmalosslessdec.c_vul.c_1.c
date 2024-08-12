static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = VAR2->VAR12;
    int VAR13 = VAR2->VAR14;
    for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
    {
        int *VAR16 = VAR2->VAR17[VAR4];
        for (VAR6 = 0; VAR6 < VAR13; VAR6++)
        {
            VAR5 = 0;
            for (VAR7 = 0; VAR7 < VAR13; VAR7++)
            {
                if (VAR6 <= VAR7)
                    VAR5 += VAR9[VAR7] * VAR16[VAR7 - VAR6];
                else
                    VAR5 += VAR2->VAR18[VAR4][VAR6 - VAR7 - 1] * VAR9[VAR7];
            }
            VAR5 >>= VAR11;
            VAR2->VAR18[VAR4][VAR6] += VAR5;
        }
        for (VAR6 = VAR13; VAR6 < VAR3; VAR6++)
        {
            VAR5 = 0;
            for (VAR7 = 0; VAR7 < VAR13; VAR7++)
                VAR5 += VAR2->VAR18[VAR4][VAR6 - VAR7 - 1] * VAR9[VAR7];
            VAR5 >>= VAR11;
            VAR2->VAR18[VAR4][VAR6] += VAR5;
        }
        for (VAR7 = 0; VAR7 < VAR13; VAR7++)
            VAR16[VAR7] = VAR2->VAR18[VAR4][VAR3 - VAR7 - 1];
    }
}