static void FUN1(unsigned char *VAR1, int VAR2, int *VAR3);
static void FUN2(unsigned char *VAR1, int VAR2, int *VAR3);
static void FUN3(VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    FUN4(VAR14, VAR15[64]);
    unsigned char *VAR16;
    unsigned char *VAR17;
    unsigned char *VAR18;
    int VAR2;
    int VAR19 = 0xdeadbeef, VAR20 = 0xdeadbeef;
    int VAR21, VAR22;
    int VAR23;
    VAR24 *VAR25;
    int VAR26;
    int VAR27;
    int VAR28;
    int VAR29;
    int VAR30 = VAR6 * VAR5->VAR31 * 6;
    int VAR32;
    if (VAR6 >= VAR5->VAR33)
        return;
    for (VAR26 = 0; VAR26 < 3; VAR26++)
    {
        if (VAR26 == 0)
        {
            VAR16 = VAR5->VAR34.VAR35[0];
            VAR17 = VAR5->VAR36.VAR35[0];
            VAR18 = VAR5->VAR37.VAR35[0];
            VAR2 = VAR5->VAR34.VAR38[0];
            if (!VAR5->VAR39)
                VAR2 = -VAR2;
            VAR21 = 7 * VAR5->VAR34.VAR38[0];
            VAR22 = VAR5->VAR40 * VAR5->VAR34.VAR38[0] + VAR5->VAR41 - 8;
            VAR8 = VAR6 * VAR42 * 2;
            VAR27 = VAR5->VAR41;
            VAR28 = VAR5->VAR40;
            VAR29 = VAR8 + VAR42 * 2;
            VAR11 = VAR5->VAR43[VAR30 + 0];
        }
        else if (VAR26 == 1)
        {
            VAR16 = VAR5->VAR34.VAR35[1];
            VAR17 = VAR5->VAR36.VAR35[1];
            VAR18 = VAR5->VAR37.VAR35[1];
            VAR2 = VAR5->VAR34.VAR38[1];
            if (!VAR5->VAR39)
                VAR2 = -VAR2;
            VAR21 = 7 * VAR5->VAR34.VAR38[1];
            VAR22 = (VAR5->VAR40 / 2) * VAR5->VAR34.VAR38[1] + (VAR5->VAR41 / 2) - 8;
            VAR8 = VAR6 * VAR42;
            VAR27 = VAR5->VAR41 / 2;
            VAR28 = VAR5->VAR40 / 2;
            VAR29 = VAR8 + VAR42;
            VAR11 = VAR5->VAR43[VAR30 + 4];
        }
        else
        {
            VAR16 = VAR5->VAR34.VAR35[2];
            VAR17 = VAR5->VAR36.VAR35[2];
            VAR18 = VAR5->VAR37.VAR35[2];
            VAR2 = VAR5->VAR34.VAR38[2];
            if (!VAR5->VAR39)
                VAR2 = -VAR2;
            VAR21 = 7 * VAR5->VAR34.VAR38[2];
            VAR22 = (VAR5->VAR40 / 2) * VAR5->VAR34.VAR38[2] + (VAR5->VAR41 / 2) - 8;
            VAR8 = VAR6 * VAR42;
            VAR27 = VAR5->VAR41 / 2;
            VAR28 = VAR5->VAR40 / 2;
            VAR29 = VAR8 + VAR42;
            VAR11 = VAR5->VAR43[VAR30 + 5];
        }
        VAR32 = VAR27 / VAR42;
        if (FUN5(VAR2) > 2048)
            return;
        for (; VAR8 < VAR29; VAR8 += 8)
        {
            for (VAR7 = 0; VAR7 < VAR27; VAR7 += 8, VAR11++)
            {
                if ((VAR11 < 0) || (VAR11 >= VAR5->VAR44))
                {
                    FUN6(VAR5->VAR45, VAR46, "", VAR11);
                    return;
                }
                if ((VAR5->VAR47[VAR11].VAR48 != VAR49) && !((VAR5->VAR45->VAR50 & VAR51) && VAR26))
                {
                    if ((VAR5->VAR47[VAR11].VAR48 == VAR52) || (VAR5->VAR47[VAR11].VAR48 == VAR53))
                        VAR25 = VAR18;
                    else
                        VAR25 = VAR17;
                    VAR25 += VAR5->VAR47[VAR11].VAR1;
                    VAR23 = 0;
                    if ((VAR5->VAR47[VAR11].VAR48 > VAR54) && (VAR5->VAR47[VAR11].VAR48 != VAR52))
                    {
                        int VAR55, VAR56;
                        VAR19 = VAR5->VAR47[VAR11].VAR19;
                        VAR20 = VAR5->VAR47[VAR11].VAR20;
                        if (VAR26)
                        {
                            VAR19 = (VAR19 >> 1) | (VAR19 & 1);
                            VAR20 = (VAR20 >> 1) | (VAR20 & 1);
                        }
                        VAR55 = (VAR19 >> 1) + VAR7;
                        VAR56 = (VAR20 >> 1) + VAR8;
                        if ((VAR19 == 127) || (VAR20 == 127))
                            FUN6(VAR5->VAR45, VAR46, "", VAR19, VAR20);
                        VAR23 = VAR19 & 0x01;
                        VAR25 += (VAR19 >> 1);
                        VAR23 |= (VAR20 & 0x01) << 1;
                        VAR25 += ((VAR20 >> 1) * VAR2);
                        if (VAR55 < 0 || VAR56 < 0 || VAR55 + 9 >= VAR27 || VAR56 + 9 >= VAR28)
                        {
                            VAR24 *VAR57 = VAR5->VAR58;
                            if (VAR2 < 0)
                                VAR57 -= 9 * VAR2;
                            else
                                VAR57 += 9 * VAR2;
                            FUN7(VAR57, VAR25, VAR2, 9, 9, VAR55, VAR56, VAR27, VAR28);
                            VAR25 = VAR57;
                        }
                    }
                    if (VAR5->VAR47[VAR11].VAR48 != VAR54)
                    {
                        if (VAR23 != 3)
                        {
                            VAR5->VAR59.VAR60[1][VAR23](VAR16 + VAR5->VAR47[VAR11].VAR1, VAR25, VAR2, 8);
                        }
                        else
                        {
                            int VAR61 = (VAR19 ^ VAR20) >> 31;
                            VAR5->VAR59.VAR62[1](VAR16 + VAR5->VAR47[VAR11].VAR1, VAR25 - VAR61, VAR25 + VAR2 + 1 + VAR61, VAR2, 8);
                        }
                        VAR13 = VAR5->VAR63[1][VAR26];
                    }
                    else
                    {
                        VAR13 = VAR5->VAR63[0][VAR26];
                    }
                    FUN8("", VAR11, VAR5->VAR47[VAR11].VAR48, FUN9(VAR11), VAR13[0]);
                    if (VAR5->VAR45->VAR64 == VAR65)
                    {
                        VAR66 *VAR67 = VAR5->VAR68 + VAR11;
                        memset(VAR15, 0, sizeof(VAR15));
                        while (VAR67->VAR69)
                        {
                            VAR15[VAR67->VAR70] = VAR67->VAR67 * VAR13[VAR67->VAR70];
                            VAR67 = VAR67->VAR69;
                        }
                    }
                    else
                    {
                        VAR66 *VAR67 = VAR5->VAR68 + VAR11;
                        memset(VAR15, 0, sizeof(VAR15));
                        while (VAR67->VAR69)
                        {
                            VAR15[VAR67->VAR70] = (VAR67->VAR67 * VAR13[VAR67->VAR70] + 2) >> 2;
                            VAR67 = VAR67->VAR69;
                        }
                    }
                    if (VAR5->VAR47[VAR11].VAR48 == VAR54)
                    {
                        if (VAR5->VAR45->VAR64 != VAR65)
                            VAR15[0] += 128 << 3;
                        VAR5->VAR59.FUN10(VAR16 + VAR5->VAR47[VAR11].VAR1, VAR2, VAR15);
                    }
                    else
                    {
                        VAR5->VAR59.FUN11(VAR16 + VAR5->VAR47[VAR11].VAR1, VAR2, VAR15);
                    }
                    FUN8("", (VAR5->VAR47[VAR11].VAR48 == VAR54) ? "" : "");
                    for (VAR9 = 0; VAR9 < 8; VAR9++)
                    {
                        for (VAR10 = 0; VAR10 < 8; VAR10++)
                        {
                            FUN8("", *(VAR16 + VAR5->VAR47[VAR11].VAR1 + (VAR9 * VAR2 + VAR10)));
                        }
                        FUN8("");
                    }
                    FUN8("");
                }
                else
                {
                    VAR5->VAR59.VAR71[1][0](VAR16 + VAR5->VAR47[VAR11].VAR1, VAR17 + VAR5->VAR47[VAR11].VAR1, VAR2, 8);
                }
                if ((VAR7 > 0) && ((VAR5->VAR47[VAR11].VAR48 != VAR49) || ((VAR5->VAR47[VAR11].VAR48 == VAR49) && (VAR5->VAR47[VAR11 - 1].VAR48 != VAR49))))
                {
                    FUN1(VAR16 + VAR5->VAR47[VAR11].VAR1 + 7 * VAR2, -VAR2, VAR5->VAR72 + 127);
                }
                if ((VAR8 > 0) && ((VAR5->VAR47[VAR11].VAR48 != VAR49) || ((VAR5->VAR47[VAR11].VAR48 == VAR49) && (VAR5->VAR47[VAR11 - VAR32].VAR48 != VAR49))))
                {
                    FUN2(VAR16 + VAR5->VAR47[VAR11].VAR1 - VAR2, -VAR2, VAR5->VAR72 + 127);
                }
            }
        }
    }
    FUN12();
}