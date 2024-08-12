static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, const VAR10 *VAR11, int VAR12)
{
    VAR13 *const VAR14 = &VAR2->VAR14;
    static const int VAR15[17] = {0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int VAR16[16];
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    if (VAR7 == VAR25)
    {
        VAR19 = FUN2(VAR4, VAR26.VAR27, VAR28, 1);
        VAR20 = VAR19 >> 2;
    }
    else
    {
        if (VAR7 == VAR29)
        {
            VAR20 = FUN3(VAR2, 0);
            VAR19 = FUN2(VAR4, VAR30[VAR15[VAR20]].VAR27, VAR31, 2);
            VAR20 = VAR19 >> 2;
        }
        else
        {
            VAR20 = FUN3(VAR2, VAR7);
            VAR19 = FUN2(VAR4, VAR30[VAR15[VAR20]].VAR27, VAR31, 2);
            VAR20 = VAR19 >> 2;
            VAR2->VAR32[VAR33[VAR7]] = VAR20;
        }
    }
    if (VAR20 == 0)
        return 0;
    if (VAR20 > (unsigned)VAR12)
    {
        FUN4(VAR2->VAR14.VAR34, VAR35, "", VAR14->VAR36, VAR14->VAR37, VAR20);
        return -1;
    }
    VAR23 = VAR19 & 3;
    FUN5(VAR2->VAR14.VAR34, "", VAR23, VAR20);
    assert(VAR20 <= 16);
    VAR21 = FUN6(VAR4, 3);
    FUN7(VAR4, VAR23);
    VAR16[0] = 1 - ((VAR21 & 4) >> 1);
    VAR16[1] = 1 - ((VAR21 & 2));
    VAR16[2] = 1 - ((VAR21 & 1) << 1);
    if (VAR23 < VAR20)
    {
        int VAR38, VAR39;
        int VAR40 = VAR20 > 10 & VAR23 < 3;
        int VAR41 = FUN6(VAR4, VAR42);
        int VAR43 = VAR44[VAR40][VAR41][0];
        FUN7(VAR4, VAR44[VAR40][VAR41][1]);
        if (VAR43 >= 100)
        {
            VAR39 = VAR43 - 100;
            if (VAR39 == VAR42)
                VAR39 += FUN8(VAR4);
            if (VAR39 < 14)
            {
                if (VAR40)
                    VAR43 = (VAR39 << 1) + FUN9(VAR4);
                else
                    VAR43 = VAR39;
            }
            else if (VAR39 == 14)
            {
                if (VAR40)
                    VAR43 = (VAR39 << 1) + FUN9(VAR4);
                else
                    VAR43 = VAR39 + FUN10(VAR4, 4);
            }
            else
            {
                VAR43 = 30 + FUN10(VAR4, VAR39 - 3);
                if (VAR39 >= 16)
                {
                    if (VAR39 > 25 + 3)
                    {
                        FUN4(VAR2->VAR14.VAR34, VAR35, "");
                        return -1;
                    }
                    VAR43 += (1 << (VAR39 - 3)) - 4096;
                }
            }
            if (VAR23 < 3)
                VAR43 += 2;
            VAR40 = 2;
            VAR38 = -(VAR43 & 1);
            VAR16[VAR23] = (((2 + VAR43) >> 1) ^ VAR38) - VAR38;
        }
        else
        {
            VAR43 += ((VAR43 >> 31) | 1) & -(VAR23 < 3);
            VAR40 = 1 + (VAR43 + 3U > 6U);
            VAR16[VAR23] = VAR43;
        }
        for (VAR21 = VAR23 + 1; VAR21 < VAR20; VAR21++)
        {
            static const unsigned int VAR45[7] = {0, 3, 6, 12, 24, 48, VAR46};
            int VAR41 = FUN6(VAR4, VAR42);
            VAR43 = VAR44[VAR40][VAR41][0];
            FUN7(VAR4, VAR44[VAR40][VAR41][1]);
            if (VAR43 >= 100)
            {
                VAR39 = VAR43 - 100;
                if (VAR39 == VAR42)
                {
                    VAR39 += FUN8(VAR4);
                }
                if (VAR39 < 15)
                {
                    VAR43 = (VAR39 << VAR40) + FUN10(VAR4, VAR40);
                }
                else
                {
                    VAR43 = (15 << VAR40) + FUN10(VAR4, VAR39 - 3);
                    if (VAR39 >= 16)
                        VAR43 += (1 << (VAR39 - 3)) - 4096;
                }
                VAR38 = -(VAR43 & 1);
                VAR43 = (((2 + VAR43) >> 1) ^ VAR38) - VAR38;
            }
            VAR16[VAR21] = VAR43;
            VAR40 += VAR45[VAR40] + VAR43 > 2U * VAR45[VAR40];
        }
    }
    if (VAR20 == VAR12)
        VAR17 = 0;
    else
    {
        if (VAR7 == VAR25)
            VAR17 = FUN2(VAR4, (VAR47 - 1)[VAR20].VAR27, VAR48, 1);
        else
            VAR17 = FUN2(VAR4, (VAR49 - 1)[VAR20].VAR27, VAR50, 1);
    }
    VAR18 = VAR17 + VAR20 - 1;
    VAR22 = VAR9[VAR18];
    if (VAR7 > 24)
    {
        VAR6[VAR22] = VAR16[0];
        for (VAR21 = 1; VAR21 < VAR20; VAR21++)
        {
            if (VAR17 <= 0)
                VAR24 = 0;
            else if (VAR17 < 7)
            {
                VAR24 = FUN2(VAR4, (VAR51 - 1)[VAR17].VAR27, VAR52, 1);
            }
            else
            {
                VAR24 = FUN2(VAR4, VAR53.VAR27, VAR54, 2);
            }
            VAR17 -= VAR24;
            VAR18 -= 1 + VAR24;
            VAR22 = VAR9[VAR18];
            VAR6[VAR22] = VAR16[VAR21];
        }
    }
    else
    {
        VAR6[VAR22] = (VAR16[0] * VAR11[VAR22] + 32) >> 6;
        for (VAR21 = 1; VAR21 < VAR20; VAR21++)
        {
            if (VAR17 <= 0)
                VAR24 = 0;
            else if (VAR17 < 7)
            {
                VAR24 = FUN2(VAR4, (VAR51 - 1)[VAR17].VAR27, VAR52, 1);
            }
            else
            {
                VAR24 = FUN2(VAR4, VAR53.VAR27, VAR54, 2);
            }
            VAR17 -= VAR24;
            VAR18 -= 1 + VAR24;
            VAR22 = VAR9[VAR18];
            VAR6[VAR22] = (VAR16[VAR21] * VAR11[VAR22] + 32) >> 6;
        }
    }
    if (VAR17 < 0)
    {
        FUN4(VAR2->VAR14.VAR34, VAR35, "", VAR14->VAR36, VAR14->VAR37);
        return -1;
    }
    return 0;
}