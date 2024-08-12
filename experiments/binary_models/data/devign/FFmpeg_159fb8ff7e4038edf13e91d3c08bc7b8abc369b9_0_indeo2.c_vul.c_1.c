static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, int VAR7, const VAR5 *VAR8)
{
    int VAR9;
    int VAR10;
    int VAR11 = 0;
    if (VAR3 & 1)
        return VAR12;
    while (VAR11 < VAR3)
    {
        int VAR13 = FUN2(&VAR2->VAR14);
        if (VAR13 >= 0x80)
        {
            VAR13 -= 0x7F;
            if (VAR11 + VAR13 * 2 > VAR3)
                return VAR12;
            for (VAR9 = 0; VAR9 < VAR13 * 2; VAR9++)
                VAR6[VAR11++] = 0x80;
        }
        else
        {
            VAR6[VAR11++] = VAR8[VAR13 * 2];
            VAR6[VAR11++] = VAR8[(VAR13 * 2) + 1];
        }
    }
    VAR6 += VAR7;
    for (VAR10 = 1; VAR10 < VAR4; VAR10++)
    {
        VAR11 = 0;
        if (FUN3(&VAR2->VAR14) <= 0)
            return VAR12;
        while (VAR11 < VAR3)
        {
            int VAR13 = FUN2(&VAR2->VAR14);
            if (VAR13 >= 0x80)
            {
                VAR13 -= 0x7F;
                if (VAR11 + VAR13 * 2 > VAR3)
                    return VAR12;
                for (VAR9 = 0; VAR9 < VAR13 * 2; VAR9++)
                {
                    VAR6[VAR11] = VAR6[VAR11 - VAR7];
                    VAR11++;
                }
            }
            else
            {
                int VAR15 = VAR6[VAR11 - VAR7] + (VAR8[VAR13 * 2] - 128);
                VAR15 = FUN4(VAR15);
                VAR6[VAR11] = VAR15;
                VAR11++;
                VAR15 = VAR6[VAR11 - VAR7] + (VAR8[(VAR13 * 2) + 1] - 128);
                VAR15 = FUN4(VAR15);
                VAR6[VAR11] = VAR15;
                VAR11++;
            }
        }
        VAR6 += VAR7;
    }
    return 0;
}