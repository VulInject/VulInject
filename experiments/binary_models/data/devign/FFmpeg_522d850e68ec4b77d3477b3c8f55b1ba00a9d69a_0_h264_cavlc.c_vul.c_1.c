static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, const VAR10 *VAR11, const VAR12 *VAR13, int VAR14)
{
    static const int VAR15[17] = {0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int VAR16[16];
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    if (VAR14 <= 8)
    {
        if (VAR14 == 4)
            VAR18 = FUN2(VAR6, VAR23.VAR24, VAR25, 1);
        else
            VAR18 = FUN2(VAR6, VAR26.VAR24, VAR27, 1);
        VAR19 = VAR18 >> 2;
    }
    else
    {
        if (VAR9 >= VAR28)
        {
            VAR19 = FUN3(VAR2, VAR4, (VAR9 - VAR28) * 16);
            VAR18 = FUN2(VAR6, VAR29[VAR15[VAR19]].VAR24, VAR30, 2);
            VAR19 = VAR18 >> 2;
        }
        else
        {
            VAR19 = FUN3(VAR2, VAR4, VAR9);
            VAR18 = FUN2(VAR6, VAR29[VAR15[VAR19]].VAR24, VAR30, 2);
            VAR19 = VAR18 >> 2;
        }
    }
    VAR4->VAR31[VAR32[VAR9]] = VAR19;
    if (VAR19 == 0)
        return 0;
    if (VAR19 > (unsigned)VAR14)
    {
        FUN4(VAR2->VAR33, VAR34, "", VAR4->VAR35, VAR4->VAR36, VAR19);
        return -1;
    }
    VAR21 = VAR18 & 3;
    FUN5(VAR2->VAR33, "", VAR21, VAR19);
    assert(VAR19 <= 16);
    VAR20 = FUN6(VAR6, 3);
    FUN7(VAR6, VAR21);
    VAR16[0] = 1 - ((VAR20 & 4) >> 1);
    VAR16[1] = 1 - ((VAR20 & 2));
    VAR16[2] = 1 - ((VAR20 & 1) << 1);
    if (VAR21 < VAR19)
    {
        int VAR37, VAR38;
        int VAR39 = VAR19 > 10 & VAR21 < 3;
        int VAR40 = FUN6(VAR6, VAR41);
        int VAR42 = VAR43[VAR39][VAR40][0];
        FUN7(VAR6, VAR43[VAR39][VAR40][1]);
        if (VAR42 >= 100)
        {
            VAR38 = VAR42 - 100;
            if (VAR38 == VAR41)
                VAR38 += FUN8(VAR6);
            if (VAR38 < 14)
            {
                if (VAR39)
                    VAR42 = (VAR38 << 1) + FUN9(VAR6);
                else
                    VAR42 = VAR38;
            }
            else if (VAR38 == 14)
            {
                if (VAR39)
                    VAR42 = (VAR38 << 1) + FUN9(VAR6);
                else
                    VAR42 = VAR38 + FUN10(VAR6, 4);
            }
            else
            {
                VAR42 = 30 + FUN10(VAR6, VAR38 - 3);
                if (VAR38 >= 16)
                {
                    if (VAR38 > 25 + 3)
                    {
                        FUN4(VAR2->VAR33, VAR34, "");
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
            int VAR40 = FUN6(VAR6, VAR41);
            VAR42 = VAR43[VAR39][VAR40][0];
            FUN7(VAR6, VAR43[VAR39][VAR40][1]);
            if (VAR42 >= 100)
            {
                VAR38 = VAR42 - 100;
                if (VAR38 == VAR41)
                {
                    VAR38 += FUN8(VAR6);
                }
                if (VAR38 < 15)
                {
                    VAR42 = (VAR38 << VAR39) + FUN10(VAR6, VAR39);
                }
                else
                {
                    VAR42 = (15 << VAR39) + FUN10(VAR6, VAR38 - 3);
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
    if (VAR19 == VAR14)
        VAR17 = 0;
    else
    {
        if (VAR14 <= 8)
        {
            if (VAR14 == 4)
                VAR17 = FUN2(VAR6, VAR46[VAR19 - 1].VAR24, VAR47, 1);
            else
                VAR17 = FUN2(VAR6, VAR48[VAR19 - 1].VAR24, VAR49, 1);
        }
        else
        {
            VAR17 = FUN2(VAR6, VAR50[VAR19 - 1].VAR24, VAR51, 1);
        }
    }
    VAR11 += VAR17 + VAR19 - 1;
    if (VAR9 >= VAR28)
    {
        ((VAR52 *)VAR8)[*VAR11] = VAR16[0];
        for (VAR20 = 1; VAR20 < VAR19 && VAR17 > 0; VAR20++)
        {
            if (VAR17 < 7)
                VAR22 = FUN2(VAR6, VAR53[VAR17 - 1].VAR24, VAR54, 1);
            else
                VAR22 = FUN2(VAR6, VAR55.VAR24, VAR56, 2);
            VAR17 -= VAR22;
            VAR11 -= 1 + VAR22;
            ((VAR52 *)VAR8)[*VAR11] = VAR16[VAR20];
        }
        for (; VAR20 < VAR19; VAR20++)
        {
            VAR11--;
            ((VAR52 *)VAR8)[*VAR11] = VAR16[VAR20];
        }
    }
    else
    {
        ((VAR52 *)VAR8)[*VAR11] = ((int)(VAR16[0] * VAR13[*VAR11] + 32)) >> 6;
        for (VAR20 = 1; VAR20 < VAR19 && VAR17 > 0; VAR20++)
        {
            if (VAR17 < 7)
                VAR22 = FUN2(VAR6, VAR53[VAR17 - 1].VAR24, VAR54, 1);
            else
                VAR22 = FUN2(VAR6, VAR55.VAR24, VAR56, 2);
            VAR17 -= VAR22;
            VAR11 -= 1 + VAR22;
            ((VAR52 *)VAR8)[*VAR11] = ((int)(VAR16[VAR20] * VAR13[*VAR11] + 32)) >> 6;
        }
        for (; VAR20 < VAR19; VAR20++)
        {
            VAR11--;
            ((VAR52 *)VAR8)[*VAR11] = ((int)(VAR16[VAR20] * VAR13[*VAR11] + 32)) >> 6;
        }
    }
    if (VAR17 < 0)
    {
        FUN4(VAR2->VAR33, VAR34, "", VAR4->VAR35, VAR4->VAR36);
        return VAR57;
    }
    if (VAR2->VAR58)
    {
        FUN11(VAR59)
    }
    else
    {
        FUN11(VAR7)
    }
    return 0;
}