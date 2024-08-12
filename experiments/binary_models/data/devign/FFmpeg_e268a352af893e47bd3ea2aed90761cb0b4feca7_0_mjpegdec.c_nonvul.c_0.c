static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, const VAR6 *VAR7, const VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR6 *VAR13[VAR14];
    const VAR6 *VAR15[VAR14];
    int VAR16[VAR14];
    GetBitContext VAR17;
    if (VAR7)
    {
        FUN2(&VAR17, VAR7, VAR2->VAR18 * VAR2->VAR19);
    }
    if (VAR2->VAR20 && VAR2->VAR21->VAR22 & VAR23)
    {
        FUN3(VAR2->VAR21, VAR24, "");
        VAR2->VAR20 = 0;
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        int VAR25 = VAR2->VAR26[VAR10];
        VAR13[VAR25] = VAR2->VAR27->VAR13[VAR25];
        VAR15[VAR25] = VAR9 ? VAR9->VAR13[VAR25] : NULL;
        VAR16[VAR25] = VAR2->VAR16[VAR25];
        VAR2->VAR28[VAR25] |= 1;
        if (VAR2->VAR20)
        {
            int VAR29 = (VAR16[VAR25] * (VAR2->VAR30[VAR10] * (8 * VAR2->VAR19 - ((VAR2->VAR31 / VAR2->VAR32) & 7)) - 1));
            VAR13[VAR25] += VAR29;
            VAR15[VAR25] += VAR29;
            VAR16[VAR25] *= -1;
        }
    }
    for (VAR12 = 0; VAR12 < VAR2->VAR19; VAR12++)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
        {
            const int VAR33 = VAR7 && !FUN4(&VAR17);
            if (VAR2->VAR34 && !VAR2->VAR35)
                VAR2->VAR35 = VAR2->VAR34;
            if (FUN5(&VAR2->VAR36) > VAR2->VAR36.VAR37)
            {
                FUN3(VAR2->VAR21, VAR24, "", FUN5(&VAR2->VAR36) - VAR2->VAR36.VAR37);
                return -1;
            }
            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            {
                VAR6 *VAR38;
                int VAR39, VAR40, VAR41, VAR42, VAR43, VAR25, VAR44;
                int VAR45;
                VAR39 = VAR2->VAR46[VAR10];
                VAR25 = VAR2->VAR26[VAR10];
                VAR40 = VAR2->VAR47[VAR10];
                VAR41 = VAR2->VAR30[VAR10];
                VAR42 = 0;
                VAR43 = 0;
                for (VAR44 = 0; VAR44 < VAR39; VAR44++)
                {
                    VAR45 = (((VAR16[VAR25] * (VAR41 * VAR12 + VAR43) * 8) + (VAR40 * VAR11 + VAR42) * 8) >> VAR2->VAR21->VAR48);
                    if (VAR2->VAR49 && VAR2->VAR50)
                        VAR45 += VAR16[VAR25] >> 1;
                    VAR38 = VAR13[VAR25] + VAR45;
                    if (!VAR2->VAR51)
                    {
                        if (VAR33)
                        {
                            FUN6(VAR38, VAR15[VAR25] + VAR45, VAR16[VAR25], VAR2->VAR21->VAR48);
                        }
                        else
                        {
                            VAR2->VAR52.FUN7(VAR2->VAR53);
                            if (FUN8(VAR2, VAR2->VAR53, VAR10, VAR2->VAR54[VAR10], VAR2->VAR55[VAR10], VAR2->VAR56[VAR2->VAR57[VAR25]]) < 0)
                            {
                                FUN3(VAR2->VAR21, VAR24, "", VAR12, VAR11);
                                return -1;
                            }
                            VAR2->VAR52.FUN9(VAR38, VAR16[VAR25], VAR2->VAR53);
                        }
                    }
                    else
                    {
                        int VAR58 = VAR2->VAR59[VAR25] * (VAR41 * VAR12 + VAR43) + (VAR40 * VAR11 + VAR42);
                        VAR60 *VAR53 = VAR2->VAR61[VAR25][VAR58];
                        if (VAR4)
                            VAR53[0] += FUN4(&VAR2->VAR36) * VAR2->VAR56[VAR2->VAR57[VAR25]][0] << VAR5;
                        else if (FUN10(VAR2, VAR53, VAR10, VAR2->VAR54[VAR10], VAR2->VAR56[VAR2->VAR57[VAR25]], VAR5) < 0)
                        {
                            FUN3(VAR2->VAR21, VAR24, "", VAR12, VAR11);
                            return -1;
                        }
                    }
                    if (++VAR42 == VAR40)
                    {
                        VAR42 = 0;
                        VAR43++;
                    }
                }
            }
            if (VAR2->VAR34)
            {
                VAR2->VAR35--;
                VAR10 = 8 + ((-FUN5(&VAR2->VAR36)) & 7);
                if (FUN11(&VAR2->VAR36, VAR10) == (1 << VAR10) - 1)
                {
                    int VAR62 = FUN5(&VAR2->VAR36);
                    FUN12(&VAR2->VAR36);
                    while (FUN13(&VAR2->VAR36) >= 8 && FUN11(&VAR2->VAR36, 8) == 0xFF)
                        FUN14(&VAR2->VAR36, 8);
                    if ((FUN15(&VAR2->VAR36, 8) & 0xF8) == 0xD0)
                    {
                        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                            VAR2->VAR63[VAR10] = 1024;
                    }
                    else
                    {
                        FUN16(&VAR2->VAR36, VAR62 - FUN5(&VAR2->VAR36));
                    }
                }
            }
        }
    }
    return 0;
}