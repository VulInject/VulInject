static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10[VAR11];
    int VAR12[VAR11];
    for (VAR6 = 0; VAR6 < VAR3; VAR6++)
    {
        int VAR13 = VAR2->VAR14[VAR6];
        VAR10[VAR13] = VAR2->VAR15.VAR10[VAR13];
        VAR12[VAR13] = VAR2->VAR12[VAR13];
        VAR2->VAR16[VAR13] |= 1;
        if (VAR2->VAR17)
        {
            assert(!(VAR2->VAR18->VAR19 & VAR20));
            VAR10[VAR13] += (VAR12[VAR13] * (VAR2->VAR21[VAR6] * (8 * VAR2->VAR22 - ((VAR2->VAR23 / VAR2->VAR24) & 7)) - 1));
            VAR12[VAR13] *= -1;
        }
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR22; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR25; VAR7++)
        {
            if (VAR2->VAR26 && !VAR2->VAR27)
                VAR2->VAR27 = VAR2->VAR26;
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                VAR9 *VAR28;
                int VAR29, VAR30, VAR31, VAR32, VAR33, VAR13, VAR34;
                VAR29 = VAR2->VAR35[VAR6];
                VAR13 = VAR2->VAR14[VAR6];
                VAR30 = VAR2->VAR36[VAR6];
                VAR31 = VAR2->VAR21[VAR6];
                VAR32 = 0;
                VAR33 = 0;
                for (VAR34 = 0; VAR34 < VAR29; VAR34++)
                {
                    VAR28 = VAR10[VAR13] + (((VAR12[VAR13] * (VAR31 * VAR8 + VAR33) * 8) + (VAR30 * VAR7 + VAR32) * 8) >> VAR2->VAR18->VAR37);
                    if (VAR2->VAR38 && VAR2->VAR39)
                        VAR28 += VAR12[VAR13] >> 1;
                    if (!VAR2->VAR40)
                    {
                        VAR2->VAR41.FUN2(VAR2->VAR42);
                        if (FUN3(VAR2, VAR2->VAR42, VAR6, VAR2->VAR43[VAR6], VAR2->VAR44[VAR6], VAR2->VAR45[VAR2->VAR46[VAR13]]) < 0)
                        {
                            FUN4(VAR2->VAR18, VAR47, "", VAR8, VAR7);
                            return -1;
                        }
                        VAR2->VAR41.FUN5(VAR28, VAR12[VAR13], VAR2->VAR42);
                    }
                    else
                    {
                        int VAR48 = VAR2->VAR49[VAR13] * (VAR31 * VAR8 + VAR33) + (VAR30 * VAR7 + VAR32);
                        VAR50 *VAR42 = VAR2->VAR51[VAR13][VAR48];
                        if (VAR4)
                            VAR42[0] += FUN6(&VAR2->VAR52) * VAR2->VAR45[VAR2->VAR46[VAR13]][0] << VAR5;
                        else if (FUN7(VAR2, VAR42, VAR6, VAR2->VAR43[VAR6], VAR2->VAR45[VAR2->VAR46[VAR13]], VAR5) < 0)
                        {
                            FUN4(VAR2->VAR18, VAR47, "", VAR8, VAR7);
                            return -1;
                        }
                    }
                    if (++VAR32 == VAR30)
                    {
                        VAR32 = 0;
                        VAR33++;
                    }
                }
            }
            if (VAR2->VAR26 && !--VAR2->VAR27)
            {
                FUN8(&VAR2->VAR52);
                FUN9(&VAR2->VAR52, 16);
                for (VAR6 = 0; VAR6 < VAR3; VAR6++)
                    VAR2->VAR53[VAR6] = 1024;
            }
        }
    }
    return 0;
}