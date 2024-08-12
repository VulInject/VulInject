int FUN1(VAR1 *VAR2, FUN2 (*VAR3)[2], int VAR4)
{
    if (VAR2->VAR5 >= VAR6)
    {
        int VAR7[8];
        int VAR8, VAR9;
        VAR10 *VAR11 = VAR2->VAR11;
        int VAR12 = -1;
        int VAR13 = -10000000;
        for (VAR8 = 0; VAR8 < 8; VAR8++)
            VAR7[VAR8] = VAR2->VAR14 * (8 - VAR8);
        for (VAR9 = 0; VAR9 < VAR2->VAR15; VAR9++)
        {
            int VAR16;
            int VAR17 = (VAR9 + 1) * (VAR2->VAR18 + 2) + 1;
            VAR8 = VAR9 * VAR2->VAR18;
            for (VAR16 = 0; VAR16 < VAR2->VAR18; VAR16++)
            {
                if (VAR2->VAR19[VAR8] & VAR4)
                {
                    int VAR20 = FUN3(VAR11[VAR3[VAR17][0] + VAR21], VAR11[VAR3[VAR17][1] + VAR21]);
                    int VAR22;
                    for (VAR22 = 0; VAR22 < VAR20 && VAR22 < 8; VAR22++)
                    {
                        if (VAR2->VAR23 == VAR24 || VAR2->VAR25[VAR8] < VAR2->VAR26[VAR8])
                            VAR7[VAR22] -= 170;
                    }
                }
                VAR8++;
                VAR17++;
            }
        }
        for (VAR8 = 1; VAR8 < 8; VAR8++)
        {
            if (VAR7[VAR8] > VAR13)
            {
                VAR13 = VAR7[VAR8];
                VAR12 = VAR8;
            }
        }
        return VAR12;
    }
    else
    {
        return 1;
    }
}