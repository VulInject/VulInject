static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11;
    FUN2(float, VAR12[VAR13 * 2]);
    int VAR14[VAR15];
    float VAR16;
    FUN3("", VAR2->VAR17 - 1, VAR2->VAR18);
    if (VAR2->VAR19)
    {
        VAR3 = FUN4(VAR2->VAR20 - 1) + 1;
        if (VAR2->VAR21)
        {
            VAR2->VAR21 = 0;
            VAR4 = FUN5(&VAR2->VAR22, VAR3);
            if (VAR4 >= VAR2->VAR20)
                return -1;
            VAR2->VAR23 = VAR2->VAR24 - VAR4;
            VAR4 = FUN5(&VAR2->VAR22, VAR3);
            if (VAR4 >= VAR2->VAR20)
                return -1;
            VAR2->VAR25 = VAR2->VAR24 - VAR4;
        }
        else
        {
            VAR2->VAR23 = VAR2->VAR25;
            VAR2->VAR25 = VAR2->VAR26;
        }
        VAR4 = FUN5(&VAR2->VAR22, VAR3);
        if (VAR4 >= VAR2->VAR20)
            return -1;
        VAR2->VAR26 = VAR2->VAR24 - VAR4;
    }
    else
    {
        VAR2->VAR26 = VAR2->VAR24;
        VAR2->VAR23 = VAR2->VAR24;
        VAR2->VAR25 = VAR2->VAR24;
    }
    VAR2->VAR27 = 1 << VAR2->VAR25;
    if ((VAR2->VAR28 + VAR2->VAR27) > VAR2->VAR29)
        return -1;
    if (VAR2->VAR30 == 2)
    {
        VAR2->VAR31 = FUN5(&VAR2->VAR22, 1);
    }
    VAR4 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        VAR5 = FUN5(&VAR2->VAR22, 1);
        VAR2->VAR32[VAR6] = VAR5;
        VAR4 |= VAR5;
    }
    if (!VAR4)
        goto VAR33;
    VAR8 = VAR2->VAR24 - VAR2->VAR25;
    VAR10 = 1;
    for (;;)
    {
        VAR5 = FUN5(&VAR2->VAR22, 7);
        VAR10 += VAR5;
        if (VAR5 != 127)
            break;
    }
    if (VAR10 < 15)
        VAR9 = 13;
    else if (VAR10 < 32)
        VAR9 = 12;
    else if (VAR10 < 40)
        VAR9 = 11;
    else if (VAR10 < 45)
        VAR9 = 10;
    else
        VAR9 = 9;
    VAR3 = VAR2->VAR34[VAR8] - VAR2->VAR35;
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
        VAR14[VAR6] = VAR3;
    if (VAR2->VAR36)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
        {
            if (VAR2->VAR32[VAR6])
            {
                int VAR37, VAR3, VAR5;
                VAR3 = VAR2->VAR38[VAR8];
                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                {
                    VAR5 = FUN5(&VAR2->VAR22, 1);
                    VAR2->VAR39[VAR6][VAR37] = VAR5;
                    if (VAR5)
                        VAR14[VAR6] -= VAR2->VAR40[VAR8][VAR37];
                }
            }
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
        {
            if (VAR2->VAR32[VAR6])
            {
                int VAR37, VAR3, VAR41, VAR7;
                VAR3 = VAR2->VAR38[VAR8];
                VAR41 = (int)0x80000000;
                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                {
                    if (VAR2->VAR39[VAR6][VAR37])
                    {
                        if (VAR41 == (int)0x80000000)
                        {
                            VAR41 = FUN5(&VAR2->VAR22, 7) - 19;
                        }
                        else
                        {
                            VAR7 = FUN6(&VAR2->VAR22, VAR2->VAR42.VAR43, VAR44, VAR45);
                            if (VAR7 < 0)
                                return -1;
                            VAR41 += VAR7 - 18;
                        }
                        VAR2->VAR46[VAR6][VAR37] = VAR41;
                    }
                }
            }
        }
    }
    VAR11 = 1;
    if (VAR2->VAR25 != VAR2->VAR24)
    {
        VAR11 = FUN5(&VAR2->VAR22, 1);
    }
    if (VAR11)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
        {
            if (VAR2->VAR32[VAR6])
            {
                if (VAR2->VAR47)
                {
                    if (FUN7(VAR2, VAR6) < 0)
                        return -1;
                }
                else
                {
                    FUN8(VAR2, VAR6);
                }
            }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
        {
            if (VAR2->VAR32[VAR6])
            {
                FUN9(VAR2->VAR48[VAR6], 1 << VAR2->VAR23, VAR2->VAR27);
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        if (VAR2->VAR32[VAR6])
        {
            VAR49 *VAR50;
            int VAR51, VAR52, VAR53, VAR54;
            VAR55 *VAR56, *VAR57;
            const VAR58 *VAR59, *VAR60;
            VAR54 = (VAR6 == 1 && VAR2->VAR31);
            VAR50 = &VAR2->VAR50[VAR54];
            VAR60 = VAR2->VAR60[VAR54];
            VAR59 = VAR2->VAR59[VAR54];
            VAR56 = &VAR2->VAR61[VAR6][0];
            VAR57 = VAR56 + VAR14[VAR6];
            memset(VAR56, 0, VAR2->VAR27 * sizeof(VAR55));
            for (;;)
            {
                VAR7 = FUN6(&VAR2->VAR22, VAR50->VAR43, VAR62, VAR63);
                if (VAR7 < 0)
                    return -1;
                if (VAR7 == 1)
                {
                    break;
                }
                else if (VAR7 == 0)
                {
                    VAR51 = FUN5(&VAR2->VAR22, VAR9);
                    VAR52 = FUN5(&VAR2->VAR22, VAR2->VAR24);
                }
                else
                {
                    VAR52 = VAR60[VAR7];
                    VAR51 = VAR59[VAR7];
                }
                VAR53 = FUN5(&VAR2->VAR22, 1);
                if (!VAR53)
                    VAR51 = -VAR51;
                VAR56 += VAR52;
                if (VAR56 >= VAR57)
                {
                    FUN10(NULL, VAR64, "");
                    break;
                }
                *VAR56++ = VAR51;
                if (VAR56 >= VAR57)
                    break;
            }
        }
        if (VAR2->VAR65 == 1 && VAR2->VAR30 >= 2)
        {
            FUN11(&VAR2->VAR22);
        }
    }
    {
        int VAR66 = VAR2->VAR27 / 2;
        VAR16 = 1.0 / (float)VAR66;
        if (VAR2->VAR65 == 1)
        {
            VAR16 *= FUN12(VAR66);
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        if (VAR2->VAR32[VAR6])
        {
            VAR55 *VAR61;
            float *VAR67, *VAR48, VAR68, VAR69, VAR70, *VAR71;
            int VAR37, VAR72, VAR3, VAR73, VAR74;
            float VAR75[VAR76];
            VAR61 = VAR2->VAR61[VAR6];
            VAR48 = VAR2->VAR48[VAR6];
            VAR68 = FUN13(10, VAR10 * 0.05) / VAR2->VAR77[VAR6];
            VAR68 *= VAR16;
            VAR67 = VAR2->VAR67[VAR6];
            if (VAR2->VAR36)
            {
                VAR69 = VAR68;
                for (VAR37 = 0; VAR37 < VAR2->VAR35; VAR37++)
                {
                    *VAR67++ = VAR2->VAR78[VAR2->VAR79] * (*VAR48++) * VAR69;
                    VAR2->VAR79 = (VAR2->VAR79 + 1) & (VAR80 - 1);
                }
                VAR73 = VAR2->VAR38[VAR8];
                VAR71 = VAR48 + VAR2->VAR81[VAR8] - VAR2->VAR35;
                VAR74 = 0;
                for (VAR72 = 0; VAR72 < VAR73; VAR72++)
                {
                    VAR3 = VAR2->VAR40[VAR2->VAR24 - VAR2->VAR25][VAR72];
                    if (VAR2->VAR39[VAR6][VAR72])
                    {
                        float VAR82, VAR4;
                        VAR82 = 0;
                        for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                        {
                            VAR4 = VAR71[VAR37];
                            VAR82 += VAR4 * VAR4;
                        }
                        VAR75[VAR72] = VAR82 / VAR3;
                        VAR74 = VAR72;
                        FUN3("", VAR72, VAR75[VAR72], VAR3);
                    }
                    VAR71 += VAR3;
                }
                for (VAR72 = -1; VAR72 < VAR73; VAR72++)
                {
                    if (VAR72 < 0)
                    {
                        VAR3 = VAR2->VAR81[VAR8] - VAR2->VAR35;
                    }
                    else
                    {
                        VAR3 = VAR2->VAR40[VAR2->VAR24 - VAR2->VAR25][VAR72];
                    }
                    if (VAR72 >= 0 && VAR2->VAR39[VAR6][VAR72])
                    {
                        VAR69 = FUN12(VAR75[VAR72] / VAR75[VAR74]);
                        VAR69 = VAR69 * FUN13(10, VAR2->VAR46[VAR6][VAR72] * 0.05);
                        VAR69 = VAR69 / (VAR2->VAR77[VAR6] * VAR2->VAR83);
                        VAR69 *= VAR16;
                        for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                        {
                            VAR70 = VAR2->VAR78[VAR2->VAR79];
                            VAR2->VAR79 = (VAR2->VAR79 + 1) & (VAR80 - 1);
                            *VAR67++ = (*VAR48++) * VAR70 * VAR69;
                        }
                    }
                    else
                    {
                        for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                        {
                            VAR70 = VAR2->VAR78[VAR2->VAR79];
                            VAR2->VAR79 = (VAR2->VAR79 + 1) & (VAR80 - 1);
                            *VAR67++ = ((*VAR61++) + VAR70) * (*VAR48++) * VAR68;
                        }
                    }
                }
                VAR3 = VAR2->VAR27 - VAR2->VAR34[VAR8];
                VAR69 = VAR68 * VAR48[-1];
                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                {
                    *VAR67++ = VAR2->VAR78[VAR2->VAR79] * VAR69;
                    VAR2->VAR79 = (VAR2->VAR79 + 1) & (VAR80 - 1);
                }
            }
            else
            {
                for (VAR37 = 0; VAR37 < VAR2->VAR35; VAR37++)
                    *VAR67++ = 0.0;
                VAR3 = VAR14[VAR6];
                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                {
                    *VAR67++ = VAR61[VAR37] * VAR48[VAR37] * VAR68;
                }
                VAR3 = VAR2->VAR27 - VAR2->VAR34[VAR8];
                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                    *VAR67++ = 0.0;
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        if (VAR2->VAR32[VAR6])
        {
            FUN14("", 3, VAR2->VAR48[VAR6], VAR2->VAR27);
            FUN14("", 1, VAR2->VAR67[VAR6], VAR2->VAR27);
        }
    }
    if (VAR2->VAR31 && VAR2->VAR32[1])
    {
        float VAR5, VAR84;
        int VAR37;
        if (!VAR2->VAR32[0])
        {
            FUN3("");
            memset(VAR2->VAR67[0], 0, sizeof(float) * VAR2->VAR27);
            VAR2->VAR32[0] = 1;
        }
        for (VAR37 = 0; VAR37 < VAR2->VAR27; VAR37++)
        {
            VAR5 = VAR2->VAR67[0][VAR37];
            VAR84 = VAR2->VAR67[1][VAR37];
            VAR2->VAR67[0][VAR37] = VAR5 + VAR84;
            VAR2->VAR67[1][VAR37] = VAR5 - VAR84;
        }
    }
    {
        int VAR37, VAR85, VAR27, VAR86, VAR3;
        float *VAR87;
        VAR27 = VAR2->VAR27;
        VAR86 = 1 << VAR2->VAR23;
        VAR85 = 1 << VAR2->VAR26;
        VAR87 = VAR12 + VAR27;
        if (VAR27 <= VAR85)
        {
            for (VAR37 = 0; VAR37 < VAR27; VAR37++)
                *VAR87++ = VAR2->VAR88[VAR8][VAR37];
        }
        else
        {
            VAR3 = (VAR27 / 2) - (VAR85 / 2);
            for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                *VAR87++ = 1.0;
            for (VAR37 = 0; VAR37 < VAR85; VAR37++)
                *VAR87++ = VAR2->VAR88[VAR2->VAR24 - VAR2->VAR26][VAR37];
            for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                *VAR87++ = 0.0;
        }
        VAR87 = VAR12 + VAR27;
        if (VAR27 <= VAR86)
        {
            for (VAR37 = 0; VAR37 < VAR27; VAR37++)
                *--VAR87 = VAR2->VAR88[VAR8][VAR37];
        }
        else
        {
            VAR3 = (VAR27 / 2) - (VAR86 / 2);
            for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                *--VAR87 = 1.0;
            for (VAR37 = 0; VAR37 < VAR86; VAR37++)
                *--VAR87 = VAR2->VAR88[VAR2->VAR24 - VAR2->VAR23][VAR37];
            for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                *--VAR87 = 0.0;
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        if (VAR2->VAR32[VAR6])
        {
            FUN2(VAR89, VAR90[VAR13 * 2]);
            float *VAR56;
            int VAR66, VAR91, VAR3;
            VAR3 = VAR2->VAR27;
            VAR66 = VAR2->VAR27 / 2;
            VAR2->VAR92[VAR8].VAR93.FUN15(&VAR2->VAR92[VAR8], VAR90, VAR2->VAR67[VAR6], VAR2->VAR94);
            VAR91 = (VAR2->VAR29 / 2) + VAR2->VAR28 - VAR66;
            VAR56 = &VAR2->VAR95[VAR6][VAR91];
            VAR2->VAR96.FUN16(VAR56, VAR12, VAR90, VAR56, 0, 2 * VAR3, 1);
            if (VAR2->VAR31 && !VAR2->VAR32[1])
            {
                VAR56 = &VAR2->VAR95[1][VAR91];
                VAR2->VAR96.FUN16(VAR56, VAR12, VAR90, VAR56, 0, 2 * VAR3, 1);
            }
        }
    }
VAR33:
    VAR2->VAR18++;
    VAR2->VAR28 += VAR2->VAR27;
    if (VAR2->VAR28 >= VAR2->VAR29)
        return 1;
    else
        return 0;
}