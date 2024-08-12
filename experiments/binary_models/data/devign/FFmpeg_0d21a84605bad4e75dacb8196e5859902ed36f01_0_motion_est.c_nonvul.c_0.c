void FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR3;
    int VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
    {
        int VAR8;
        int VAR9 = (VAR4 + 1) * (VAR2->VAR10 + 2) + 1;
        int VAR11 = VAR4 * VAR2->VAR10;
        for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
        {
            if (VAR2->VAR12[VAR11] & VAR13)
            {
                if (VAR6[VAR2->VAR14[VAR9][0] + VAR15] > VAR3 || VAR6[VAR2->VAR14[VAR9][0] + VAR15] == 0 || VAR6[VAR2->VAR14[VAR9][1] + VAR15] > VAR3 || VAR6[VAR2->VAR14[VAR9][1] + VAR15] == 0)
                {
                    VAR2->VAR12[VAR11] &= ~VAR13;
                    VAR2->VAR12[VAR11] |= VAR16;
                    VAR2->VAR14[VAR9][0] = 0;
                    VAR2->VAR14[VAR9][1] = 0;
                }
            }
            VAR9++;
            VAR11++;
        }
    }
    if (VAR2->VAR17 & VAR18)
    {
        const int VAR19 = 2 + VAR2->VAR10 * 2;
        for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
        {
            int VAR9 = (VAR4 * 2 + 1) * VAR19 + 1;
            int VAR11 = VAR4 * VAR2->VAR10;
            int VAR8;
            for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
            {
                if (VAR2->VAR12[VAR11] & VAR20)
                {
                    int VAR21;
                    for (VAR21 = 0; VAR21 < 4; VAR21++)
                    {
                        int VAR22 = (VAR21 & 1) + (VAR21 >> 1) * VAR19;
                        int VAR23 = VAR2->VAR24[VAR9 + VAR22][0];
                        int VAR25 = VAR2->VAR24[VAR9 + VAR22][1];
                        if (VAR6[VAR23 + VAR15] > VAR3 || VAR6[VAR23 + VAR15] == 0 || VAR6[VAR25 + VAR15] > VAR3 || VAR6[VAR25 + VAR15] == 0)
                        {
                            VAR2->VAR12[VAR11] &= ~VAR20;
                            VAR2->VAR12[VAR11] |= VAR16;
                        }
                    }
                    VAR9 += 2;
                    VAR11++;
                }
            }
        }
    }
}