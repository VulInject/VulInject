static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8;
    float *VAR9;
    VAR10 *VAR11;
    float VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16;
    VAR4->VAR17 = VAR2->VAR17;
    VAR4->VAR18 = VAR2->VAR19;
    VAR4->VAR20 = VAR2->VAR20;
    VAR4->VAR21 = VAR2->VAR21;
    if (VAR2->VAR22->VAR23 == VAR24)
    {
        VAR4->VAR25 = 1;
    }
    else
    {
        VAR4->VAR25 = 2;
    }
    VAR7 = 0;
    VAR8 = 0;
    VAR11 = VAR2->VAR11;
    if (VAR4->VAR25 == 1 && VAR2->VAR26 >= 4)
    {
        VAR7 = VAR11[0] | (VAR11[1] << 8);
        VAR8 = VAR11[2] | (VAR11[3] << 8);
    }
    else if (VAR4->VAR25 == 2 && VAR2->VAR26 >= 6)
    {
        VAR7 = VAR11[0] | (VAR11[1] << 8) | (VAR11[2] << 16) | (VAR11[3] << 24);
        VAR8 = VAR11[4] | (VAR11[5] << 8);
    }
    VAR4->VAR27 = VAR8 & 0x0001;
    VAR4->VAR28 = VAR8 & 0x0002;
    VAR4->VAR29 = VAR8 & 0x0004;
    if (VAR4->VAR17 <= 16000)
    {
        VAR4->VAR30 = 9;
    }
    else if (VAR4->VAR17 <= 22050 || (VAR4->VAR17 <= 32000 && VAR4->VAR25 == 1))
    {
        VAR4->VAR30 = 10;
    }
    else
    {
        VAR4->VAR30 = 11;
    }
    VAR4->VAR31 = 1 << VAR4->VAR30;
    if (VAR4->VAR29)
    {
        int VAR32, VAR33;
        VAR33 = ((VAR8 >> 3) & 3) + 1;
        if ((VAR4->VAR20 / VAR4->VAR18) >= 32000)
            VAR33 += 2;
        VAR32 = VAR4->VAR30 - VAR34;
        if (VAR33 > VAR32)
            VAR33 = VAR32;
        VAR4->VAR35 = VAR33 + 1;
    }
    else
    {
        VAR4->VAR35 = 1;
    }
    VAR4->VAR36 = 1;
    VAR13 = VAR4->VAR17 * 0.5;
    VAR15 = VAR4->VAR17;
    if (VAR4->VAR25 == 2)
    {
        if (VAR15 >= 44100)
            VAR15 = 44100;
        else if (VAR15 >= 22050)
            VAR15 = 22050;
        else if (VAR15 >= 16000)
            VAR15 = 16000;
        else if (VAR15 >= 11025)
            VAR15 = 11025;
        else if (VAR15 >= 8000)
            VAR15 = 8000;
    }
    VAR14 = (float)VAR4->VAR20 / (float)(VAR4->VAR18 * VAR4->VAR17);
    VAR4->VAR37 = FUN2((int)(VAR14 * VAR4->VAR31 / 8.0)) + 2;
    VAR12 = VAR14;
    if (VAR4->VAR18 == 2)
        VAR12 = VAR14 * 1.6;
    if (VAR15 == 44100)
    {
        if (VAR12 >= 0.61)
            VAR4->VAR36 = 0;
        else
            VAR13 = VAR13 * 0.4;
    }
    else if (VAR15 == 22050)
    {
        if (VAR12 >= 1.16)
            VAR4->VAR36 = 0;
        else if (VAR12 >= 0.72)
            VAR13 = VAR13 * 0.7;
        else
            VAR13 = VAR13 * 0.6;
    }
    else if (VAR15 == 16000)
    {
        if (VAR14 > 0.5)
            VAR13 = VAR13 * 0.5;
        else
            VAR13 = VAR13 * 0.3;
    }
    else if (VAR15 == 11025)
    {
        VAR13 = VAR13 * 0.7;
    }
    else if (VAR15 == 8000)
    {
        if (VAR14 <= 0.625)
        {
            VAR13 = VAR13 * 0.5;
        }
        else if (VAR14 > 0.75)
        {
            VAR4->VAR36 = 0;
        }
        else
        {
            VAR13 = VAR13 * 0.65;
        }
    }
    else
    {
        if (VAR14 >= 0.8)
        {
            VAR13 = VAR13 * 0.75;
        }
        else if (VAR14 >= 0.6)
        {
            VAR13 = VAR13 * 0.6;
        }
        else
        {
            VAR13 = VAR13 * 0.5;
        }
    }
    FUN3("", VAR7, VAR8);
    FUN3("", VAR4->VAR25, VAR4->VAR18, VAR4->VAR17, VAR4->VAR20, VAR4->VAR21);
    FUN3("", VAR14, VAR12, VAR13, VAR4->VAR37);
    FUN3("", VAR4->VAR36, VAR4->VAR27, VAR4->VAR35);
    {
        int VAR38, VAR39, VAR40, VAR41, VAR42, VAR43, VAR6, VAR44, VAR45;
        const VAR10 *VAR46;
        if (VAR4->VAR25 == 1)
        {
            VAR4->VAR47 = 3;
        }
        else
        {
            VAR4->VAR47 = 0;
        }
        for (VAR42 = 0; VAR42 < VAR4->VAR35; VAR42++)
        {
            VAR43 = VAR4->VAR31 >> VAR42;
            if (VAR4->VAR25 == 1)
            {
                VAR41 = 0;
                for (VAR6 = 0; VAR6 < 25; VAR6++)
                {
                    VAR38 = VAR48[VAR6];
                    VAR39 = VAR4->VAR17;
                    VAR40 = ((VAR43 * 2 * VAR38) + (VAR39 >> 1)) / VAR39;
                    if (VAR40 > VAR43)
                        VAR40 = VAR43;
                    VAR4->VAR49[0][VAR6] = VAR40 - VAR41;
                    if (VAR40 >= VAR43)
                    {
                        VAR6++;
                        break;
                    }
                    VAR41 = VAR40;
                }
                VAR4->VAR50[0] = VAR6;
            }
            else
            {
                VAR46 = NULL;
                VAR38 = VAR4->VAR30 - VAR34 - VAR42;
                if (VAR38 < 3)
                {
                    if (VAR4->VAR17 >= 44100)
                        VAR46 = VAR51[VAR38];
                    else if (VAR4->VAR17 >= 32000)
                        VAR46 = VAR52[VAR38];
                    else if (VAR4->VAR17 >= 22050)
                        VAR46 = VAR53[VAR38];
                }
                if (VAR46)
                {
                    VAR45 = *VAR46++;
                    for (VAR6 = 0; VAR6 < VAR45; VAR6++)
                        VAR4->VAR49[VAR42][VAR6] = VAR46[VAR6];
                    VAR4->VAR50[VAR42] = VAR45;
                }
                else
                {
                    VAR44 = 0;
                    VAR41 = 0;
                    for (VAR6 = 0; VAR6 < 25; VAR6++)
                    {
                        VAR38 = VAR48[VAR6];
                        VAR39 = VAR4->VAR17;
                        VAR40 = ((VAR43 * 2 * VAR38) + (VAR39 << 1)) / (4 * VAR39);
                        VAR40 <<= 2;
                        if (VAR40 > VAR43)
                            VAR40 = VAR43;
                        if (VAR40 > VAR41)
                            VAR4->VAR49[VAR42][VAR44++] = VAR40 - VAR41;
                        if (VAR40 >= VAR43)
                            break;
                        VAR41 = VAR40;
                    }
                    VAR4->VAR50[VAR42] = VAR44;
                }
            }
            VAR4->VAR54[VAR42] = (VAR4->VAR31 - ((VAR4->VAR31 * 9) / 100)) >> VAR42;
            VAR4->VAR55[VAR42] = (int)((VAR43 * 2 * VAR13) / VAR4->VAR17 + 0.5);
            VAR45 = VAR4->VAR50[VAR42];
            VAR44 = 0;
            VAR40 = 0;
            for (VAR6 = 0; VAR6 < VAR45; VAR6++)
            {
                int VAR56, VAR57;
                VAR56 = VAR40;
                VAR40 += VAR4->VAR49[VAR42][VAR6];
                VAR57 = VAR40;
                if (VAR56 < VAR4->VAR55[VAR42])
                    VAR56 = VAR4->VAR55[VAR42];
                if (VAR57 > VAR4->VAR54[VAR42])
                    VAR57 = VAR4->VAR54[VAR42];
                if (VAR57 > VAR56)
                    VAR4->VAR58[VAR42][VAR44++] = VAR57 - VAR56;
            }
            VAR4->VAR59[VAR42] = VAR44;
            FUN4("", VAR4->VAR31 >> VAR42, VAR4->VAR54[VAR42], VAR4->VAR55[VAR42], VAR4->VAR59[VAR42]);
            for (VAR44 = 0; VAR44 < VAR4->VAR59[VAR42]; VAR44++)
                FUN4("", VAR4->VAR58[VAR42][VAR44]);
            FUN4("");
        }
    }
    {
        int VAR6, VAR44;
        for (VAR6 = 0; VAR6 < VAR4->VAR35; VAR6++)
        {
            FUN4("", VAR4->VAR31 >> VAR6, VAR4->VAR50[VAR6]);
            for (VAR44 = 0; VAR44 < VAR4->VAR50[VAR6]; VAR44++)
                FUN4("", VAR4->VAR49[VAR6][VAR44]);
            FUN4("");
        }
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR35; VAR6++)
        FUN5(&VAR4->VAR60[VAR6], VAR4->VAR30 - VAR6 + 1, 1);
    for (VAR6 = 0; VAR6 < VAR4->VAR35; VAR6++)
    {
        int VAR45, VAR44;
        float VAR61;
        VAR45 = 1 << (VAR4->VAR30 - VAR6);
        VAR9 = FUN6(sizeof(float) * VAR45);
        VAR61 = VAR62 / (2.0 * VAR45);
        for (VAR44 = 0; VAR44 < VAR45; VAR44++)
        {
            VAR9[VAR45 - VAR44 - 1] = FUN7((VAR44 + 0.5) * VAR61);
        }
        VAR4->VAR63[VAR6] = VAR9;
    }
    VAR4->VAR64 = 1;
    if (VAR4->VAR36)
    {
        if (VAR4->VAR27)
            VAR4->VAR65 = 0.02;
        else
            VAR4->VAR65 = 0.04;
        for (VAR6 = 0; VAR6 < VAR66; VAR6++)
            VAR4->VAR67[VAR6] = 1.0 * VAR4->VAR65;
        {
            unsigned int VAR68;
            float VAR69;
            VAR68 = 1;
            VAR69 = (1.0 / (float)(1LL << 31)) * FUN8(3) * VAR4->VAR65;
            for (VAR6 = 0; VAR6 < VAR66; VAR6++)
            {
                VAR68 = VAR68 * 314159 + 1;
                VAR4->VAR67[VAR6] = (float)((int)VAR68) * VAR69;
            }
        }
        FUN9(&VAR4->VAR70, 9, sizeof(VAR71), VAR71, 1, 1, VAR72, 2, 2);
    }
    if (VAR4->VAR27)
    {
        FUN9(&VAR4->VAR73, 9, sizeof(VAR74), VAR74, 1, 1, VAR75, 4, 4);
    }
    else
    {
        FUN10(VAR4, VAR4->VAR31);
    }
    VAR16 = 2;
    if (VAR4->VAR17 >= 32000)
    {
        if (VAR12 < 0.72)
            VAR16 = 0;
        else if (VAR12 < 1.16)
            VAR16 = 1;
    }
    FUN11(&VAR4->VAR76[0], &VAR4->VAR77[0], &VAR4->VAR78[0], &VAR79[VAR16 * 2]);
    FUN11(&VAR4->VAR76[1], &VAR4->VAR77[1], &VAR4->VAR78[1], &VAR79[VAR16 * 2 + 1]);
    return 0;
}