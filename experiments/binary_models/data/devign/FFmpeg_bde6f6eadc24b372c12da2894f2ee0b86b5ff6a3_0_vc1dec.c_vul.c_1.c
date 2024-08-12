static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR4.VAR6;
    VAR7 *VAR8, *VAR9;
    int VAR10, VAR11;
    int VAR12[4], VAR13[4];
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18 = VAR2->VAR19[VAR4->VAR20[0]];
    static const int VAR21[16] = {0, 0, 1, 2, 4, 4, 5, 6, 2, 2, 3, 8, 6, 6, 7, 12};
    int VAR22 = VAR18 ? 1 : 4;
    int VAR23 = VAR4->VAR23 >> 1;
    if (!VAR2->VAR4.VAR24.VAR25.VAR26[0])
        return;
    if (VAR4->VAR27 & VAR28)
        return;
    for (VAR14 = 0; VAR14 < 4; VAR14++)
    {
        VAR16 = VAR4->VAR29[0][VAR14][0];
        VAR12[VAR14] = (VAR16 + ((VAR16 & 3) == 3)) >> 1;
        VAR17 = VAR4->VAR29[0][VAR14][1];
        if (VAR18)
            VAR13[VAR14] = (VAR17 >> 4) * 8 + VAR21[VAR17 & 0xF];
        else
            VAR13[VAR14] = (VAR17 + ((VAR17 & 3) == 3)) >> 1;
    }
    for (VAR14 = 0; VAR14 < 4; VAR14++)
    {
        VAR15 = (VAR14 & 1) * 4 + ((VAR14 & 2) ? VAR22 * VAR4->VAR30 : 0);
        VAR10 = VAR4->VAR31 * 8 + (VAR14 & 1) * 4 + (VAR12[VAR14] >> 2);
        VAR11 = VAR4->VAR32 * 8 + ((VAR14 & 2) ? VAR22 : 0) + (VAR13[VAR14] >> 2);
        VAR10 = FUN2(VAR10, -8, VAR4->VAR33->VAR34 >> 1);
        VAR11 = FUN2(VAR11, -8, VAR4->VAR33->VAR35 >> 1);
        VAR8 = VAR4->VAR24.VAR25.VAR26[1] + VAR11 * VAR4->VAR30 + VAR10;
        VAR9 = VAR4->VAR24.VAR25.VAR26[2] + VAR11 * VAR4->VAR30 + VAR10;
        VAR12[VAR14] = (VAR12[VAR14] & 3) << 1;
        VAR13[VAR14] = (VAR13[VAR14] & 3) << 1;
        if (VAR18 && !(VAR11 & 1))
            VAR23--;
        if (VAR18 && (VAR11 & 1) && VAR11 < 2)
            VAR11--;
        if ((VAR2->VAR36 == VAR37) || VAR4->VAR38 < 10 || VAR23 < (5 << VAR18) || (unsigned)VAR10 > (VAR4->VAR38 >> 1) - 5 || (unsigned)VAR11 > VAR23 - (5 << VAR18))
        {
            VAR4->VAR6.FUN3(VAR4->VAR39, VAR8, VAR4->VAR30, 5, (5 << VAR18), VAR10, VAR11, VAR4->VAR38 >> 1, VAR23);
            VAR4->VAR6.FUN3(VAR4->VAR39 + 16, VAR9, VAR4->VAR30, 5, (5 << VAR18), VAR10, VAR11, VAR4->VAR38 >> 1, VAR23);
            VAR8 = VAR4->VAR39;
            VAR9 = VAR4->VAR39 + 16;
            if (VAR2->VAR36 == VAR37)
            {
                int VAR14, VAR40;
                VAR7 *VAR41, *VAR42;
                VAR41 = VAR8;
                VAR42 = VAR9;
                for (VAR40 = 0; VAR40 < 5; VAR40++)
                {
                    for (VAR14 = 0; VAR14 < 5; VAR14++)
                    {
                        VAR41[VAR14] = VAR2->VAR43[VAR41[VAR14]];
                        VAR42[VAR14] = VAR2->VAR43[VAR42[VAR14]];
                    }
                    VAR41 += VAR4->VAR30 << 1;
                    VAR42 += VAR4->VAR30 << 1;
                }
            }
        }
        if (!VAR2->VAR44)
        {
            VAR6->VAR45[1](VAR4->VAR46[1] + VAR15, VAR8, VAR4->VAR30 << VAR18, 4, VAR12[VAR14], VAR13[VAR14]);
            VAR6->VAR45[1](VAR4->VAR46[2] + VAR15, VAR9, VAR4->VAR30 << VAR18, 4, VAR12[VAR14], VAR13[VAR14]);
        }
        else
        {
            VAR2->VAR47.VAR48[1](VAR4->VAR46[1] + VAR15, VAR8, VAR4->VAR30 << VAR18, 4, VAR12[VAR14], VAR13[VAR14]);
            VAR2->VAR47.VAR48[1](VAR4->VAR46[2] + VAR15, VAR9, VAR4->VAR30 << VAR18, 4, VAR12[VAR14], VAR13[VAR14]);
        }
    }
}