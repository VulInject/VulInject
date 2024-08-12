static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, VAR3 **VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12;
    int VAR13, VAR14, VAR15;
    const int VAR16 = VAR2->VAR17->VAR16;
    const int VAR18 = 8 >> VAR16;
    VAR13 = VAR2->VAR13;
    VAR14 = VAR2->VAR14;
    switch (VAR2->VAR19)
    {
    case VAR20:
        FUN2(VAR2, VAR4, VAR5, VAR6, 0, 0, 0, VAR8, VAR10, VAR2->VAR21[VAR7][0][0], VAR2->VAR21[VAR7][0][1], 2 * VAR18);
        break;
    case VAR22:
        VAR11 = 0;
        VAR12 = 0;
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            FUN3(VAR2, VAR4 + ((VAR15 & 1) + (VAR15 >> 1) * VAR2->VAR23) * VAR18, VAR8[0], 0, 0, (2 * VAR13 + (VAR15 & 1)) * VAR18, (2 * VAR14 + (VAR15 >> 1)) * VAR18, VAR2->VAR24, VAR2->VAR25, VAR2->VAR23, VAR2->VAR26 >> VAR16, VAR2->VAR27 >> VAR16, VAR18, VAR18, VAR10, VAR2->VAR21[VAR7][VAR15][0], VAR2->VAR21[VAR7][VAR15][1]);
            VAR11 += VAR2->VAR21[VAR7][VAR15][0];
            VAR12 += VAR2->VAR21[VAR7][VAR15][1];
        }
        if (!VAR28 || !(VAR2->VAR29 & VAR30))
            FUN4(VAR2, VAR5, VAR6, VAR8, VAR10, VAR11, VAR12);
        break;
    case VAR31:
        if (VAR2->VAR32 == VAR33)
        {
            FUN2(VAR2, VAR4, VAR5, VAR6, 1, 0, VAR2->VAR34[VAR7][0], VAR8, VAR10, VAR2->VAR21[VAR7][0][0], VAR2->VAR21[VAR7][0][1], VAR18);
            FUN2(VAR2, VAR4, VAR5, VAR6, 1, 1, VAR2->VAR34[VAR7][1], VAR8, VAR10, VAR2->VAR21[VAR7][1][0], VAR2->VAR21[VAR7][1][1], VAR18);
        }
        else
        {
            if (VAR2->VAR32 != VAR2->VAR34[VAR7][0] + 1 && VAR2->VAR35 != VAR36 && !VAR2->VAR37)
            {
                VAR8 = VAR2->VAR38->VAR39;
            }
            FUN2(VAR2, VAR4, VAR5, VAR6, 0, 0, VAR2->VAR34[VAR7][0], VAR8, VAR10, VAR2->VAR21[VAR7][0][0], VAR2->VAR21[VAR7][0][1], 2 * VAR18);
        }
        break;
    case VAR40:
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            VAR3 **VAR41;
            if (VAR2->VAR32 == VAR2->VAR34[VAR7][VAR15] + 1 || VAR2->VAR35 == VAR36 || VAR2->VAR37)
            {
                VAR41 = VAR8;
            }
            else
            {
                VAR41 = VAR2->VAR38->VAR39;
            }
            FUN2(VAR2, VAR4, VAR5, VAR6, 0, 0, VAR2->VAR34[VAR7][VAR15], VAR41, VAR10, VAR2->VAR21[VAR7][VAR15][0], VAR2->VAR21[VAR7][VAR15][1] + 2 * VAR18 * VAR15, VAR18);
            VAR4 += 2 * VAR18 * VAR2->VAR23;
            VAR5 += (2 * VAR18 >> VAR2->VAR42) * VAR2->VAR43;
            VAR6 += (2 * VAR18 >> VAR2->VAR42) * VAR2->VAR43;
        }
        break;
    case VAR44:
        if (VAR2->VAR32 == VAR33)
        {
            for (VAR15 = 0; VAR15 < 2; VAR15++)
            {
                int VAR45;
                for (VAR45 = 0; VAR45 < 2; VAR45++)
                {
                    FUN2(VAR2, VAR4, VAR5, VAR6, 1, VAR45, VAR45 ^ VAR15, VAR8, VAR10, VAR2->VAR21[VAR7][2 * VAR15 + VAR45][0], VAR2->VAR21[VAR7][2 * VAR15 + VAR45][1], VAR18);
                }
                VAR10 = VAR2->VAR46.VAR47;
            }
        }
        else
        {
            for (VAR15 = 0; VAR15 < 2; VAR15++)
            {
                FUN2(VAR2, VAR4, VAR5, VAR6, 0, 0, VAR2->VAR32 != VAR15 + 1, VAR8, VAR10, VAR2->VAR21[VAR7][2 * VAR15][0], VAR2->VAR21[VAR7][2 * VAR15][1], 2 * VAR18);
                VAR10 = VAR2->VAR46.VAR47;
                if (!VAR2->VAR37)
                {
                    VAR8 = VAR2->VAR38->VAR39;
                }
            }
        }
        break;
    default:
        assert(0);
    }
}