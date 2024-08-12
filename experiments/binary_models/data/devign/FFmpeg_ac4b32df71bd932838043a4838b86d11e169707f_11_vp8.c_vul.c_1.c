void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6[3], VAR7 *VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15;
    if (VAR10 && (VAR2->VAR16 || !VAR10) && VAR4->VAR17 == 0)
        FUN2(VAR2->VAR18[VAR9 + 1], VAR6[0], VAR6[1], VAR6[2], VAR2->VAR19, VAR2->VAR20, VAR9, VAR10, VAR2->VAR21, VAR2->VAR22.VAR23, 1);
    if (VAR8->VAR13 < VAR24)
    {
        VAR13 = FUN3(VAR8->VAR13, VAR9, VAR10);
        VAR2->VAR25.VAR26[VAR13](VAR6[0], VAR2->VAR19);
    }
    else
    {
        VAR5 *VAR27 = VAR6[0];
        VAR5 *VAR28 = VAR8->VAR29;
        uint8_t VAR30[4] = {127, 127, 127, 127};
        VAR5 *VAR31 = VAR27 - VAR2->VAR19 + 16;
        if (VAR10 && VAR9 == VAR2->VAR21 - 1)
        {
            VAR15 = VAR31[-1] * 0x01010101u;
            VAR31 = (VAR5 *)&VAR15;
        }
        if (VAR8->VAR32)
            FUN4(VAR4->VAR33);
        for (VAR12 = 0; VAR12 < 4; VAR12++)
        {
            VAR5 *VAR34 = VAR27 + 4 - VAR2->VAR19;
            for (VAR11 = 0; VAR11 < 4; VAR11++)
            {
                int copy = 0, VAR19 = VAR2->VAR19;
                VAR5 *VAR6 = VAR27 + 4 * VAR11;
                FUN5(4, VAR5, VAR35)
                [5 * 8];
                if ((VAR12 == 0 || VAR11 == 3) && VAR10 == 0)
                {
                    VAR34 = VAR30;
                }
                else if (VAR11 == 3)
                    VAR34 = VAR31;
                VAR13 = FUN6(VAR28[VAR11], VAR9 + VAR11, VAR10 + VAR12, &copy);
                if (copy)
                {
                    VAR6 = VAR35 + 12;
                    VAR19 = 8;
                    if (!(VAR10 + VAR12))
                    {
                        VAR35[3] = 127U;
                        FUN7(VAR35 + 4, 127U * 0x01010101U);
                    }
                    else
                    {
                        FUN8(VAR35 + 4, VAR27 + 4 * VAR11 - VAR2->VAR19);
                        if (!(VAR9 + VAR11))
                        {
                            VAR35[3] = 129U;
                        }
                        else
                        {
                            VAR35[3] = VAR27[4 * VAR11 - VAR2->VAR19 - 1];
                        }
                    }
                    if (!(VAR9 + VAR11))
                    {
                        VAR35[11] = VAR35[19] = VAR35[27] = VAR35[35] = 129U;
                    }
                    else
                    {
                        VAR35[11] = VAR27[4 * VAR11 - 1];
                        VAR35[19] = VAR27[4 * VAR11 + VAR2->VAR19 - 1];
                        VAR35[27] = VAR27[4 * VAR11 + VAR2->VAR19 * 2 - 1];
                        VAR35[35] = VAR27[4 * VAR11 + VAR2->VAR19 * 3 - 1];
                    }
                }
                VAR2->VAR25.VAR36[VAR13](VAR6, VAR34, VAR19);
                if (copy)
                {
                    FUN8(VAR27 + 4 * VAR11, VAR35 + 12);
                    FUN8(VAR27 + 4 * VAR11 + VAR2->VAR19, VAR35 + 20);
                    FUN8(VAR27 + 4 * VAR11 + VAR2->VAR19 * 2, VAR35 + 28);
                    FUN8(VAR27 + 4 * VAR11 + VAR2->VAR19 * 3, VAR35 + 36);
                }
                VAR14 = VAR4->VAR33[VAR12][VAR11];
                if (VAR14)
                {
                    if (VAR14 == 1)
                        VAR2->VAR37.FUN9(VAR27 + 4 * VAR11, VAR4->VAR38[VAR12][VAR11], VAR2->VAR19);
                    else
                        VAR2->VAR37.FUN10(VAR27 + 4 * VAR11, VAR4->VAR38[VAR12][VAR11], VAR2->VAR19);
                }
                VAR34 += 4;
            }
            VAR27 += 4 * VAR2->VAR19;
            VAR28 += 4;
        }
    }
    VAR13 = FUN3(VAR8->VAR39, VAR9, VAR10);
    VAR2->VAR25.VAR40[VAR13](VAR6[1], VAR2->VAR20);
    VAR2->VAR25.VAR40[VAR13](VAR6[2], VAR2->VAR20);
    if (VAR10 && (VAR2->VAR16 || !VAR10) && VAR4->VAR17 == 0)
        FUN2(VAR2->VAR18[VAR9 + 1], VAR6[0], VAR6[1], VAR6[2], VAR2->VAR19, VAR2->VAR20, VAR9, VAR10, VAR2->VAR21, VAR2->VAR22.VAR23, 0);
}