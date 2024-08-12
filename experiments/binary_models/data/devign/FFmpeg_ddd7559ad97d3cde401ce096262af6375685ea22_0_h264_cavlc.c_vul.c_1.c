static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, const VAR10 *VAR11, int VAR12)
{
    VAR13 *const VAR14 = &VAR2->VAR14;
    static const int VAR15[17] = {0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int VAR16[16];
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    if (VAR12 <= 8)
    {
        if (VAR12 == 4)
            VAR18 = FUN2(VAR4, VAR23.VAR24, VAR25, 1);
        else
            VAR18 = FUN2(VAR4, VAR26.VAR24, VAR27, 1);
        VAR19 = VAR18 >> 2;
    }
    else
    {
        if (VAR7 >= VAR28)
        {
            VAR19 = FUN3(VAR2, (VAR7 - VAR28) * 16);
            VAR18 = FUN2(VAR4, VAR29[VAR15[VAR19]].VAR24, VAR30, 2);
            VAR19 = VAR18 >> 2;
        }
        else
        {
            VAR19 = FUN3(VAR2, VAR7);
            VAR18 = FUN2(VAR4, VAR29[VAR15[VAR19]].VAR24, VAR30, 2);
            VAR19 = VAR18 >> 2;
        }
    }
    VAR2->VAR31[VAR32[VAR7]] = VAR19;
    if (VAR19 == 0)
        return 0;
    if (VAR19 > (unsigned)VAR12)
    {
        FUN4(VAR2->VAR14.VAR33, VAR34, "", VAR14->VAR35, VAR14->VAR36, VAR19);
        return -1;
    }
    VAR21 = VAR18 & 3;
    FUN5(VAR2->VAR14.VAR33, "", VAR21, VAR19);
    assert(VAR19 <= 16);
    VAR20 = FUN6(VAR4, 3);
    FUN7(VAR4, VAR21);
    VAR16[0] = 1 - ((VAR20 & 4) >> 1);
    VAR16[1] = 1 - ((VAR20 & 2));
    VAR16[2] = 1 - ((VAR20 & 1) << 1);
    if (VAR21 < VAR19)
    {
        int VAR37, VAR38;
        int VAR39 = VAR19 > 10 & VAR21 < 3;
        int VAR40 = FUN6(VAR4, VAR41);
        int VAR42 = VAR43[VAR39][VAR40][0];
        FUN7(VAR4, VAR43[VAR39][VAR40][1]);
        if (VAR42 >= 100)
        {
            VAR38 = VAR42 - 100;
            if (VAR38 == VAR41)
                VAR38 += FUN8(VAR4);
            if (VAR38 < 14)
            {
                if (VAR39)
                    VAR42 = (VAR38 << 1) + FUN9(VAR4);
                else
                    VAR42 = VAR38;
            }
            else if (VAR38 == 14)
            {
                if (VAR39)
                    VAR42 = (VAR38 << 1) + FUN9(VAR4);
                else
                    VAR42 = VAR38 + FUN10(VAR4, 4);
            }
            else
            {
                VAR42 = 30 + FUN10(VAR4, VAR38 - 3);
                if (VAR38 >= 16)
                {
                    if (VAR38 > 25 + 3)
                    {
                        FUN4(VAR2->VAR14.VAR33, VAR34, "");
                        return -1;
                    }
                    VAR42 += (1 << (VAR38 - 3)) - 4096;
                }
            }
            if (VAR21 < 3)
                VAR42 += 2;
            VAR39 = 2;
            VAR37 = -(VAR42 & 1);
            VAR16[VAR21] = (((2 + VAR42) >> 1) ^ VAR37) - VAR37;
        }
        else
        {
            VAR42 += ((VAR42 >> 31) | 1) & -(VAR21 < 3);
            VAR39 = 1 + (VAR42 + 3U > 6U);
            VAR16[VAR21] = VAR42;
        }
        for (VAR20 = VAR21 + 1; VAR20 < VAR19; VAR20++)
        {
            static const unsigned int VAR44[7] = {0, 3, 6, 12, 24, 48, VAR45};
            int VAR40 = FUN6(VAR4, VAR41);
            VAR42 = VAR43[VAR39][VAR40][0];
            FUN7(VAR4, VAR43[VAR39][VAR40][1]);
            if (VAR42 >= 100)
            {
                VAR38 = VAR42 - 100;
                if (VAR38 == VAR41)
                {
                    VAR38 += FUN8(VAR4);
                }
                if (VAR38 < 15)
                {
                    VAR42 = (VAR38 << VAR39) + FUN10(VAR4, VAR39);
                }
                else
                {
                    VAR42 = (15 << VAR39) + FUN10(VAR4, VAR38 - 3);
                    if (VAR38 >= 16)
                        VAR42 += (1 << (VAR38 - 3)) - 4096;
                }
                VAR37 = -(VAR42 & 1);
                VAR42 = (((2 + VAR42) >> 1) ^ VAR37) - VAR37;
            }
            VAR16[VAR20] = VAR42;
            VAR39 += VAR44[VAR39] + VAR42 > 2U * VAR44[VAR39];
        }
    }
    if (VAR19 == VAR12)
        VAR17 = 0;
    else
    {
        if (VAR12 <= 8)
        {
            if (VAR12 == 4)
                VAR17 = FUN2(VAR4, VAR46[VAR19 - 1].VAR24, VAR47, 1);
            else
                VAR17 = FUN2(VAR4, VAR48[VAR19 - 1].VAR24, VAR49, 1);
        }
        else
        {
            VAR17 = FUN2(VAR4, VAR50[VAR19 - 1].VAR24, VAR51, 1);
        }
    }
    VAR9 += VAR17 + VAR19 - 1;
    if (VAR7 >= VAR28)
    {
        ((VAR52 *)VAR6)[*VAR9] = VAR16[0];
        for (VAR20 = 1; VAR20 < VAR19 && VAR17 > 0; VAR20++)
        {
            if (VAR17 < 7)
                VAR22 = FUN2(VAR4, VAR53[VAR17 - 1].VAR24, VAR54, 1);
            else
                VAR22 = FUN2(VAR4, VAR55.VAR24, VAR56, 2);
            VAR17 -= VAR22;
            VAR9 -= 1 + VAR22;
            ((VAR52 *)VAR6)[*VAR9] = VAR16[VAR20];
        }
        for (; VAR20 < VAR19; VAR20++)
        {
            VAR9--;
            ((VAR52 *)VAR6)[*VAR9] = VAR16[VAR20];
        }
    }
    else
    {
        ((VAR52 *)VAR6)[*VAR9] = ((int)(VAR16[0] * VAR11[*VAR9] + 32)) >> 6;
        for (VAR20 = 1; VAR20 < VAR19 && VAR17 > 0; VAR20++)
        {
            if (VAR17 < 7)
                VAR22 = FUN2(VAR4, VAR53[VAR17 - 1].VAR24, VAR54, 1);
            else
                VAR22 = FUN2(VAR4, VAR55.VAR24, VAR56, 2);
            VAR17 -= VAR22;
            VAR9 -= 1 + VAR22;
            ((VAR52 *)VAR6)[*VAR9] = ((int)(VAR16[VAR20] * VAR11[*VAR9] + 32)) >> 6;
        }
        for (; VAR20 < VAR19; VAR20++)
        {
            VAR9--;
            ((VAR52 *)VAR6)[*VAR9] = ((int)(VAR16[VAR20] * VAR11[*VAR9] + 32)) >> 6;
        }
    }
    if (VAR2->VAR57)
    {
        FUN11(VAR58)
    }
    else
    {
        FUN11(VAR59)
    }
    if (VAR17 < 0)
    {
        FUN4(VAR2->VAR14.VAR33, VAR34, "", VAR14->VAR35, VAR14->VAR36);
        return -1;
    }
    return 0;
}