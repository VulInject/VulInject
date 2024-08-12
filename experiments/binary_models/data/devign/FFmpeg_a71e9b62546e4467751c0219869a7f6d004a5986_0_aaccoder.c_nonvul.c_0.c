static float FUN1(struct VAR1 *VAR2, const float *VAR3, const float *VAR4, int VAR5, int VAR6, int VAR7, const float VAR8, const float VAR9, int *VAR10)
{
    const float VAR11 = VAR12[200 + VAR6 - VAR13 + VAR14];
    const float VAR15 = VAR12[200 - VAR6 + VAR13 - VAR14];
    const float VAR16 = 165140.0f * VAR11;
    int VAR17, VAR18, VAR19;
    float VAR20 = 0;
    const int VAR21 = VAR7 < VAR22 ? 4 : 2;
    int VAR23 = 0;
    const float VAR24 = FUN2(VAR15 * FUN2(VAR15));
    const int VAR25 = VAR26[VAR7];
    const int VAR27 = VAR28[VAR7];
    int VAR29[4];
    if (!VAR7)
    {
        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            VAR20 += VAR3[VAR17] * VAR3[VAR17] * VAR8;
        if (VAR10)
            *VAR10 = 0;
        return VAR20;
    }
    VAR29[0] = 1;
    for (VAR17 = 1; VAR17 < VAR21; VAR17++)
        VAR29[VAR17] = VAR29[VAR17 - 1] * VAR25;
    FUN3(VAR2->VAR30, VAR3, VAR4, VAR5, VAR24, !FUN4(VAR7), VAR27);
    for (VAR17 = 0; VAR17 < VAR5; VAR17 += VAR21)
    {
        float VAR31;
        int VAR32 = 0;
        int VAR33 = 0;
        const float *VAR34;
        int(*VAR35)[2] = &VAR2->VAR30[VAR17];
        VAR31 = 0.0f;
        for (VAR18 = 0; VAR18 < VAR21; VAR18++)
            VAR31 += VAR3[VAR17 + VAR18] * VAR3[VAR17 + VAR18] * VAR8;
        VAR32 = FUN4(VAR7) ? 0 : 40;
        VAR33 = VAR36[VAR7 - 1][VAR32];
        VAR31 += VAR33;
        for (VAR18 = 0; VAR18 < (1 << VAR21); VAR18++)
        {
            float VAR37 = 0.0f;
            int VAR38;
            int VAR39 = FUN4(VAR7) ? 0 : 40;
            int VAR40 = 0;
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
            {
                if ((VAR18 & (1 << VAR19)) && VAR35[VAR19][0] == VAR35[VAR19][1])
                {
                    VAR40 = 1;
                    break;
                }
            }
            if (VAR40)
                continue;
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                VAR39 += VAR35[VAR19][!!(VAR18 & (1 << VAR19))] * VAR29[VAR21 - 1 - VAR19];
            VAR38 = VAR36[VAR7 - 1][VAR39];
            VAR34 = &VAR41[VAR7 - 1][VAR39 * VAR21];
            VAR31 = VAR42;
            VAR34 = VAR41[VAR7 - 1];
            for (VAR18 = 0; VAR18 < VAR43[VAR7 - 1]; VAR18++, VAR34 += VAR21)
            {
                float VAR37 = 0.0f;
                int VAR38 = VAR36[VAR7 - 1][VAR18];
                if (FUN4(VAR7))
                {
                    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                    {
                        float VAR44 = FUN5(VAR3[VAR17 + VAR19]);
                        float VAR45;
                        if (VAR34[VAR19] == 64.0f)
                        {
                            if (VAR44 < 39.0f * VAR11)
                            {
                                VAR37 = VAR42;
                                break;
                            }
                            if (VAR44 >= VAR16)
                            {
                                VAR45 = VAR44 - VAR16;
                                VAR38 += 21;
                            }
                            else
                            {
                                int VAR46 = FUN6(FUN7(VAR44, VAR15), 0, 8191);
                                VAR45 = VAR44 - VAR46 * FUN8(VAR46) * VAR11;
                                VAR38 += FUN9(VAR46) * 2 - 4 + 1;
                            }
                        }
                        else
                        {
                            VAR45 = VAR44 - VAR34[VAR19] * VAR11;
                        }
                        if (VAR34[VAR19] != 0.0f)
                            VAR38++;
                        VAR37 += VAR45 * VAR45 * VAR8;
                    }
                }
                else
                {
                    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                    {
                        float VAR45 = VAR3[VAR17 + VAR19] - VAR34[VAR19] * VAR11;
                        VAR37 += VAR45 * VAR45 * VAR8;
                    }
                }
                VAR37 += VAR38;
                if (VAR37 < VAR31)
                {
                    VAR31 = VAR37;
                    VAR32 = VAR18;
                    VAR33 = VAR38;
                }
            }
            VAR20 += VAR31;
            VAR23 += VAR33;
            if (VAR20 >= VAR9)
                return VAR9;
        }
        if (VAR10)
            *VAR10 = VAR23;
        return VAR20;
    }
    static void FUN10(struct VAR1 * VAR2, VAR47 * VAR48, const float *VAR3, int VAR5, int VAR6, int VAR7, const float VAR8)
    {
        const float VAR11 = VAR12[200 + VAR6 - VAR13 + VAR14];
        const float VAR15 = VAR12[200 - VAR6 + VAR13 - VAR14];
        const float VAR16 = 165140.0f * VAR11;
        const int VAR21 = (VAR7 < VAR22) ? 4 : 2;
        int VAR17, VAR18, VAR19;
        const float VAR24 = FUN2(VAR15 * FUN2(VAR15));
        const int VAR25 = VAR26[VAR7];
        const int VAR27 = VAR28[VAR7];
        int VAR29[4];
        float *VAR4 = VAR2->VAR49;
        if (!VAR7)
            return;
        VAR29[0] = 1;
        for (VAR17 = 1; VAR17 < VAR21; VAR17++)
            VAR29[VAR17] = VAR29[VAR17 - 1] * VAR25;
        FUN11(VAR4, VAR3, VAR5);
        FUN3(VAR2->VAR30, VAR3, VAR4, VAR5, VAR24, !FUN4(VAR7), VAR27);
        for (VAR17 = 0; VAR17 < VAR5; VAR17 += VAR21)
        {
            float VAR31;
            int VAR32 = 0;
            int VAR33 = 0;
            const float *VAR34;
            int(*VAR35)[2] = &VAR2->VAR30[VAR17];
            VAR31 = 0.0f;
            for (VAR18 = 0; VAR18 < VAR21; VAR18++)
                VAR31 += VAR3[VAR17 + VAR18] * VAR3[VAR17 + VAR18] * VAR8;
            VAR32 = FUN4(VAR7) ? 0 : 40;
            VAR33 = VAR36[VAR7 - 1][VAR32];
            VAR31 += VAR33;
            for (VAR18 = 0; VAR18 < (1 << VAR21); VAR18++)
            {
                float VAR37 = 0.0f;
                int VAR38;
                int VAR39 = FUN4(VAR7) ? 0 : 40;
                int VAR40 = 0;
                for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                {
                    if ((VAR18 & (1 << VAR19)) && VAR35[VAR19][0] == VAR35[VAR19][1])
                    {
                        VAR40 = 1;
                        break;
                    }
                }
                if (VAR40)
                    continue;
                for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                    VAR39 += VAR35[VAR19][!!(VAR18 & (1 << VAR19))] * VAR29[VAR21 - 1 - VAR19];
                VAR38 = VAR36[VAR7 - 1][VAR39];
                VAR34 = &VAR41[VAR7 - 1][VAR39 * VAR21];
                VAR34 = VAR41[VAR7 - 1];
                VAR31 = VAR42;
                for (VAR18 = 0; VAR18 < VAR43[VAR7 - 1]; VAR18++, VAR34 += VAR21)
                {
                    float VAR37 = 0.0f;
                    int VAR38 = VAR36[VAR7 - 1][VAR18];
                    int VAR39 = VAR18;
                    if (FUN4(VAR7))
                    {
                        for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                        {
                            float VAR44 = FUN5(VAR3[VAR17 + VAR19]);
                            float VAR45;
                            if (VAR34[VAR19] == 64.0f)
                            {
                                if (VAR44 < 39.0f * VAR11)
                                {
                                    VAR37 = VAR42;
                                    break;
                                }
                                if (VAR44 >= VAR16)
                                {
                                    VAR45 = VAR44 - VAR16;
                                    VAR38 += 21;
                                }
                                else
                                {
                                    int VAR46 = FUN6(FUN7(VAR44, VAR15), 0, 8191);
                                    VAR45 = VAR44 - VAR46 * FUN8(VAR46) * VAR11;
                                    VAR38 += FUN9(VAR46) * 2 - 4 + 1;
                                }
                            }
                            else
                            {
                                VAR45 = VAR44 - VAR34[VAR19] * VAR11;
                            }
                            if (VAR34[VAR19] != 0.0f)
                                VAR38++;
                            VAR37 += VAR45 * VAR45 * VAR8;
                        }
                    }
                    else
                    {
                        for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                        {
                            float VAR45 = VAR3[VAR17 + VAR19] - VAR34[VAR19] * VAR11;
                            VAR37 += VAR45 * VAR45 * VAR8;
                        }
                    }
                    VAR37 += VAR38;
                    if (VAR37 < VAR31)
                    {
                        VAR31 = VAR37;
                        VAR32 = VAR39;
                        VAR33 = VAR38;
                    }
                }
                FUN12(VAR48, VAR36[VAR7 - 1][VAR32], VAR50[VAR7 - 1][VAR32]);
                if (FUN4(VAR7))
                    for (VAR18 = 0; VAR18 < VAR21; VAR18++)
                        if (VAR41[VAR7 - 1][VAR32 * VAR21 + VAR18] != 0.0f)
                            FUN12(VAR48, 1, VAR3[VAR17 + VAR18] < 0.0f);
                if (VAR7 == VAR51)
                {
                    for (VAR18 = 0; VAR18 < 2; VAR18++)
                    {
                        if (VAR41[VAR7 - 1][VAR32 * 2 + VAR18] == 64.0f)
                        {
                            int VAR52 = FUN6(FUN7(FUN5(VAR3[VAR17 + VAR18]), VAR15), 0, 8191);
                            int VAR53 = FUN9(VAR52);
                            FUN12(VAR48, VAR53 - 4 + 1, (1 << (VAR53 - 4 + 1)) - 2);
                            FUN12(VAR48, VAR53, VAR52 & ((1 << VAR53) - 1));
                        }
                    }
                }
            }
        }
        typedef struct VAR54
        {
            int VAR55;
            float VAR20;
            int VAR56;
        } VAR54;
        static void FUN13(VAR1 * VAR2, VAR57 * VAR58, int VAR59, int VAR60, const float VAR8)
        {
            BandCodingPath VAR61[120][12];
            int VAR62, VAR63, VAR7, VAR64, VAR65, VAR5;
            int VAR17, VAR18;
            const int VAR66 = VAR58->VAR67.VAR66;
            const int VAR68 = VAR58->VAR67.VAR69 == 1 ? 5 : 3;
            const int VAR70 = (1 << VAR68) - 1;
            int VAR71, VAR72, VAR73;
            int VAR74[120], VAR75[120], VAR76;
            float VAR77 = VAR42;
            int VAR78 = 0;
            FUN11(VAR2->VAR49, VAR58->VAR79, 1024);
            VAR64 = VAR59 * 128;
            for (VAR7 = 0; VAR7 < 12; VAR7++)
            {
                VAR61[0][VAR7].VAR20 = 0.0f;
                VAR61[0][VAR7].VAR55 = -1;
                VAR61[0][VAR7].VAR56 = 0;
            }
            for (VAR63 = 0; VAR63 < VAR66; VAR63++)
            {
                VAR65 = VAR64;
                VAR5 = VAR58->VAR67.VAR80[VAR63];
                if (VAR58->VAR81[VAR59 * 16 + VAR63])
                {
                    for (VAR7 = 0; VAR7 < 12; VAR7++)
                    {
                        VAR61[VAR63 + 1][VAR7].VAR55 = VAR7;
                        VAR61[VAR63 + 1][VAR7].VAR20 = VAR61[VAR63][VAR7].VAR20;
                        VAR61[VAR63 + 1][VAR7].VAR56 = VAR61[VAR63][VAR7].VAR56 + 1;
                    }
                }
                else
                {
                    float VAR82 = VAR77;
                    int VAR83 = VAR78;
                    VAR77 = VAR42;
                    VAR78 = 0;
                    for (VAR7 = 0; VAR7 < 12; VAR7++)
                    {
                        float VAR84, VAR85;
                        float VAR37 = 0.0f;
                        for (VAR62 = 0; VAR62 < VAR60; VAR62++)
                        {
                            VAR86 *VAR87 = &VAR2->VAR88.VAR89[VAR2->VAR90 * VAR91 + (VAR59 + VAR62) * 16 + VAR63];
                            VAR37 += FUN1(VAR2, VAR58->VAR79 + VAR64 + VAR62 * 128, VAR2->VAR49 + VAR64 + VAR62 * 128, VAR5, VAR58->VAR92[(VAR59 + VAR62) * 16 + VAR63], VAR7, VAR8 / VAR87->VAR93, VAR42, NULL);
                        }
                        VAR84 = VAR61[VAR63][VAR7].VAR20 + VAR37;
                        VAR85 = VAR82 + VAR37 + VAR68 + 4;
                        if (VAR94[VAR58->VAR67.VAR69 == 8][VAR61[VAR63][VAR7].VAR56] != VAR94[VAR58->VAR67.VAR69 == 8][VAR61[VAR63][VAR7].VAR56 + 1])
                            VAR84 += VAR68;
                        if (VAR85 < VAR84)
                        {
                            VAR61[VAR63 + 1][VAR7].VAR55 = VAR83;
                            VAR61[VAR63 + 1][VAR7].VAR20 = VAR85;
                            VAR61[VAR63 + 1][VAR7].VAR56 = 1;
                        }
                        else
                        {
                            VAR61[VAR63 + 1][VAR7].VAR55 = VAR7;
                            VAR61[VAR63 + 1][VAR7].VAR20 = VAR84;
                            VAR61[VAR63 + 1][VAR7].VAR56 = VAR61[VAR63][VAR7].VAR56 + 1;
                        }
                        if (VAR61[VAR63 + 1][VAR7].VAR20 < VAR77)
                        {
                            VAR77 = VAR61[VAR63 + 1][VAR7].VAR20;
                            VAR78 = VAR7;
                        }
                    }
                }
                VAR64 += VAR58->VAR67.VAR80[VAR63];
            }
            VAR76 = 0;
            VAR71 = 0;
            for (VAR7 = 1; VAR7 < 12; VAR7++)
                if (VAR61[VAR66][VAR7].VAR20 < VAR61[VAR66][VAR71].VAR20)
                    VAR71 = VAR7;
            VAR72 = VAR66;
            while (VAR72 > 0)
            {
                VAR7 = VAR71;
                VAR74[VAR76] = VAR61[VAR72][VAR7].VAR56;
                VAR75[VAR76] = VAR7;
                VAR71 = VAR61[VAR72 - VAR61[VAR72][VAR7].VAR56 + 1][VAR7].VAR55;
                VAR72 -= VAR61[VAR72][VAR7].VAR56;
                VAR76++;
            }
            VAR64 = 0;
            for (VAR17 = VAR76 - 1; VAR17 >= 0; VAR17--)
            {
                FUN12(&VAR2->VAR48, 4, VAR75[VAR17]);
                VAR73 = VAR74[VAR17];
                memset(VAR58->VAR81 + VAR59 * 16 + VAR64, !VAR75[VAR17], VAR73);
                for (VAR18 = 0; VAR18 < VAR73; VAR18++)
                {
                    VAR58->VAR95[VAR59 * 16 + VAR64] = VAR75[VAR17];
                    VAR64++;
                }
                while (VAR73 >= VAR70)
                {
                    FUN12(&VAR2->VAR48, VAR68, VAR70);
                    VAR73 -= VAR70;
                }
                FUN12(&VAR2->VAR48, VAR68, VAR73);
            }
        }
        typedef struct VAR96
        {
            float VAR20;
            int VAR97;
            int VAR98;
            int VAR99;
        } VAR96;
        static void FUN14(VAR100 * VAR101, VAR1 * VAR2, VAR57 * VAR58, const float VAR8)
        {
            int VAR102, VAR62, VAR103, VAR104, VAR64 = 0;
            int VAR17;
            int VAR71;
            TrellisPath VAR105[256 * 121];
            int VAR106[121];
            int VAR107;
            float VAR31;
            for (VAR17 = 0; VAR17 < 256; VAR17++)
            {
                VAR105[VAR17].VAR20 = 0.0f;
                VAR105[VAR17].VAR97 = -1;
                VAR105[VAR17].VAR98 = VAR17;
                VAR105[VAR17].VAR99 = VAR17;
            }
            for (VAR17 = 256; VAR17 < 256 * 121; VAR17++)
            {
                VAR105[VAR17].VAR20 = VAR42;
                VAR105[VAR17].VAR97 = -2;
                VAR105[VAR17].VAR98 = VAR108;
                VAR105[VAR17].VAR99 = 0;
            }
            VAR71 = 256;
            FUN11(VAR2->VAR49, VAR58->VAR79, 1024);
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                VAR64 = VAR62 * 128;
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    const float *VAR110 = VAR58->VAR79 + VAR64;
                    float VAR111, VAR112;
                    int VAR113 = 0;
                    VAR106[VAR71 >> 8] = VAR62 * 16 + VAR104;
                    VAR111 = VAR108;
                    VAR112 = 0.0f;
                    for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                    {
                        VAR86 *VAR87 = &VAR2->VAR88.VAR89[VAR2->VAR90 * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                        if (VAR87->VAR114 <= VAR87->VAR93 || VAR87->VAR93 == 0.0f)
                        {
                            VAR58->VAR81[(VAR62 + VAR103) * 16 + VAR104] = 1;
                            continue;
                        }
                        VAR58->VAR81[(VAR62 + VAR103) * 16 + VAR104] = 0;
                        VAR113 = 1;
                        for (VAR17 = 0; VAR17 < VAR58->VAR67.VAR80[VAR104]; VAR17++)
                        {
                            float VAR44 = FUN5(VAR110[VAR103 * 128 + VAR17]);
                            if (VAR44 > 0.0f)
                                VAR111 = FUN15(VAR111, VAR44);
                            VAR112 = FUN16(VAR112, VAR44);
                        }
                    }
                    if (VAR113)
                    {
                        int VAR115, VAR116;
                        float VAR82 = VAR42;
                        VAR115 = FUN17(FUN18(VAR111) * 4 - 69 + VAR13 - VAR14);
                        VAR116 = FUN17(FUN18(VAR112) * 4 + 6 + VAR13 - VAR14);
                        for (VAR102 = VAR115; VAR102 < VAR116; VAR102++)
                        {
                            float VAR117[12], VAR118;
                            memset(VAR117, 0, sizeof(VAR117));
                            for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                            {
                                VAR86 *VAR87 = &VAR2->VAR88.VAR89[VAR2->VAR90 * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                                int VAR7;
                                for (VAR7 = 0; VAR7 <= VAR51; VAR7++)
                                    VAR117[VAR7] += FUN1(VAR2, VAR110 + VAR103 * 128, VAR2->VAR49 + VAR64 + VAR103 * 128, VAR58->VAR67.VAR80[VAR104], VAR102, VAR7, VAR8 / VAR87->VAR93, VAR42, NULL);
                            }
                            VAR118 = VAR117[0];
                            for (VAR17 = 1; VAR17 <= VAR51; VAR17++)
                                VAR118 = FUN15(VAR118, VAR117[VAR17]);
                            VAR82 = FUN15(VAR82, VAR118);
                            for (VAR17 = FUN16(VAR102 - VAR119, 0); VAR17 < FUN15(VAR102 + VAR119, 256); VAR17++)
                            {
                                float VAR20;
                                int VAR120, VAR121;
                                if (FUN19(VAR105[VAR71 - 256 + VAR17].VAR20))
                                    continue;
                                VAR20 = VAR105[VAR71 - 256 + VAR17].VAR20 + VAR118 + VAR122[VAR102 - VAR17 + VAR123];
                                VAR120 = FUN15(VAR105[VAR71 - 256 + VAR17].VAR98, VAR102);
                                VAR121 = FUN16(VAR105[VAR71 - 256 + VAR17].VAR99, VAR102);
                                if (VAR20 < VAR105[VAR71 + VAR102].VAR20 && VAR121 - VAR120 < VAR119)
                                {
                                    VAR105[VAR71 + VAR102].VAR20 = VAR20;
                                    VAR105[VAR71 + VAR102].VAR97 = VAR71 - 256 + VAR17;
                                    VAR105[VAR71 + VAR102].VAR98 = VAR120;
                                    VAR105[VAR71 + VAR102].VAR99 = VAR121;
                                }
                            }
                        }
                    }
                    else
                    {
                        for (VAR102 = 0; VAR102 < 256; VAR102++)
                        {
                            if (!FUN19(VAR105[VAR71 - 256 + VAR102].VAR20))
                            {
                                VAR105[VAR71 + VAR102].VAR20 = VAR105[VAR71 - 256 + VAR102].VAR20 + 1;
                                VAR105[VAR71 + VAR102].VAR97 = VAR71 - 256 + VAR102;
                                VAR105[VAR71 + VAR102].VAR98 = FUN15(VAR105[VAR71 - 256 + VAR102].VAR98, VAR102);
                                VAR105[VAR71 + VAR102].VAR99 = FUN16(VAR105[VAR71 - 256 + VAR102].VAR99, VAR102);
                                continue;
                            }
                            for (VAR17 = FUN16(VAR102 - VAR119, 0); VAR17 < FUN15(VAR102 + VAR119, 256); VAR17++)
                            {
                                float VAR20;
                                int VAR120, VAR121;
                                if (FUN19(VAR105[VAR71 - 256 + VAR17].VAR20))
                                    continue;
                                VAR20 = VAR105[VAR71 - 256 + VAR17].VAR20 + VAR122[VAR102 - VAR17 + VAR123];
                                VAR120 = FUN15(VAR105[VAR71 - 256 + VAR17].VAR98, VAR102);
                                VAR121 = FUN16(VAR105[VAR71 - 256 + VAR17].VAR99, VAR102);
                                if (VAR20 < VAR105[VAR71 + VAR102].VAR20 && VAR121 - VAR120 < VAR119)
                                {
                                    VAR105[VAR71 + VAR102].VAR20 = VAR20;
                                    VAR105[VAR71 + VAR102].VAR97 = VAR71 - 256 + VAR17;
                                    VAR105[VAR71 + VAR102].VAR98 = VAR120;
                                    VAR105[VAR71 + VAR102].VAR99 = VAR121;
                                }
                            }
                        }
                    }
                    VAR58->VAR81[VAR62 * 16 + VAR104] = !VAR113;
                    VAR64 += VAR58->VAR67.VAR80[VAR104];
                    VAR71 += 256;
                }
            }
            VAR71 -= 256;
            VAR31 = VAR105[VAR71].VAR20;
            VAR107 = VAR71;
            for (VAR17 = 1; VAR17 < 256; VAR17++)
            {
                if (VAR105[VAR71 + VAR17].VAR20 < VAR31)
                {
                    VAR31 = VAR105[VAR71 + VAR17].VAR20;
                    VAR107 = VAR71 + VAR17;
                }
            }
            while (VAR107 >= 256)
            {
                VAR58->VAR92[VAR106[VAR107 >> 8]] = VAR107 & 0xFF;
                VAR107 = VAR105[VAR107].VAR97;
            }
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                    for (VAR103 = 1; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                        VAR58->VAR92[(VAR62 + VAR103) * 16 + VAR104] = VAR58->VAR92[VAR62 * 16 + VAR104];
        }
        static void FUN20(VAR100 * VAR101, VAR1 * VAR2, VAR57 * VAR58, const float VAR8)
        {
            int VAR64 = 0, VAR17, VAR62, VAR103, VAR104;
            int VAR124 = VAR101->VAR125 * 1024.0 / VAR101->VAR126 / VAR101->VAR127;
            float VAR117[128], VAR128[128];
            int VAR129, VAR130;
            int VAR131 = 0;
            int VAR132 = 0;
            float VAR133 = VAR42;
            memset(VAR117, 0, sizeof(VAR117));
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    int VAR113 = 0;
                    float VAR9 = 0.0f;
                    for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                    {
                        VAR86 *VAR87 = &VAR2->VAR88.VAR89[VAR2->VAR90 * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                        VAR9 += VAR87->VAR93;
                        if (VAR87->VAR114 <= VAR87->VAR93 || VAR87->VAR93 == 0.0f)
                        {
                            VAR58->VAR81[(VAR62 + VAR103) * 16 + VAR104] = 1;
                            continue;
                        }
                        VAR113 = 1;
                    }
                    VAR128[VAR62 * 16 + VAR104] = VAR9 * 512;
                    VAR58->VAR81[VAR62 * 16 + VAR104] = !VAR113;
                    if (VAR113)
                        VAR133 = FUN15(VAR133, VAR9);
                    VAR132 = FUN16(VAR132, VAR113);
                }
            }
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    if (VAR58->VAR81[VAR62 * 16 + VAR104])
                    {
                        VAR58->VAR92[VAR62 * 16 + VAR104] = VAR13;
                        continue;
                    }
                    VAR58->VAR92[VAR62 * 16 + VAR104] = VAR13 + FUN15(FUN18(VAR128[VAR62 * 16 + VAR104] / VAR133) * 4, 59);
                }
            }
            if (!VAR132)
                return;
            FUN11(VAR2->VAR49, VAR58->VAR79, 1024);
            do
            {
                int VAR134, VAR135;
                VAR130 = VAR58->VAR92[0];
                VAR135 = VAR131 ? 1 : 32;
                do
                {
                    int VAR97 = -1;
                    VAR134 = 0;
                    VAR129 = 0;
                    for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
                    {
                        VAR64 = VAR62 * 128;
                        for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                        {
                            const float *VAR110 = VAR58->VAR79 + VAR64;
                            const float *VAR4 = VAR2->VAR49 + VAR64;
                            int VAR10 = 0;
                            int VAR7;
                            float VAR136 = VAR42;
                            int VAR33 = 0;
                            if (VAR58->VAR81[VAR62 * 16 + VAR104] || VAR58->VAR92[VAR62 * 16 + VAR104] >= 218)
                            {
                                VAR64 += VAR58->VAR67.VAR80[VAR104];
                                continue;
                            }
                            VAR130 = FUN15(VAR130, VAR58->VAR92[VAR62 * 16 + VAR104]);
                            for (VAR7 = 0; VAR7 <= VAR51; VAR7++)
                            {
                                float VAR118 = 0.0f;
                                int VAR137 = 0;
                                for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                                {
                                    int VAR138;
                                    VAR118 += FUN1(VAR2, VAR110 + VAR103 * 128, VAR4 + VAR103 * 128, VAR58->VAR67.VAR80[VAR104], VAR58->VAR92[VAR62 * 16 + VAR104], VAR7, VAR8, VAR42, &VAR138);
                                    VAR137 += VAR138;
                                }
                                if (VAR118 < VAR136)
                                {
                                    VAR136 = VAR118;
                                    VAR33 = VAR137;
                                }
                            }
                            VAR117[VAR62 * 16 + VAR104] = (VAR136 - VAR33) / VAR8;
                            VAR10 = VAR33;
                            if (VAR97 != -1)
                            {
                                VAR10 += VAR122[VAR58->VAR92[VAR62 * 16 + VAR104] - VAR97 + VAR123];
                            }
                            VAR134 += VAR10;
                            VAR64 += VAR58->VAR67.VAR80[VAR104];
                            VAR97 = VAR58->VAR92[VAR62 * 16 + VAR104];
                        }
                    }
                    if (VAR134 > VAR124)
                    {
                        for (VAR17 = 0; VAR17 < 128; VAR17++)
                            if (VAR58->VAR92[VAR17] < 218 - VAR135)
                                VAR58->VAR92[VAR17] += VAR135;
                    }
                    else
                    {
                        for (VAR17 = 0; VAR17 < 128; VAR17++)
                            if (VAR58->VAR92[VAR17] > 60 - VAR135)
                                VAR58->VAR92[VAR17] -= VAR135;
                    }
                    VAR135 >>= 1;
                    if (!VAR135 && VAR134 > VAR124 * 1.02)
                        VAR135 = 1;
                    if (VAR58->VAR92[0] >= 217)
                        break;
                } while (VAR135);
                VAR129 = 0;
                VAR130 = FUN6(VAR130, 60, 255 - VAR119);
                for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
                {
                    VAR64 = VAR62 * 128;
                    for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                    {
                        int VAR139 = VAR58->VAR92[VAR62 * 16 + VAR104];
                        if (VAR117[VAR62 * 16 + VAR104] > VAR128[VAR62 * 16 + VAR104] && VAR58->VAR92[VAR62 * 16 + VAR104] > 60)
                            VAR58->VAR92[VAR62 * 16 + VAR104]--;
                        VAR58->VAR92[VAR62 * 16 + VAR104] = FUN6(VAR58->VAR92[VAR62 * 16 + VAR104], VAR130, VAR130 + VAR119);
                        VAR58->VAR92[VAR62 * 16 + VAR104] = FUN15(VAR58->VAR92[VAR62 * 16 + VAR104], 219);
                        if (VAR58->VAR92[VAR62 * 16 + VAR104] != VAR139)
                            VAR129 = 1;
                    }
                }
                VAR131++;
            } while (VAR129 && VAR131 < 10);
        }
        static void FUN21(VAR100 * VAR101, VAR1 * VAR2, VAR57 * VAR58, const float VAR8)
        {
            int VAR64 = 0, VAR17, VAR62, VAR103, VAR104;
            float VAR9[128], VAR140[128];
            int VAR107, VAR141;
            float VAR142 = ((VAR58->VAR67.VAR69 > 1) ? 85.80 : 147.84) / VAR8;
            int VAR143 = 0, VAR144 = 0, VAR145 = 0;
            float VAR146 = 0.0;
            if (VAR58->VAR67.VAR69 == 1)
            {
                VAR64 = 0;
                for (VAR17 = 0; VAR17 < 1024; VAR17++)
                {
                    if (VAR17 - VAR64 >= VAR58->VAR67.VAR80[VAR145])
                    {
                        VAR64 += VAR58->VAR67.VAR80[VAR145];
                        VAR145++;
                    }
                    if (VAR58->VAR79[VAR17])
                    {
                        VAR146 += VAR58->VAR79[VAR17] * VAR58->VAR79[VAR17];
                        VAR143 = VAR17;
                        VAR144 = VAR145;
                    }
                }
            }
            else
            {
                for (VAR62 = 0; VAR62 < 8; VAR62++)
                {
                    const float *VAR79 = VAR58->VAR79 + VAR62 * 128;
                    VAR64 = 0;
                    for (VAR17 = 0; VAR17 < 128; VAR17++)
                    {
                        if (VAR17 - VAR64 >= VAR58->VAR67.VAR80[VAR145])
                        {
                            VAR64 += VAR58->VAR67.VAR80[VAR145];
                            VAR145++;
                        }
                        if (VAR79[VAR17])
                        {
                            VAR146 += VAR79[VAR17] * VAR79[VAR17];
                            VAR143 = FUN16(VAR143, VAR17);
                            VAR144 = FUN16(VAR144, VAR145);
                        }
                    }
                }
            }
            VAR143++;
            VAR146 /= VAR143;
            if (VAR146 == 0.0f)
            {
                for (VAR17 = 0; VAR17 < FUN22(VAR58->VAR92); VAR17++)
                    VAR58->VAR92[VAR17] = VAR13;
                return;
            }
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                VAR64 = VAR62 * 128;
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    float *VAR110 = VAR58->VAR79 + VAR64;
                    const int VAR5 = VAR58->VAR67.VAR80[VAR104];
                    int VAR65 = VAR64, VAR147 = VAR64 + VAR5, VAR148 = VAR64;
                    float VAR27 = -1, VAR149 = 0.0f, VAR44;
                    VAR140[VAR62 * 16 + VAR104] = 0.0f;
                    if (VAR104 > VAR144)
                    {
                        VAR140[VAR62 * 16 + VAR104] = 0.0f;
                        VAR64 += VAR5;
                        for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                            memset(VAR110 + VAR103 * 128, 0, sizeof(VAR110[0]) * VAR5);
                        continue;
                    }
                    for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                    {
                        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
                        {
                            float VAR44 = VAR110[VAR103 * 128 + VAR17] * VAR110[VAR103 * 128 + VAR17];
                            VAR140[VAR62 * 16 + VAR104] = FUN16(VAR140[VAR62 * 16 + VAR104], FUN5(VAR110[VAR103 * 128 + VAR17]));
                            VAR149 += VAR44;
                            if (VAR58->VAR67.VAR69 == 1 && VAR27 < VAR44)
                            {
                                VAR27 = VAR44;
                                VAR148 = VAR64 + VAR17;
                            }
                        }
                    }
                    if (VAR58->VAR67.VAR69 == 1)
                    {
                        VAR65 = FUN16(VAR148 - 2, VAR65);
                        VAR147 = FUN15(VAR148 + 3, VAR147);
                    }
                    else
                    {
                        VAR65 -= VAR64;
                        VAR147 -= VAR64;
                    }
                    VAR64 += VAR5;
                    VAR149 = FUN23(VAR149 / (VAR146 * (VAR147 - VAR65)), 0.3 + 0.1 * (VAR144 - VAR104) / VAR144);
                    VAR44 = 1.0 - (1.0 * VAR65 / VAR143);
                    VAR9[VAR62 * 16 + VAR104] = VAR142 / (1.4 * VAR149 + VAR44 * VAR44 * VAR44 + 0.075);
                }
            }
            memset(VAR58->VAR92, 0, sizeof(VAR58->VAR92));
            FUN11(VAR2->VAR49, VAR58->VAR79, 1024);
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                VAR64 = VAR62 * 128;
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    const float *VAR110 = VAR58->VAR79 + VAR64;
                    const float *VAR4 = VAR2->VAR49 + VAR64;
                    const int VAR5 = VAR58->VAR67.VAR80[VAR104];
                    int VAR150, VAR151, VAR152;
                    int VAR153 = 0, VAR154 = 255;
                    float VAR155;
                    if (VAR140[VAR62 * 16 + VAR104] < 21.544)
                    {
                        VAR58->VAR81[VAR62 * 16 + VAR104] = 1;
                        VAR64 += VAR5;
                        continue;
                    }
                    VAR58->VAR81[VAR62 * 16 + VAR104] = 0;
                    VAR150 = VAR151 = FUN6(VAR13 - VAR14 - FUN18(1 / VAR140[VAR62 * 16 + VAR104]) * 16 / 3, 60, 218);
                    VAR152 = 16;
                    for (;;)
                    {
                        float VAR118 = 0.0f;
                        int VAR156;
                        for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                        {
                            int VAR138;
                            VAR118 += FUN1(VAR2, VAR110 + VAR103 * 128, VAR4 + VAR103 * 128, VAR58->VAR67.VAR80[VAR104], VAR150, VAR51, VAR8, VAR42, &VAR138);
                            VAR118 -= VAR138;
                        }
                        VAR118 *= 1.0f / 512.0f / VAR8;
                        VAR156 = FUN7(VAR140[VAR62 * 16 + VAR104], VAR12[200 - VAR150 + VAR13 - VAR14]);
                        if (VAR156 >= 8191)
                        {
                            VAR58->VAR92[VAR62 * 16 + VAR104] = VAR151;
                            break;
                        }
                        VAR151 = VAR150;
                        VAR155 = FUN5(VAR118 - VAR9[VAR62 * 16 + VAR104]);
                        if (VAR155 == 0.0f)
                            VAR152 = 0;
                        else
                            VAR152 = FUN5(FUN18(VAR155));
                        if (VAR118 > VAR9[VAR62 * 16 + VAR104])
                            VAR152 = -VAR152;
                        if (FUN24(VAR152) <= 1 || (VAR152 > 0 && VAR150 >= VAR154) || (VAR152 < 0 && VAR150 <= VAR153))
                        {
                            VAR58->VAR92[VAR62 * 16 + VAR104] = VAR150;
                            break;
                        }
                        VAR150 += VAR152;
                        if (VAR152 > 0)
                            VAR153 = VAR150;
                        else
                            VAR154 = VAR150;
                    }
                    VAR64 += VAR5;
                }
            }
            VAR107 = VAR58->VAR92[0] ? VAR58->VAR92[0] : VAR108;
            for (VAR17 = 1; VAR17 < 128; VAR17++)
            {
                if (!VAR58->VAR92[VAR17])
                    VAR58->VAR92[VAR17] = VAR58->VAR92[VAR17 - 1];
                else
                    VAR107 = FUN15(VAR107, VAR58->VAR92[VAR17]);
            }
            if (VAR107 == VAR108)
                VAR107 = 0;
            VAR107 = FUN15(VAR107, VAR157);
            VAR141 = FUN15(VAR107 + VAR119, VAR157);
            for (VAR17 = 126; VAR17 >= 0; VAR17--)
            {
                if (!VAR58->VAR92[VAR17])
                    VAR58->VAR92[VAR17] = VAR58->VAR92[VAR17 + 1];
                VAR58->VAR92[VAR17] = FUN6(VAR58->VAR92[VAR17], VAR107, VAR141);
            }
        }
        static void FUN25(VAR100 * VAR101, VAR1 * VAR2, VAR57 * VAR58, const float VAR8)
        {
            int VAR64 = 0, VAR17, VAR62, VAR103, VAR104;
            int VAR107 = 255;
            memset(VAR58->VAR92, 0, sizeof(VAR58->VAR92));
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
            {
                VAR64 = VAR62 * 128;
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                {
                    for (VAR103 = 0; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                    {
                        VAR86 *VAR87 = &VAR2->VAR88.VAR89[VAR2->VAR90 * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                        if (VAR87->VAR114 <= VAR87->VAR93)
                        {
                            VAR58->VAR92[(VAR62 + VAR103) * 16 + VAR104] = 218;
                            VAR58->VAR81[(VAR62 + VAR103) * 16 + VAR104] = 1;
                        }
                        else
                        {
                            VAR58->VAR92[(VAR62 + VAR103) * 16 + VAR104] = FUN6(VAR13 - VAR14 + FUN18(VAR87->VAR93), 80, 218);
                            VAR58->VAR81[(VAR62 + VAR103) * 16 + VAR104] = 0;
                        }
                        VAR107 = FUN15(VAR107, VAR58->VAR92[(VAR62 + VAR103) * 16 + VAR104]);
                    }
                }
            }
            for (VAR17 = 0; VAR17 < 128; VAR17++)
            {
                VAR58->VAR92[VAR17] = 140;
            }
            for (VAR62 = 0; VAR62 < VAR58->VAR67.VAR69; VAR62 += VAR58->VAR67.VAR60[VAR62])
                for (VAR104 = 0; VAR104 < VAR58->VAR67.VAR109; VAR104++)
                    for (VAR103 = 1; VAR103 < VAR58->VAR67.VAR60[VAR62]; VAR103++)
                        VAR58->VAR92[(VAR62 + VAR103) * 16 + VAR104] = VAR58->VAR92[VAR62 * 16 + VAR104];
        }
        static void FUN26(VAR1 * VAR2, VAR158 * VAR159, const float VAR8)
        {
            int VAR64 = 0, VAR17, VAR62, VAR103, VAR104;
            float VAR160[128], VAR161[128];
            float *VAR162 = VAR2->VAR49, *VAR163 = VAR2->VAR49 + 128, *VAR164 = VAR2->VAR49 + 128 * 2, *VAR165 = VAR2->VAR49 + 128 * 3;
            VAR57 *VAR166 = &VAR159->VAR167[0];
            VAR57 *VAR168 = &VAR159->VAR167[1];
            if (!VAR159->VAR169)
                return;
            for (VAR62 = 0; VAR62 < VAR166->VAR67.VAR69; VAR62 += VAR166->VAR67.VAR60[VAR62])
            {
                for (VAR104 = 0; VAR104 < VAR166->VAR67.VAR109; VAR104++)
                {
                    if (!VAR159->VAR167[0].VAR81[VAR62 * 16 + VAR104] && !VAR159->VAR167[1].VAR81[VAR62 * 16 + VAR104])
                    {
                        float VAR170 = 0.0f, VAR171 = 0.0f;
                        for (VAR103 = 0; VAR103 < VAR166->VAR67.VAR60[VAR62]; VAR103++)
                        {
                            VAR86 *VAR172 = &VAR2->VAR88.VAR89[(VAR2->VAR90 + 0) * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                            VAR86 *VAR173 = &VAR2->VAR88.VAR89[(VAR2->VAR90 + 1) * VAR91 + (VAR62 + VAR103) * 16 + VAR104];
                            float VAR133 = FUN15(VAR172->VAR93, VAR173->VAR93);
                            float VAR174 = FUN16(VAR172->VAR93, VAR173->VAR93);
                            for (VAR17 = 0; VAR17 < VAR166->VAR67.VAR80[VAR104]; VAR17++)
                            {
                                VAR160[VAR17] = (VAR166->VAR79[VAR64 + VAR103 * 128 + VAR17] + VAR168->VAR79[VAR64 + VAR103 * 128 + VAR17]) * 0.5;
                                VAR161[VAR17] = VAR166->VAR79[VAR64 + VAR103 * 128 + VAR17] - VAR168->VAR79[VAR64 + VAR103 * 128 + VAR17];
                            }
                            FUN11(VAR162, VAR166->VAR79 + VAR64 + VAR103 * 128, VAR166->VAR67.VAR80[VAR104]);
                            FUN11(VAR163, VAR168->VAR79 + VAR64 + VAR103 * 128, VAR166->VAR67.VAR80[VAR104]);
                            FUN11(VAR164, VAR160, VAR166->VAR67.VAR80[VAR104]);
                            FUN11(VAR165, VAR161, VAR166->VAR67.VAR80[VAR104]);
                            VAR170 += FUN1(VAR2, VAR166->VAR79 + VAR64 + VAR103 * 128, VAR162, VAR166->VAR67.VAR80[VAR104], VAR166->VAR92[(VAR62 + VAR103) * 16 + VAR104], VAR166->VAR95[(VAR62 + VAR103) * 16 + VAR104], VAR8 / VAR172->VAR93, VAR42, NULL);
                            VAR170 += FUN1(VAR2, VAR168->VAR79 + VAR64 + VAR103 * 128, VAR163, VAR168->VAR67.VAR80[VAR104], VAR168->VAR92[(VAR62 + VAR103) * 16 + VAR104], VAR168->VAR95[(VAR62 + VAR103) * 16 + VAR104], VAR8 / VAR173->VAR93, VAR42, NULL);
                            VAR171 += FUN1(VAR2, VAR160, VAR164, VAR166->VAR67.VAR80[VAR104], VAR166->VAR92[(VAR62 + VAR103) * 16 + VAR104], VAR166->VAR95[(VAR62 + VAR103) * 16 + VAR104], VAR8 / VAR174, VAR42, NULL);
                            VAR171 += FUN1(VAR2, VAR161, VAR165, VAR168->VAR67.VAR80[VAR104], VAR168->VAR92[(VAR62 + VAR103) * 16 + VAR104], VAR168->VAR95[(VAR62 + VAR103) * 16 + VAR104], VAR8 / VAR133, VAR42, NULL);
                        }
                        VAR159->VAR175[VAR62 * 16 + VAR104] = VAR171 < VAR170;
                    }
                    VAR64 += VAR166->VAR67.VAR80[VAR104];
                }
            }
        }
        AACCoefficientsEncoder VAR176[] = {
            {
                VAR177,
                VAR178,
                VAR179,
                VAR180,
            },
            {
                VAR181,
                VAR178,
                VAR179,
                VAR180,
            },
            {
                VAR182,
                VAR178,
                VAR179,
                VAR180,
            },
            {
                VAR183,
                VAR178,
                VAR179,
                VAR180,
            },
        };