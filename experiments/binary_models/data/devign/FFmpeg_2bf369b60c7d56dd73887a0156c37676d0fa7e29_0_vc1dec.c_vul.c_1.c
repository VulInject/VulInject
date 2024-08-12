static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9[2][2] = {{-1, -1}, {-1, -1}};
    VAR10 *VAR11[2][2];
    int VAR12[2], VAR13[2], VAR14[2], VAR15[2], VAR16;
    int VAR17[2];
    VAR18 *VAR19 = &VAR2->VAR19;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        VAR12[VAR5] = FUN2(VAR4->VAR20[VAR5][2], 0, VAR2->VAR21 - 1 << 16);
        VAR13[VAR5] = VAR4->VAR20[VAR5][0];
        if (VAR13[VAR5] != 1 << 16 || (VAR2->VAR21 << 16) - (VAR2->VAR22 << 16) - VAR12[VAR5])
            VAR13[VAR5] = FUN2(VAR13[VAR5], 0, ((VAR2->VAR21 << 16) - VAR12[VAR5] - 1) / VAR2->VAR22);
        VAR14[VAR5] = FUN2(VAR4->VAR20[VAR5][5], 0, VAR2->VAR23 - 1 << 16);
        VAR15[VAR5] = FUN2(VAR4->VAR20[VAR5][4], 0, ((VAR2->VAR23 << 16) - VAR14[VAR5]) / VAR2->VAR24);
    }
    VAR16 = FUN2(VAR4->VAR20[1][6], 0, (1 << 16) - 1);
    for (VAR6 = 0; VAR6 < (VAR19->VAR25 & VAR26 ? 1 : 3); VAR6++)
    {
        int VAR27 = VAR2->VAR22 >> !!VAR6;
        for (VAR7 = 0; VAR7 < VAR2->VAR24 >> !!VAR6; VAR7++)
        {
            VAR10 *VAR28 = VAR2->VAR29.VAR30[VAR6] + VAR2->VAR29.VAR31[VAR6] * VAR7;
            for (VAR8 = 0; VAR8 <= VAR2->VAR32; VAR8++)
            {
                VAR10 *VAR33 = VAR19->VAR34.VAR35.VAR30[VAR6];
                int VAR36 = VAR19->VAR34.VAR35.VAR31[VAR6];
                int VAR37 = VAR14[VAR8] + VAR15[VAR8] * VAR7;
                int VAR38 = VAR37 >> 16;
                VAR17[VAR8] = VAR37 & 0xFFFF;
                if (VAR8)
                {
                    VAR33 = VAR19->VAR39.VAR35.VAR30[VAR6];
                    VAR36 = VAR19->VAR39.VAR35.VAR31[VAR6];
                }
                if (!(VAR12[VAR8] & 0xFFFF) && VAR13[VAR8] == 1 << 16)
                {
                    VAR11[VAR8][0] = VAR33 + (VAR12[VAR8] >> 16) + VAR38 * VAR36;
                    if (VAR17[VAR8])
                        VAR11[VAR8][1] = VAR33 + (VAR12[VAR8] >> 16) + (VAR38 + 1) * VAR36;
                }
                else
                {
                    if (VAR9[VAR8][0] != VAR38)
                    {
                        if (VAR9[VAR8][1] == VAR38)
                        {
                            FUN3(VAR10 *, VAR2->VAR40[VAR8][0], VAR2->VAR40[VAR8][1]);
                            FUN3(int, VAR9[VAR8][0], VAR9[VAR8][1]);
                        }
                        else
                        {
                            VAR2->VAR41.FUN4(VAR2->VAR40[VAR8][0], VAR33 + VAR38 * VAR36, VAR12[VAR8], VAR13[VAR8], VAR27);
                            VAR9[VAR8][0] = VAR38;
                        }
                    }
                    if (VAR17[VAR8] && VAR9[VAR8][1] != VAR38 + 1)
                    {
                        VAR2->VAR41.FUN4(VAR2->VAR40[VAR8][1], VAR33 + (VAR38 + 1) * VAR36, VAR12[VAR8], VAR13[VAR8], VAR27);
                        VAR9[VAR8][1] = VAR38 + 1;
                    }
                    VAR11[VAR8][0] = VAR2->VAR40[VAR8][0];
                    VAR11[VAR8][1] = VAR2->VAR40[VAR8][1];
                }
            }
            if (!VAR2->VAR32)
            {
                if (VAR17[0])
                {
                    VAR2->VAR41.FUN5(VAR28, VAR11[0][0], VAR11[0][1], VAR17[0], VAR27);
                }
                else
                {
                    memcpy(VAR28, VAR11[0][0], VAR27);
                }
            }
            else
            {
                if (VAR17[0] && VAR17[1])
                {
                    VAR2->VAR41.FUN6(VAR28, VAR11[0][0], VAR11[0][1], VAR17[0], VAR11[1][0], VAR11[1][1], VAR17[1], VAR16, VAR27);
                }
                else if (VAR17[0])
                {
                    VAR2->VAR41.FUN7(VAR28, VAR11[0][0], VAR11[0][1], VAR17[0], VAR11[1][0], VAR16, VAR27);
                }
                else if (VAR17[1])
                {
                    VAR2->VAR41.FUN7(VAR28, VAR11[1][0], VAR11[1][1], VAR17[1], VAR11[0][0], (1 << 16) - 1 - VAR16, VAR27);
                }
                else
                {
                    VAR2->VAR41.FUN8(VAR28, VAR11[0][0], VAR11[1][0], VAR16, VAR27);
                }
            }
        }
        if (!VAR6)
        {
            for (VAR5 = 0; VAR5 < 2; VAR5++)
            {
                VAR12[VAR5] >>= 1;
                VAR14[VAR5] >>= 1;
            }
        }
    }
}