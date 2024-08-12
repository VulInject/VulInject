int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13)
{
    int VAR14, VAR15;
    int VAR16 = VAR13 == 0 ? VAR4->VAR16 : VAR4->VAR17[VAR13 - 1];
    if (FUN2(VAR11))
    {
        FUN3(VAR4->VAR18[VAR13] + 0);
        FUN3(VAR4->VAR18[VAR13] + 8);
        FUN3(VAR4->VAR18[VAR13] + 16);
        FUN3(VAR4->VAR18[VAR13] + 24);
        if (FUN4(VAR2, VAR4, VAR6, VAR4->VAR18[VAR13], VAR19 + VAR13, VAR8, NULL, 16) < 0)
        {
            return -1;
        }
        assert((VAR12 & 15) == 0 || (VAR12 & 15) == 15);
        if (VAR12 & 15)
        {
            for (VAR15 = 0; VAR15 < 4; VAR15++)
            {
                for (VAR14 = 0; VAR14 < 4; VAR14++)
                {
                    const int VAR20 = VAR14 + 4 * VAR15 + VAR13 * 16;
                    if (FUN4(VAR2, VAR4, VAR6, VAR4->VAR21 + (16 * VAR20 << VAR10), VAR20, VAR8 + 1, VAR2->VAR22.VAR23->VAR24[VAR13][VAR16], 15) < 0)
                    {
                        return -1;
                    }
                }
            }
            return 0xf;
        }
        else
        {
            FUN5(&VAR4->VAR25[VAR26[VAR13 * 16]], 4, 4, 8, 0, 1);
            return 0;
        }
    }
    else
    {
        int VAR27 = (FUN6(VAR11) ? 0 : 3) + VAR13;
        int VAR28 = 0;
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            if (VAR12 & (1 << VAR15))
            {
                if (FUN7(VAR11))
                {
                    VAR29 *VAR30 = &VAR4->VAR21[64 * VAR15 + 256 * VAR13 << VAR10];
                    VAR7 *VAR31;
                    for (VAR14 = 0; VAR14 < 4; VAR14++)
                    {
                        const int VAR20 = VAR14 + 4 * VAR15 + VAR13 * 16;
                        if (FUN4(VAR2, VAR4, VAR6, VAR30, VAR20, VAR9 + 16 * VAR14, VAR2->VAR22.VAR23->VAR32[VAR27][VAR16], 16) < 0)
                            return -1;
                    }
                    VAR31 = &VAR4->VAR25[VAR26[4 * VAR15 + VAR13 * 16]];
                    VAR31[0] += VAR31[1] + VAR31[8] + VAR31[9];
                    VAR28 |= !!VAR31[0] << VAR15;
                }
                else
                {
                    for (VAR14 = 0; VAR14 < 4; VAR14++)
                    {
                        const int VAR20 = VAR14 + 4 * VAR15 + VAR13 * 16;
                        if (FUN4(VAR2, VAR4, VAR6, VAR4->VAR21 + (16 * VAR20 << VAR10), VAR20, VAR8, VAR2->VAR22.VAR23->VAR24[VAR27][VAR16], 16) < 0)
                        {
                            return -1;
                        }
                        VAR28 |= VAR4->VAR25[VAR26[VAR20]] << VAR15;
                    }
                }
            }
            else
            {
                VAR7 *const VAR31 = &VAR4->VAR25[VAR26[4 * VAR15 + VAR13 * 16]];
                VAR31[0] = VAR31[1] = VAR31[8] = VAR31[9] = 0;
            }
        }
        return VAR28;
    }
}