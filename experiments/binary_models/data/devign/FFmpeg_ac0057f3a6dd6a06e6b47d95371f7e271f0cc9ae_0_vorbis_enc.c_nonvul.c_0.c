static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, float *VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15 = VAR4->VAR16;
    int VAR17 = (VAR4->VAR18 - VAR4->VAR19) / VAR15;
    int VAR20 = (VAR4->VAR21 == 2) ? 1 : VAR9;
    int VAR22[VAR20][VAR17];
    int VAR23 = VAR2->VAR24[VAR4->VAR25].VAR26;
    assert(VAR4->VAR21 == 2);
    assert(VAR9 == 2);
    for (VAR13 = 0; VAR13 < VAR17; VAR13++)
    {
        float VAR27 = 0., VAR28 = 0.;
        int VAR29 = VAR4->VAR19 + VAR13 * VAR15;
        for (VAR14 = VAR29; VAR14 < VAR29 + VAR15; VAR14 += 2)
        {
            VAR27 = FUN2(VAR27, FUN3(VAR7[VAR14 / VAR9]));
            VAR28 = FUN2(VAR28, FUN3(VAR7[VAR8 + VAR14 / VAR9]));
        }
        for (VAR11 = 0; VAR11 < VAR4->VAR30 - 1; VAR11++)
        {
            if (VAR27 < VAR4->VAR31[VAR11][0] && VAR28 < VAR4->VAR31[VAR11][1])
                break;
        }
        VAR22[0][VAR13] = VAR11;
    }
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        VAR13 = 0;
        while (VAR13 < VAR17)
        {
            if (VAR10 == 0)
                for (VAR12 = 0; VAR12 < VAR20; VAR12++)
                {
                    VAR32 *VAR33 = &VAR2->VAR24[VAR4->VAR25];
                    int VAR34 = 0;
                    for (VAR11 = 0; VAR11 < VAR23; VAR11++)
                    {
                        VAR34 *= VAR4->VAR30;
                        VAR34 += VAR22[VAR12][VAR13 + VAR11];
                    }
                    FUN4(VAR6, VAR33, VAR34);
                }
            for (VAR11 = 0; VAR11 < VAR23 && VAR13 < VAR17; VAR11++, VAR13++)
            {
                for (VAR12 = 0; VAR12 < VAR20; VAR12++)
                {
                    int VAR35 = VAR4->VAR36[VAR22[VAR12][VAR13]][VAR10];
                    VAR32 *VAR33 = &VAR2->VAR24[VAR35];
                    float *VAR37 = VAR7 + VAR8 * VAR12 + VAR4->VAR19 + VAR13 * VAR15;
                    if (VAR35 == -1)
                        continue;
                    assert(VAR4->VAR21 == 0 || VAR4->VAR21 == 2);
                    assert(!(VAR15 % VAR33->VAR26));
                    if (VAR4->VAR21 == 0)
                    {
                        for (VAR14 = 0; VAR14 < VAR15; VAR14 += VAR33->VAR26)
                        {
                            float *VAR38 = FUN5(VAR33, VAR6, &VAR37[VAR14]);
                            int VAR39;
                            for (VAR39 = 0; VAR39 < VAR33->VAR26; VAR39++)
                                VAR37[VAR14 + VAR39] -= VAR38[VAR39];
                        }
                    }
                    else
                    {
                        int VAR29 = VAR4->VAR19 + VAR13 * VAR15, VAR40, VAR41;
                        VAR40 = (VAR29 % VAR9) * VAR8;
                        VAR41 = VAR29 / VAR9;
                        VAR29 = VAR9 * VAR8;
                        for (VAR14 = 0; VAR14 < VAR15; VAR14 += VAR33->VAR26)
                        {
                            int VAR42, VAR43 = VAR40, VAR44 = VAR41;
                            float VAR45[VAR33->VAR26], *VAR46 = VAR45;
                            for (VAR42 = VAR33->VAR26; VAR42--;)
                            {
                                *VAR46++ = VAR7[VAR43 + VAR44];
                                if ((VAR43 += VAR8) == VAR29)
                                {
                                    VAR43 = 0;
                                    VAR44++;
                                }
                            }
                            VAR46 = FUN5(VAR33, VAR6, VAR45);
                            for (VAR42 = VAR33->VAR26; VAR42--;)
                            {
                                VAR7[VAR40 + VAR41] -= *VAR46++;
                                if ((VAR40 += VAR8) == VAR29)
                                {
                                    VAR40 = 0;
                                    VAR41++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}