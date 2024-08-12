static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6, VAR7;
    int VAR8;
    VAR9 *VAR10;
    DCTELEM __align16 VAR11[64];
    unsigned char *VAR12;
    unsigned char *VAR13;
    unsigned char *VAR14;
    int VAR15;
    int VAR16 = 0xdeadbeef, VAR17 = 0xdeadbeef;
    int VAR18, VAR19;
    int VAR20;
    VAR21 *VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    int VAR26;
    int VAR27 = VAR3 * VAR2->VAR28 * 6;
    int *VAR29 = VAR2->VAR30 + 127;
    int VAR31;
    if (VAR3 >= VAR2->VAR32)
        return;
    for (VAR23 = 0; VAR23 < 3; VAR23++)
    {
        if (VAR23 == 0)
        {
            VAR12 = VAR2->VAR33.VAR34[0];
            VAR13 = VAR2->VAR35.VAR34[0];
            VAR14 = VAR2->VAR36.VAR34[0];
            VAR15 = VAR2->VAR33.VAR37[0];
            if (!VAR2->VAR38)
                VAR15 = -VAR15;
            VAR18 = 7 * VAR2->VAR33.VAR37[0];
            VAR19 = VAR2->VAR39 * VAR2->VAR33.VAR37[0] + VAR2->VAR40 - 8;
            VAR5 = VAR3 * VAR41 * 2;
            VAR24 = VAR2->VAR40;
            VAR25 = VAR2->VAR39;
            VAR26 = VAR5 + VAR41 * 2;
            VAR8 = VAR2->VAR42[VAR27 + 0];
        }
        else if (VAR23 == 1)
        {
            VAR12 = VAR2->VAR33.VAR34[1];
            VAR13 = VAR2->VAR35.VAR34[1];
            VAR14 = VAR2->VAR36.VAR34[1];
            VAR15 = VAR2->VAR33.VAR37[1];
            if (!VAR2->VAR38)
                VAR15 = -VAR15;
            VAR18 = 7 * VAR2->VAR33.VAR37[1];
            VAR19 = (VAR2->VAR39 / 2) * VAR2->VAR33.VAR37[1] + (VAR2->VAR40 / 2) - 8;
            VAR5 = VAR3 * VAR41;
            VAR24 = VAR2->VAR40 / 2;
            VAR25 = VAR2->VAR39 / 2;
            VAR26 = VAR5 + VAR41;
            VAR8 = VAR2->VAR42[VAR27 + 4];
        }
        else
        {
            VAR12 = VAR2->VAR33.VAR34[2];
            VAR13 = VAR2->VAR35.VAR34[2];
            VAR14 = VAR2->VAR36.VAR34[2];
            VAR15 = VAR2->VAR33.VAR37[2];
            if (!VAR2->VAR38)
                VAR15 = -VAR15;
            VAR18 = 7 * VAR2->VAR33.VAR37[2];
            VAR19 = (VAR2->VAR39 / 2) * VAR2->VAR33.VAR37[2] + (VAR2->VAR40 / 2) - 8;
            VAR5 = VAR3 * VAR41;
            VAR24 = VAR2->VAR40 / 2;
            VAR25 = VAR2->VAR39 / 2;
            VAR26 = VAR5 + VAR41;
            VAR8 = VAR2->VAR42[VAR27 + 5];
        }
        VAR31 = VAR24 / 2;
        if (FUN2(VAR15) > 2048)
            return;
        for (; VAR5 < VAR26; VAR5 += 8)
        {
            for (VAR4 = 0; VAR4 < VAR24; VAR4 += 8, VAR8++)
            {
                if ((VAR8 < 0) || (VAR8 >= VAR2->VAR43))
                {
                    FUN3(VAR2->VAR44, VAR45, "", VAR8);
                    return;
                }
                if ((VAR2->VAR46[VAR8].VAR47 != VAR48) && !((VAR2->VAR44->VAR49 & VAR50) && VAR23))
                {
                    if ((VAR2->VAR46[VAR8].VAR47 == VAR51) || (VAR2->VAR46[VAR8].VAR47 == VAR52))
                        VAR22 = VAR14;
                    else
                        VAR22 = VAR13;
                    VAR22 += VAR2->VAR46[VAR8].VAR53;
                    VAR20 = 0;
                    if ((VAR2->VAR46[VAR8].VAR47 > VAR54) && (VAR2->VAR46[VAR8].VAR47 != VAR51))
                    {
                        int VAR55, VAR56;
                        VAR16 = VAR2->VAR46[VAR8].VAR16;
                        VAR17 = VAR2->VAR46[VAR8].VAR17;
                        if (VAR23)
                        {
                            VAR16 = (VAR16 >> 1) | (VAR16 & 1);
                            VAR17 = (VAR17 >> 1) | (VAR17 & 1);
                        }
                        VAR55 = (VAR16 >> 1) + VAR4;
                        VAR56 = (VAR17 >> 1) + VAR5;
                        if ((VAR16 == 127) || (VAR17 == 127))
                            FUN3(VAR2->VAR44, VAR45, "", VAR16, VAR17);
                        VAR20 = VAR16 & 0x01;
                        VAR22 += (VAR16 >> 1);
                        VAR20 |= (VAR17 & 0x01) << 1;
                        VAR22 += ((VAR17 >> 1) * VAR15);
                        if (VAR55 < 0 || VAR56 < 0 || VAR55 + 9 >= VAR24 || VAR56 + 9 >= VAR25)
                        {
                            VAR21 *VAR57 = VAR2->VAR58;
                            if (VAR15 < 0)
                                VAR57 -= 9 * VAR15;
                            else
                                VAR57 += 9 * VAR15;
                            FUN4(VAR57, VAR22, VAR15, 9, 9, VAR55, VAR56, VAR24, VAR25);
                            VAR22 = VAR57;
                        }
                    }
                    if (VAR2->VAR46[VAR8].VAR47 != VAR54)
                    {
                        if (VAR20 != 3)
                        {
                            VAR2->VAR59.VAR60[1][VAR20](VAR12 + VAR2->VAR46[VAR8].VAR53, VAR22, VAR15, 8);
                        }
                        else
                        {
                            int VAR61 = (VAR16 ^ VAR17) >> 31;
                            VAR2->VAR59.VAR62[1](VAR12 + VAR2->VAR46[VAR8].VAR53, VAR22 - VAR61, VAR22 + VAR15 + 1 + VAR61, VAR15, 8);
                        }
                        VAR10 = VAR2->VAR63;
                    }
                    else
                    {
                        if (VAR23 == 0)
                            VAR10 = VAR2->VAR64;
                        else
                            VAR10 = VAR2->VAR65;
                    }
                    FUN5("", VAR8, VAR2->VAR46[VAR8].VAR47, FUN6(VAR8), VAR10[0]);
                    if (VAR2->VAR44->VAR66 == VAR67)
                    {
                        VAR68 *VAR69 = VAR2->VAR70 + VAR8;
                        memset(VAR11, 0, sizeof(VAR11));
                        while (VAR69->VAR71)
                        {
                            VAR11[VAR69->VAR72] = VAR69->VAR69 * VAR10[VAR69->VAR72];
                            VAR69 = VAR69->VAR71;
                        }
                    }
                    else
                    {
                        VAR68 *VAR69 = VAR2->VAR70 + VAR8;
                        memset(VAR11, 0, sizeof(VAR11));
                        while (VAR69->VAR71)
                        {
                            VAR11[VAR69->VAR72] = (VAR69->VAR69 * VAR10[VAR69->VAR72] + 2) >> 2;
                            VAR69 = VAR69->VAR71;
                        }
                    }
                    if (VAR2->VAR46[VAR8].VAR47 == VAR54)
                    {
                        if (VAR2->VAR44->VAR66 != VAR67)
                            VAR11[0] += 128 << 3;
                        VAR2->VAR59.FUN7(VAR12 + VAR2->VAR46[VAR8].VAR53, VAR15, VAR11);
                    }
                    else
                    {
                        VAR2->VAR59.FUN8(VAR12 + VAR2->VAR46[VAR8].VAR53, VAR15, VAR11);
                    }
                    FUN5("", (VAR2->VAR46[VAR8].VAR47 == VAR54) ? "" : "");
                    for (VAR6 = 0; VAR6 < 8; VAR6++)
                    {
                        for (VAR7 = 0; VAR7 < 8; VAR7++)
                        {
                            FUN5("", *(VAR12 + VAR2->VAR46[VAR8].VAR53 + (VAR6 * VAR15 + VAR7)));
                        }
                        FUN5("");
                    }
                    FUN5("");
                }
                else
                {
                    VAR2->VAR59.VAR73[1][0](VAR12 + VAR2->VAR46[VAR8].VAR53, VAR13 + VAR2->VAR46[VAR8].VAR53, VAR15, 8);
                }
                if ((VAR4 > 0) && (VAR2->VAR46[VAR8].VAR47 != VAR48))
                {
                    FUN9(VAR12 + VAR2->VAR46[VAR8].VAR53 - 7 * VAR15, VAR15, VAR29);
                }
                if ((VAR5 > 0) && (VAR2->VAR46[VAR8].VAR47 != VAR48))
                {
                    FUN10(VAR12 + VAR2->VAR46[VAR8].VAR53 + VAR15, VAR15, VAR29);
                }
                if ((VAR4 < VAR24 - 1) && (VAR2->VAR46[VAR8].VAR47 != VAR48) && (VAR2->VAR46[VAR8 + 1].VAR47 == VAR48))
                {
                    FUN9(VAR12 + VAR2->VAR46[VAR8 + 1].VAR53 - 7 * VAR15, VAR15, VAR29);
                }
                if ((VAR5 < VAR25 - 1) && (VAR2->VAR46[VAR8].VAR47 != VAR48) && (VAR2->VAR46[VAR8 + VAR31].VAR47 == VAR48))
                {
                    FUN10(VAR12 + VAR2->VAR46[VAR8 + VAR31].VAR53 + VAR15, VAR15, VAR29);
                }
            }
        }
    }
    FUN11();
}