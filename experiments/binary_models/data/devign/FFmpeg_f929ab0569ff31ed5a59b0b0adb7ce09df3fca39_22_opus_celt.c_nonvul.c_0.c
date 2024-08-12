static unsigned int FUN1(VAR1 *VAR2, VAR3 *VAR4, const int VAR5, float *VAR6, float *VAR7, int VAR8, int VAR9, unsigned int VAR10, float *VAR11, int VAR12, float *VAR13, int VAR14, float VAR15, float *VAR16, int VAR17)
{
    const VAR18 *VAR19;
    int VAR20, VAR21;
    int VAR22 = 0, VAR23 = 0;
    unsigned int VAR24 = VAR8;
    int VAR25;
    int VAR26;
    int VAR27 = VAR10;
    int VAR28 = 0;
    int VAR29 = 0;
    int VAR30 = 0;
    float VAR31 = 0, VAR32 = 0;
    int VAR33 = (VAR27 == 1);
    unsigned int VAR34 = 0;
    VAR26 = VAR25 = VAR8 / VAR10;
    VAR21 = VAR20 = (VAR7 != NULL);
    if (VAR8 == 1)
    {
        int VAR35;
        float *VAR36 = VAR6;
        for (VAR35 = 0; VAR35 <= VAR20; VAR35++)
        {
            int VAR37 = 0;
            if (VAR2->VAR38 >= 1 << 3)
            {
                VAR37 = FUN2(VAR4, 1);
                VAR2->VAR38 -= 1 << 3;
                VAR9 -= 1 << 3;
            }
            VAR36[0] = VAR37 ? -1.0f : 1.0f;
            VAR36 = VAR7;
        }
        if (VAR13)
            VAR13[0] = VAR6[0];
        return 1;
    }
    if (!VAR20 && VAR14 == 0)
    {
        int VAR39 = VAR2->VAR39[VAR5];
        int VAR40;
        if (VAR39 > 0)
            VAR29 = VAR39;
        if (VAR11 && (VAR29 || ((VAR25 & 1) == 0 && VAR39 < 0) || VAR27 > 1))
        {
            int VAR41;
            for (VAR41 = 0; VAR41 < VAR8; VAR41++)
                VAR16[VAR41] = VAR11[VAR41];
            VAR11 = VAR16;
        }
        for (VAR40 = 0; VAR40 < VAR29; VAR40++)
        {
            if (VAR11)
                FUN3(VAR11, VAR8 >> VAR40, 1 << VAR40);
            VAR17 = VAR42[VAR17 & 0xF] | VAR42[VAR17 >> 4] << 2;
        }
        VAR10 >>= VAR29;
        VAR25 <<= VAR29;
        while ((VAR25 & 1) == 0 && VAR39 < 0)
        {
            if (VAR11)
                FUN3(VAR11, VAR25, VAR10);
            VAR17 |= VAR17 << VAR10;
            VAR10 <<= 1;
            VAR25 >>= 1;
            VAR28++;
            VAR39++;
        }
        VAR27 = VAR10;
        VAR26 = VAR25;
        if (VAR27 > 1 && VAR11)
            FUN4(VAR2->VAR43, VAR11, VAR25 >> VAR29, VAR27 << VAR29, VAR33);
    }
    VAR19 = VAR44 + VAR45[(VAR12 + 1) * VAR46 + VAR5];
    if (!VAR20 && VAR12 >= 0 && VAR9 > VAR19[VAR19[0]] + 12 && VAR8 > 2)
    {
        VAR8 >>= 1;
        VAR7 = VAR6 + VAR8;
        VAR21 = 1;
        VAR12 -= 1;
        if (VAR10 == 1)
            VAR17 = (VAR17 & 1) | (VAR17 << 1);
        VAR10 = (VAR10 + 1) >> 1;
    }
    if (VAR21)
    {
        int VAR47;
        int VAR48 = 0;
        int VAR49, VAR50, VAR51;
        int VAR52;
        int VAR53;
        int VAR54;
        int VAR55;
        int VAR56;
        VAR53 = VAR57[VAR5] + VAR12 * 8;
        VAR54 = (VAR53 >> 1) - (VAR20 && VAR8 == 2 ? VAR58 : VAR59);
        VAR47 = (VAR20 && VAR5 >= VAR2->VAR60) ? 1 : FUN5(VAR8, VAR9, VAR54, VAR53, VAR20);
        VAR56 = FUN6(VAR4);
        if (VAR47 != 1)
        {
            if (VAR20 && VAR8 > 2)
                VAR48 = FUN7(VAR4, VAR47 / 2);
            else if (VAR20 || VAR27 > 1)
                VAR48 = FUN8(VAR4, VAR47 + 1);
            else
                VAR48 = FUN9(VAR4, VAR47);
            VAR48 = VAR48 * 16384 / VAR47;
        }
        else if (VAR20)
        {
            VAR30 = (VAR9 > 2 << 3 && VAR2->VAR38 > 2 << 3) ? FUN10(VAR4, 2) : 0;
            VAR48 = 0;
        }
        VAR52 = FUN6(VAR4) - VAR56;
        VAR9 -= VAR52;
        VAR55 = VAR17;
        if (VAR48 == 0)
        {
            VAR22 = 32767;
            VAR23 = 0;
            VAR17 &= (1 << VAR10) - 1;
            VAR51 = -16384;
        }
        else if (VAR48 == 16384)
        {
            VAR22 = 0;
            VAR23 = 32767;
            VAR17 &= ((1 << VAR10) - 1) << VAR10;
            VAR51 = 16384;
        }
        else
        {
            VAR22 = FUN11(VAR48);
            VAR23 = FUN11(16384 - VAR48);
            VAR51 = FUN12((VAR8 - 1) << 7, FUN13(VAR23, VAR22));
        }
        VAR31 = VAR22 / 32768.0f;
        VAR32 = VAR23 / 32768.0f;
        if (VAR8 == 2 && VAR20)
        {
            int VAR61;
            int VAR37 = 0;
            float VAR62;
            float *VAR63, *VAR64;
            VAR49 = VAR9;
            VAR50 = (VAR48 != 0 && VAR48 != 16384) ? 1 << 3 : 0;
            VAR49 -= VAR50;
            VAR61 = (VAR48 > 8192);
            VAR2->VAR38 -= VAR52 + VAR50;
            VAR63 = VAR61 ? VAR7 : VAR6;
            VAR64 = VAR61 ? VAR6 : VAR7;
            if (VAR50)
                VAR37 = FUN2(VAR4, 1);
            VAR37 = 1 - 2 * VAR37;
            VAR34 = FUN1(VAR2, VAR4, VAR5, VAR63, NULL, VAR8, VAR49, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR55);
            VAR64[0] = -VAR37 * VAR63[1];
            VAR64[1] = VAR37 * VAR63[0];
            VAR6[0] *= VAR31;
            VAR6[1] *= VAR31;
            VAR7[0] *= VAR32;
            VAR7[1] *= VAR32;
            VAR62 = VAR6[0];
            VAR6[0] = VAR62 - VAR7[0];
            VAR7[0] = VAR62 + VAR7[0];
            VAR62 = VAR6[1];
            VAR6[1] = VAR62 - VAR7[1];
            VAR7[1] = VAR62 + VAR7[1];
        }
        else
        {
            float *VAR65 = NULL;
            float *VAR66 = NULL;
            int VAR67 = 0;
            int VAR68;
            if (VAR27 > 1 && !VAR20 && (VAR48 & 0x3fff))
            {
                if (VAR48 > 8192)
                    VAR51 -= VAR51 >> (4 - VAR12);
                else
                    VAR51 = FUN14(0, VAR51 + (VAR8 << 3 >> (5 - VAR12)));
            }
            VAR49 = FUN15((VAR9 - VAR51) / 2, 0, VAR9);
            VAR50 = VAR9 - VAR49;
            VAR2->VAR38 -= VAR52;
            if (VAR11 && !VAR20)
                VAR65 = VAR11 + VAR8;
            if (VAR20)
                VAR66 = VAR13;
            else
                VAR67 = VAR14 + 1;
            VAR68 = VAR2->VAR38;
            if (VAR49 >= VAR50)
            {
                VAR34 = FUN1(VAR2, VAR4, VAR5, VAR6, NULL, VAR8, VAR49, VAR10, VAR11, VAR12, VAR66, VAR67, VAR20 ? 1.0f : (VAR15 * VAR31), VAR16, VAR17);
                VAR68 = VAR49 - (VAR68 - VAR2->VAR38);
                if (VAR68 > 3 << 3 && VAR48 != 0)
                    VAR50 += VAR68 - (3 << 3);
                VAR34 |= FUN1(VAR2, VAR4, VAR5, VAR7, NULL, VAR8, VAR50, VAR10, VAR65, VAR12, NULL, VAR67, VAR15 * VAR32, NULL, VAR17 >> VAR10) << ((VAR27 >> 1) & (VAR20 - 1));
            }
            else
            {
                VAR34 = FUN1(VAR2, VAR4, VAR5, VAR7, NULL, VAR8, VAR50, VAR10, VAR65, VAR12, NULL, VAR67, VAR15 * VAR32, NULL, VAR17 >> VAR10) << ((VAR27 >> 1) & (VAR20 - 1));
                VAR68 = VAR50 - (VAR68 - VAR2->VAR38);
                if (VAR68 > 3 << 3 && VAR48 != 16384)
                    VAR49 += VAR68 - (3 << 3);
                VAR34 |= FUN1(VAR2, VAR4, VAR5, VAR6, NULL, VAR8, VAR49, VAR10, VAR11, VAR12, VAR66, VAR67, VAR20 ? 1.0f : (VAR15 * VAR31), VAR16, VAR17);
            }
        }
    }
    else
    {
        unsigned int VAR69 = FUN16(VAR19, VAR9);
        unsigned int VAR70 = FUN17(VAR19, VAR69);
        VAR2->VAR38 -= VAR70;
        while (VAR2->VAR38 < 0 && VAR69 > 0)
        {
            VAR2->VAR38 += VAR70;
            VAR70 = FUN17(VAR19, --VAR69);
            VAR2->VAR38 -= VAR70;
        }
        if (VAR69 != 0)
        {
            VAR34 = FUN18(VAR4, VAR6, VAR8, (VAR69 < 8) ? VAR69 : (8 + (VAR69 & 7)) << ((VAR69 >> 3) - 1), VAR2->VAR71, VAR10, VAR15);
        }
        else
        {
            int VAR41;
            unsigned int VAR72 = (1 << VAR10) - 1;
            VAR17 &= VAR72;
            if (!VAR17)
            {
                for (VAR41 = 0; VAR41 < VAR8; VAR41++)
                    VAR6[VAR41] = 0.0f;
            }
            else
            {
                if (!VAR11)
                {
                    for (VAR41 = 0; VAR41 < VAR8; VAR41++)
                        VAR6[VAR41] = (((VAR73)FUN19(VAR2)) >> 20);
                    VAR34 = VAR72;
                }
                else
                {
                    for (VAR41 = 0; VAR41 < VAR8; VAR41++)
                    {
                        VAR6[VAR41] = VAR11[VAR41] + (((FUN19(VAR2)) & 0x8000) ? 1.0f / 256 : -1.0f / 256);
                    }
                    VAR34 = VAR17;
                }
                FUN20(VAR6, VAR8, VAR15);
            }
        }
    }
    if (VAR20)
    {
        int VAR41;
        if (VAR8 != 2)
            FUN21(VAR6, VAR7, VAR31, VAR8);
        if (VAR30)
        {
            for (VAR41 = 0; VAR41 < VAR8; VAR41++)
                VAR7[VAR41] *= -1;
        }
    }
    else if (VAR14 == 0)
    {
        int VAR40;
        if (VAR27 > 1)
            FUN22(VAR2->VAR43, VAR6, VAR25 >> VAR29, VAR27 << VAR29, VAR33);
        VAR25 = VAR26;
        VAR10 = VAR27;
        for (VAR40 = 0; VAR40 < VAR28; VAR40++)
        {
            VAR10 >>= 1;
            VAR25 <<= 1;
            VAR34 |= VAR34 >> VAR10;
            FUN3(VAR6, VAR25, VAR10);
        }
        for (VAR40 = 0; VAR40 < VAR29; VAR40++)
        {
            VAR34 = VAR74[VAR34];
            FUN3(VAR6, VAR24 >> VAR40, 1 << VAR40);
        }
        VAR10 <<= VAR29;
        if (VAR13)
        {
            int VAR41;
            float VAR75 = FUN23(VAR24);
            for (VAR41 = 0; VAR41 < VAR24; VAR41++)
                VAR13[VAR41] = VAR75 * VAR6[VAR41];
        }
        VAR34 &= (1 << VAR10) - 1;
    }
    return VAR34;
}