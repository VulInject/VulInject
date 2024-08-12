int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    float *VAR8;
    float VAR9, VAR10;
    volatile float VAR11;
    int VAR12;
    int VAR13;
    VAR5->VAR14 = VAR2->VAR14;
    VAR5->VAR15 = VAR2->VAR16;
    VAR5->VAR17 = VAR2->VAR17;
    VAR5->VAR18 = VAR2->VAR18;
    FUN2(&VAR5->VAR19, VAR2);
    if (VAR2->VAR20->VAR21 == VAR22)
    {
        VAR5->VAR23 = 1;
    }
    else
    {
        VAR5->VAR23 = 2;
    }
    if (VAR5->VAR14 <= 16000)
    {
        VAR5->VAR24 = 9;
    }
    else if (VAR5->VAR14 <= 22050 || (VAR5->VAR14 <= 32000 && VAR5->VAR23 == 1))
    {
        VAR5->VAR24 = 10;
    }
    else
    {
        VAR5->VAR24 = 11;
    }
    VAR5->VAR25 = 1 << VAR5->VAR24;
    if (VAR5->VAR26)
    {
        int VAR27, VAR28;
        VAR28 = ((VAR3 >> 3) & 3) + 1;
        if ((VAR5->VAR17 / VAR5->VAR15) >= 32000)
            VAR28 += 2;
        VAR27 = VAR5->VAR24 - VAR29;
        if (VAR28 > VAR27)
            VAR28 = VAR27;
        VAR5->VAR30 = VAR28 + 1;
    }
    else
    {
        VAR5->VAR30 = 1;
    }
    VAR5->VAR31 = 1;
    VAR10 = VAR5->VAR14 * 0.5;
    VAR12 = VAR5->VAR14;
    if (VAR5->VAR23 == 2)
    {
        if (VAR12 >= 44100)
            VAR12 = 44100;
        else if (VAR12 >= 22050)
            VAR12 = 22050;
        else if (VAR12 >= 16000)
            VAR12 = 16000;
        else if (VAR12 >= 11025)
            VAR12 = 11025;
        else if (VAR12 >= 8000)
            VAR12 = 8000;
    }
    VAR11 = (float)VAR5->VAR17 / (float)(VAR5->VAR15 * VAR5->VAR14);
    VAR5->VAR32 = FUN3((int)(VAR11 * VAR5->VAR25 / 8.0 + 0.5)) + 2;
    VAR9 = VAR11;
    if (VAR5->VAR15 == 2)
        VAR9 = VAR11 * 1.6;
    if (VAR12 == 44100)
    {
        if (VAR9 >= 0.61)
            VAR5->VAR31 = 0;
        else
            VAR10 = VAR10 * 0.4;
    }
    else if (VAR12 == 22050)
    {
        if (VAR9 >= 1.16)
            VAR5->VAR31 = 0;
        else if (VAR9 >= 0.72)
            VAR10 = VAR10 * 0.7;
        else
            VAR10 = VAR10 * 0.6;
    }
    else if (VAR12 == 16000)
    {
        if (VAR11 > 0.5)
            VAR10 = VAR10 * 0.5;
        else
            VAR10 = VAR10 * 0.3;
    }
    else if (VAR12 == 11025)
    {
        VAR10 = VAR10 * 0.7;
    }
    else if (VAR12 == 8000)
    {
        if (VAR11 <= 0.625)
        {
            VAR10 = VAR10 * 0.5;
        }
        else if (VAR11 > 0.75)
        {
            VAR5->VAR31 = 0;
        }
        else
        {
            VAR10 = VAR10 * 0.65;
        }
    }
    else
    {
        if (VAR11 >= 0.8)
        {
            VAR10 = VAR10 * 0.75;
        }
        else if (VAR11 >= 0.6)
        {
            VAR10 = VAR10 * 0.6;
        }
        else
        {
            VAR10 = VAR10 * 0.5;
        }
    }
    FUN4(VAR5->VAR2, "", VAR3);
    FUN4(VAR5->VAR2, "", VAR5->VAR23, VAR5->VAR15, VAR5->VAR14, VAR5->VAR17, VAR5->VAR18);
    FUN4(VAR5->VAR2, "", VAR11, VAR9, VAR10, VAR5->VAR32);
    FUN4(VAR5->VAR2, "", VAR5->VAR31, VAR5->VAR33, VAR5->VAR30);
    {
        int VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR7, VAR40, VAR41;
        const VAR42 *VAR43;
        if (VAR5->VAR23 == 1)
        {
            VAR5->VAR44 = 3;
        }
        else
        {
            VAR5->VAR44 = 0;
        }
        for (VAR38 = 0; VAR38 < VAR5->VAR30; VAR38++)
        {
            VAR39 = VAR5->VAR25 >> VAR38;
            if (VAR5->VAR23 == 1)
            {
                VAR37 = 0;
                for (VAR7 = 0; VAR7 < 25; VAR7++)
                {
                    VAR34 = VAR45[VAR7];
                    VAR35 = VAR5->VAR14;
                    VAR36 = ((VAR39 * 2 * VAR34) + (VAR35 >> 1)) / VAR35;
                    if (VAR36 > VAR39)
                        VAR36 = VAR39;
                    VAR5->VAR46[0][VAR7] = VAR36 - VAR37;
                    if (VAR36 >= VAR39)
                    {
                        VAR7++;
                        break;
                    }
                    VAR37 = VAR36;
                }
                VAR5->VAR47[0] = VAR7;
            }
            else
            {
                VAR43 = NULL;
                VAR34 = VAR5->VAR24 - VAR29 - VAR38;
                if (VAR34 < 3)
                {
                    if (VAR5->VAR14 >= 44100)
                        VAR43 = VAR48[VAR34];
                    else if (VAR5->VAR14 >= 32000)
                        VAR43 = VAR49[VAR34];
                    else if (VAR5->VAR14 >= 22050)
                        VAR43 = VAR50[VAR34];
                }
                if (VAR43)
                {
                    VAR41 = *VAR43++;
                    for (VAR7 = 0; VAR7 < VAR41; VAR7++)
                        VAR5->VAR46[VAR38][VAR7] = VAR43[VAR7];
                    VAR5->VAR47[VAR38] = VAR41;
                }
                else
                {
                    VAR40 = 0;
                    VAR37 = 0;
                    for (VAR7 = 0; VAR7 < 25; VAR7++)
                    {
                        VAR34 = VAR45[VAR7];
                        VAR35 = VAR5->VAR14;
                        VAR36 = ((VAR39 * 2 * VAR34) + (VAR35 << 1)) / (4 * VAR35);
                        VAR36 <<= 2;
                        if (VAR36 > VAR39)
                            VAR36 = VAR39;
                        if (VAR36 > VAR37)
                            VAR5->VAR46[VAR38][VAR40++] = VAR36 - VAR37;
                        if (VAR36 >= VAR39)
                            break;
                        VAR37 = VAR36;
                    }
                    VAR5->VAR47[VAR38] = VAR40;
                }
            }
            VAR5->VAR51[VAR38] = (VAR5->VAR25 - ((VAR5->VAR25 * 9) / 100)) >> VAR38;
            VAR5->VAR52[VAR38] = (int)((VAR39 * 2 * VAR10) / VAR5->VAR14 + 0.5);
            VAR41 = VAR5->VAR47[VAR38];
            VAR40 = 0;
            VAR36 = 0;
            for (VAR7 = 0; VAR7 < VAR41; VAR7++)
            {
                int VAR53, VAR54;
                VAR53 = VAR36;
                VAR36 += VAR5->VAR46[VAR38][VAR7];
                VAR54 = VAR36;
                if (VAR53 < VAR5->VAR52[VAR38])
                    VAR53 = VAR5->VAR52[VAR38];
                if (VAR54 > VAR5->VAR51[VAR38])
                    VAR54 = VAR5->VAR51[VAR38];
                if (VAR54 > VAR53)
                    VAR5->VAR55[VAR38][VAR40++] = VAR54 - VAR53;
            }
            VAR5->VAR56[VAR38] = VAR40;
            FUN5(VAR5->VAR2, "", VAR5->VAR25 >> VAR38, VAR5->VAR51[VAR38], VAR5->VAR52[VAR38], VAR5->VAR56[VAR38]);
            for (VAR40 = 0; VAR40 < VAR5->VAR56[VAR38]; VAR40++)
                FUN5(VAR5->VAR2, "", VAR5->VAR55[VAR38][VAR40]);
            FUN5(VAR5->VAR2, "");
        }
    }
    {
        int VAR7, VAR40;
        for (VAR7 = 0; VAR7 < VAR5->VAR30; VAR7++)
        {
            FUN5(VAR5->VAR2, "", VAR5->VAR25 >> VAR7, VAR5->VAR47[VAR7]);
            for (VAR40 = 0; VAR40 < VAR5->VAR47[VAR7]; VAR40++)
                FUN5(VAR5->VAR2, "", VAR5->VAR46[VAR7][VAR40]);
            FUN5(VAR5->VAR2, "");
        }
    }
    for (VAR7 = 0; VAR7 < VAR5->VAR30; VAR7++)
    {
        int VAR41, VAR40;
        float VAR57;
        VAR41 = 1 << (VAR5->VAR24 - VAR7);
        VAR8 = FUN6(sizeof(float) * VAR41);
        VAR57 = VAR58 / (2.0 * VAR41);
        for (VAR40 = 0; VAR40 < VAR41; VAR40++)
        {
            VAR8[VAR40] = FUN7((VAR40 + 0.5) * VAR57);
        }
        VAR5->VAR59[VAR7] = VAR8;
    }
    VAR5->VAR60 = 1;
    if (VAR5->VAR31)
    {
        if (VAR5->VAR33)
            VAR5->VAR61 = 0.02;
        else
            VAR5->VAR61 = 0.04;
        for (VAR7 = 0; VAR7 < VAR62; VAR7++)
            VAR5->VAR63[VAR7] = 1.0 * VAR5->VAR61;
        {
            unsigned int VAR64;
            float VAR65;
            VAR64 = 1;
            VAR65 = (1.0 / (float)(1LL << 31)) * FUN8(3) * VAR5->VAR61;
            for (VAR7 = 0; VAR7 < VAR62; VAR7++)
            {
                VAR64 = VAR64 * 314159 + 1;
                VAR5->VAR63[VAR7] = (float)((int)VAR64) * VAR65;
            }
        }
    }
    VAR13 = 2;
    if (VAR5->VAR14 >= 32000)
    {
        if (VAR9 < 0.72)
            VAR13 = 0;
        else if (VAR9 < 1.16)
            VAR13 = 1;
    }
    VAR5->VAR66[0] = &VAR66[VAR13 * 2];
    VAR5->VAR66[1] = &VAR66[VAR13 * 2 + 1];
    FUN9(&VAR5->VAR67[0], &VAR5->VAR68[0], &VAR5->VAR69[0], &VAR5->VAR70[0], VAR5->VAR66[0]);
    FUN9(&VAR5->VAR67[1], &VAR5->VAR68[1], &VAR5->VAR69[1], &VAR5->VAR70[1], VAR5->VAR66[1]);
    return 0;