void FUN1(VAR1 *VAR2, VAR3 *VAR4[3], VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    if (!(VAR10->VAR16 & VAR17 && !VAR8) && (VAR2->VAR18 || !VAR8))
        FUN2(VAR2->VAR19[VAR7 + 1], VAR4[0], VAR4[1], VAR4[2], VAR2->VAR20, VAR2->VAR21, VAR7, VAR8, VAR2->VAR22, VAR2->VAR23.VAR24, 1);
    if (VAR6->VAR13 < VAR25)
    {
        if (VAR10->VAR16 & VAR17)
        {
            VAR13 = FUN3(VAR6->VAR13, VAR7, VAR8);
        }
        else
        {
            VAR13 = FUN4(VAR6->VAR13, VAR7, VAR8);
        }
        VAR2->VAR26.VAR27[VAR13](VAR4[0], VAR2->VAR20);
    }
    else
    {
        VAR3 *VAR28 = VAR4[0];
        VAR3 *VAR29 = VAR2->VAR30;
        uint8_t VAR31[4] = {127, 127, 127, 127};
        VAR3 *VAR32 = VAR28 - VAR2->VAR20 + 16;
        if (VAR7 == VAR2->VAR22 - 1)
        {
            VAR15 = VAR32[-1] * 0x01010101;
            VAR32 = (VAR3 *)&VAR15;
        }
        if (VAR6->VAR33)
            FUN5(VAR2->VAR34);
        for (VAR12 = 0; VAR12 < 4; VAR12++)
        {
            VAR3 *VAR35 = VAR28 + 4 - VAR2->VAR20;
            for (VAR11 = 0; VAR11 < 4; VAR11++)
            {
                int copy = 0, VAR20 = VAR2->VAR20;
                VAR3 *VAR4 = VAR28 + 4 * VAR11;
                FUN6(4, VAR3, VAR36)
                [5 * 8];
                if ((VAR12 == 0 || VAR11 == 3) && VAR8 == 0 && VAR10->VAR16 & VAR17)
                {
                    VAR35 = VAR31;
                }
                else if (VAR11 == 3)
                    VAR35 = VAR32;
                if (VAR10->VAR16 & VAR17)
                {
                    VAR13 = FUN7(VAR29[VAR11], VAR7 + VAR11, VAR8 + VAR12, &copy);
                    if (copy)
                    {
                        VAR4 = VAR36 + 12;
                        VAR20 = 8;
                        if (!(VAR8 + VAR12))
                        {
                            VAR36[3] = 127U;
                            *(VAR37 *)(VAR36 + 4) = 127U * 0x01010101U;
                        }
                        else
                        {
                            *(VAR37 *)(VAR36 + 4) = *(VAR37 *)(VAR28 + 4 * VAR11 - VAR2->VAR20);
                            if (!(VAR7 + VAR11))
                            {
                                VAR36[3] = 129U;
                            }
                            else
                            {
                                VAR36[3] = VAR28[4 * VAR11 - VAR2->VAR20 - 1];
                            }
                        }
                        if (!(VAR7 + VAR11))
                        {
                            VAR36[11] = VAR36[19] = VAR36[27] = VAR36[35] = 129U;
                        }
                        else
                        {
                            VAR36[11] = VAR28[4 * VAR11 - 1];
                            VAR36[19] = VAR28[4 * VAR11 + VAR2->VAR20 - 1];
                            VAR36[27] = VAR28[4 * VAR11 + VAR2->VAR20 * 2 - 1];
                            VAR36[35] = VAR28[4 * VAR11 + VAR2->VAR20 * 3 - 1];
                        }
                    }
                }
                else
                {
                    VAR13 = VAR29[VAR11];
                }
                VAR2->VAR26.VAR38[VAR13](VAR4, VAR35, VAR20);
                if (copy)
                {
                    *(VAR37 *)(VAR28 + 4 * VAR11) = *(VAR37 *)(VAR36 + 12);
                    *(VAR37 *)(VAR28 + 4 * VAR11 + VAR2->VAR20) = *(VAR37 *)(VAR36 + 20);
                    *(VAR37 *)(VAR28 + 4 * VAR11 + VAR2->VAR20 * 2) = *(VAR37 *)(VAR36 + 28);
                    *(VAR37 *)(VAR28 + 4 * VAR11 + VAR2->VAR20 * 3) = *(VAR37 *)(VAR36 + 36);
                }
                VAR14 = VAR2->VAR34[VAR12][VAR11];
                if (VAR14)
                {
                    if (VAR14 == 1)
                        VAR2->VAR39.FUN8(VAR28 + 4 * VAR11, VAR2->VAR40[VAR12][VAR11], VAR2->VAR20);
                    else
                        VAR2->VAR39.FUN9(VAR28 + 4 * VAR11, VAR2->VAR40[VAR12][VAR11], VAR2->VAR20);
                }
                VAR35 += 4;
            }
            VAR28 += 4 * VAR2->VAR20;
            VAR29 += 4;
        }
    }
    if (VAR10->VAR16 & VAR17)
    {
        VAR13 = FUN3(VAR2->VAR41, VAR7, VAR8);
    }
    else
    {
        VAR13 = FUN4(VAR2->VAR41, VAR7, VAR8);
    }
    VAR2->VAR26.VAR42[VAR13](VAR4[1], VAR2->VAR21);
    VAR2->VAR26.VAR42[VAR13](VAR4[2], VAR2->VAR21);
    if (!(VAR10->VAR16 & VAR17 && !VAR8) && (VAR2->VAR18 || !VAR8))
        FUN2(VAR2->VAR19[VAR7 + 1], VAR4[0], VAR4[1], VAR4[2], VAR2->VAR20, VAR2->VAR21, VAR7, VAR8, VAR2->VAR22, VAR2->VAR23.VAR24, 0);
}