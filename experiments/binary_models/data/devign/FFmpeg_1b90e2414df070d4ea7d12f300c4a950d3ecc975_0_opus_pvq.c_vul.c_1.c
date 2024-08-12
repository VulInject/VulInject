VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, const int VAR6, float *VAR7, float *VAR8, int VAR9, int VAR10, uint32_t VAR11, float *VAR12, int VAR13, float *VAR14, int VAR15, float VAR16, float *VAR17, int VAR18)
{
    const VAR19 *VAR20;
    int VAR21, VAR22;
    int VAR23 = 0, VAR24 = 0;
    int VAR25;
    int VAR26 = VAR11;
    int VAR27 = 0;
    int VAR28 = 0;
    int VAR29 = 0;
    float VAR30 = 0, VAR31 = 0;
    int VAR32 = (VAR26 == 1);
    uint32_t VAR33 = 0;
    VAR22 = VAR21 = (VAR8 != NULL);
    if (VAR9 == 1)
    {
        int VAR34;
        float *VAR35 = VAR7;
        for (VAR34 = 0; VAR34 <= VAR21; VAR34++)
        {
            if (VAR3->VAR36 >= 1 << 3)
            {
                FUN2(VAR5, VAR35[0] < 0, 1);
                VAR3->VAR36 -= 1 << 3;
                VAR10 -= 1 << 3;
            }
            VAR35 = VAR8;
        }
        if (VAR14)
            VAR14[0] = VAR7[0];
        return 1;
    }
    if (!VAR21 && VAR15 == 0)
    {
        int VAR37 = VAR3->VAR37[VAR6];
        int VAR38;
        if (VAR37 > 0)
            VAR28 = VAR37;
        if (VAR12 && (VAR28 || ((VAR25 & 1) == 0 && VAR37 < 0) || VAR26 > 1))
        {
            int VAR39;
            for (VAR39 = 0; VAR39 < VAR9; VAR39++)
                VAR17[VAR39] = VAR12[VAR39];
            VAR12 = VAR17;
        }
        for (VAR38 = 0; VAR38 < VAR28; VAR38++)
        {
            FUN3(VAR7, VAR9 >> VAR38, 1 << VAR38);
            VAR18 = VAR40[VAR18 & 0xF] | VAR40[VAR18 >> 4] << 2;
        }
        VAR11 >>= VAR28;
        VAR25 <<= VAR28;
        while ((VAR25 & 1) == 0 && VAR37 < 0)
        {
            FUN3(VAR7, VAR25, VAR11);
            VAR18 |= VAR18 << VAR11;
            VAR11 <<= 1;
            VAR25 >>= 1;
            VAR27++;
            VAR37++;
        }
        VAR26 = VAR11;
        if (VAR26 > 1)
            FUN4(VAR3->VAR41, VAR7, VAR25 >> VAR28, VAR26 << VAR28, VAR32);
    }
    VAR20 = VAR42 + VAR43[(VAR13 + 1) * VAR44 + VAR6];
    if (!VAR21 && VAR13 >= 0 && VAR10 > VAR20[VAR20[0]] + 12 && VAR9 > 2)
    {
        VAR9 >>= 1;
        VAR8 = VAR7 + VAR9;
        VAR22 = 1;
        VAR13 -= 1;
        if (VAR11 == 1)
            VAR18 = (VAR18 & 1) | (VAR18 << 1);
        VAR11 = (VAR11 + 1) >> 1;
    }
    if (VAR22)
    {
        int VAR45;
        int VAR46 = FUN5(VAR7, VAR8, VAR21, VAR9);
        int VAR47, VAR48, VAR49;
        int VAR50;
        int VAR51;
        int VAR52;
        int VAR53;
        int VAR54;
        VAR51 = VAR55[VAR6] + VAR13 * 8;
        VAR52 = (VAR51 >> 1) - (VAR21 && VAR9 == 2 ? VAR56 : VAR57);
        VAR45 = (VAR21 && VAR6 >= VAR3->VAR58) ? 1 : FUN6(VAR9, VAR10, VAR52, VAR51, VAR21);
        VAR54 = FUN7(VAR5);
        if (VAR45 != 1)
        {
            VAR46 = (VAR46 * VAR45 + 8192) >> 14;
            if (VAR21 && VAR9 > 2)
                FUN8(VAR5, VAR46, VAR45 / 2);
            else if (VAR21 || VAR26 > 1)
                FUN9(VAR5, VAR46, VAR45 + 1);
            else
                FUN10(VAR5, VAR46, VAR45);
            VAR46 = VAR46 * 16384 / VAR45;
            if (VAR21)
            {
                if (VAR46 == 0)
                    FUN11(VAR7, VAR8, VAR3->VAR59[0].VAR60[VAR6], VAR3->VAR59[1].VAR60[VAR6], VAR9);
                else
                    FUN12(VAR7, VAR8, VAR9);
            }
        }
        else if (VAR21)
        {
            VAR29 = VAR46 > 8192;
            if (VAR29)
            {
                int VAR39;
                for (VAR39 = 0; VAR39 < VAR9; VAR39++)
                    VAR8[VAR39] = -VAR8[VAR39];
            }
            FUN11(VAR7, VAR8, VAR3->VAR59[0].VAR60[VAR6], VAR3->VAR59[1].VAR60[VAR6], VAR9);
            if (VAR10 > 2 << 3 && VAR3->VAR36 > 2 << 3)
            {
                FUN13(VAR5, VAR29, 2);
            }
            else
            {
                VAR29 = 0;
            }
            VAR46 = 0;
        }
        VAR50 = FUN7(VAR5) - VAR54;
        VAR10 -= VAR50;
        VAR53 = VAR18;
        if (VAR46 == 0)
        {
            VAR23 = 32767;
            VAR24 = 0;
            VAR18 = FUN14(VAR18, VAR11);
            VAR49 = -16384;
        }
        else if (VAR46 == 16384)
        {
            VAR23 = 0;
            VAR24 = 32767;
            VAR18 &= ((1 << VAR11) - 1) << VAR11;
            VAR49 = 16384;
        }
        else
        {
            VAR23 = FUN15(VAR46);
            VAR24 = FUN15(16384 - VAR46);
            VAR49 = FUN16((VAR9 - 1) << 7, FUN17(VAR24, VAR23));
        }
        VAR30 = VAR23 / 32768.0f;
        VAR31 = VAR24 / 32768.0f;
        if (VAR9 == 2 && VAR21)
        {
            int VAR61;
            int VAR62 = 0;
            float VAR63;
            float *VAR64, *VAR65;
            VAR47 = VAR10;
            VAR48 = (VAR46 != 0 && VAR46 != 16384) ? 1 << 3 : 0;
            VAR47 -= VAR48;
            VAR61 = (VAR46 > 8192);
            VAR3->VAR36 -= VAR50 + VAR48;
            VAR64 = VAR61 ? VAR8 : VAR7;
            VAR65 = VAR61 ? VAR7 : VAR8;
            if (VAR48)
            {
                VAR62 = VAR64[0] * VAR65[1] - VAR64[1] * VAR65[0] < 0;
                FUN2(VAR5, VAR62, 1);
            }
            VAR62 = 1 - 2 * VAR62;
            VAR33 = FUN1(VAR3, VAR5, VAR6, VAR64, NULL, VAR9, VAR47, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR53);
            VAR65[0] = -VAR62 * VAR64[1];
            VAR65[1] = VAR62 * VAR64[0];
            VAR7[0] *= VAR30;
            VAR7[1] *= VAR30;
            VAR8[0] *= VAR31;
            VAR8[1] *= VAR31;
            VAR63 = VAR7[0];
            VAR7[0] = VAR63 - VAR8[0];
            VAR8[0] = VAR63 + VAR8[0];
            VAR63 = VAR7[1];
            VAR7[1] = VAR63 - VAR8[1];
            VAR8[1] = VAR63 + VAR8[1];
        }
        else
        {
            float *VAR66 = NULL;
            float *VAR67 = NULL;
            int VAR68 = 0;
            int VAR69;
            if (VAR26 > 1 && !VAR21 && (VAR46 & 0x3fff))
            {
                if (VAR46 > 8192)
                    VAR49 -= VAR49 >> (4 - VAR13);
                else
                    VAR49 = FUN18(0, VAR49 + (VAR9 << 3 >> (5 - VAR13)));
            }
            VAR47 = FUN19((VAR10 - VAR49) / 2, 0, VAR10);
            VAR48 = VAR10 - VAR47;
            VAR3->VAR36 -= VAR50;
            if (VAR12 && !VAR21)
                VAR66 = VAR12 + VAR9;
            if (VAR21)
                VAR67 = VAR14;
            else
                VAR68 = VAR15 + 1;
            VAR69 = VAR3->VAR36;
            if (VAR47 >= VAR48)
            {
                VAR33 = FUN1(VAR3, VAR5, VAR6, VAR7, NULL, VAR9, VAR47, VAR11, VAR12, VAR13, VAR67, VAR68, VAR21 ? 1.0f : (VAR16 * VAR30), VAR17, VAR18);
                VAR69 = VAR47 - (VAR69 - VAR3->VAR36);
                if (VAR69 > 3 << 3 && VAR46 != 0)
                    VAR48 += VAR69 - (3 << 3);
                VAR33 |= FUN1(VAR3, VAR5, VAR6, VAR8, NULL, VAR9, VAR48, VAR11, VAR66, VAR13, NULL, VAR68, VAR16 * VAR31, NULL, VAR18 >> VAR11) << ((VAR26 >> 1) & (VAR21 - 1));
            }
            else
            {
                VAR33 = FUN1(VAR3, VAR5, VAR6, VAR8, NULL, VAR9, VAR48, VAR11, VAR66, VAR13, NULL, VAR68, VAR16 * VAR31, NULL, VAR18 >> VAR11) << ((VAR26 >> 1) & (VAR21 - 1));
                VAR69 = VAR48 - (VAR69 - VAR3->VAR36);
                if (VAR69 > 3 << 3 && VAR46 != 16384)
                    VAR47 += VAR69 - (3 << 3);
                VAR33 |= FUN1(VAR3, VAR5, VAR6, VAR7, NULL, VAR9, VAR47, VAR11, VAR12, VAR13, VAR67, VAR68, VAR21 ? 1.0f : (VAR16 * VAR30), VAR17, VAR18);
            }
        }
    }
    else
    {
        uint32_t VAR70 = FUN20(VAR20, VAR10);
        uint32_t VAR71 = FUN21(VAR20, VAR70);
        VAR3->VAR36 -= VAR71;
        while (VAR3->VAR36 < 0 && VAR70 > 0)
        {
            VAR3->VAR36 += VAR71;
            VAR71 = FUN21(VAR20, --VAR70);
            VAR3->VAR36 -= VAR71;
        }
        if (VAR70 != 0)
        {
            VAR33 = FUN22(VAR5, VAR7, VAR9, (VAR70 < 8) ? VAR70 : (8 + (VAR70 & 7)) << ((VAR70 >> 3) - 1), VAR3->VAR72, VAR11, VAR16);
        }
    }
    return VAR33;
}