int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    float VAR8, VAR9;
    volatile float VAR10;
    int VAR11;
    int VAR12;
    if (VAR2->VAR13 <= 0 || VAR2->VAR13 > 50000 || VAR2->VAR14 <= 0 || VAR2->VAR14 > 2 || VAR2->VAR15 <= 0)
        return -1;
    FUN2(&VAR5->VAR16, VAR2);
    FUN3(&VAR5->VAR17, VAR2->VAR18 & VAR19);
    if (VAR2->VAR20->VAR21 == VAR22)
    {
        VAR5->VAR23 = 1;
    }
    else
    {
        VAR5->VAR23 = 2;
        VAR5->VAR24 = FUN4(VAR2->VAR13, VAR5->VAR23, 0);
        VAR5->VAR25 = VAR5->VAR24;
        VAR5->VAR26 = VAR5->VAR24;
        VAR5->VAR27 = VAR5->VAR24;
        VAR5->VAR28 = 1 << VAR5->VAR24;
        if (VAR5->VAR29)
        {
            int VAR30, VAR31;
            VAR31 = ((VAR3 >> 3) & 3) + 1;
            if ((VAR2->VAR15 / VAR2->VAR14) >= 32000)
                VAR31 += 2;
            VAR30 = VAR5->VAR24 - VAR32;
            if (VAR31 > VAR30)
                VAR31 = VAR30;
            VAR5->VAR33 = VAR31 + 1;
        }
        else
        {
            VAR5->VAR33 = 1;
            VAR5->VAR34 = 1;
            VAR9 = VAR2->VAR13 * 0.5;
            VAR11 = VAR2->VAR13;
            if (VAR5->VAR23 == 2)
            {
                if (VAR11 >= 44100)
                {
                    VAR11 = 44100;
                }
                else if (VAR11 >= 22050)
                {
                    VAR11 = 22050;
                }
                else if (VAR11 >= 16000)
                {
                    VAR11 = 16000;
                }
                else if (VAR11 >= 11025)
                {
                    VAR11 = 11025;
                }
                else if (VAR11 >= 8000)
                {
                    VAR11 = 8000;
                    VAR10 = (float)VAR2->VAR15 / (float)(VAR2->VAR14 * VAR2->VAR13);
                    VAR5->VAR35 = FUN5((int)(VAR10 * VAR5->VAR28 / 8.0 + 0.5)) + 2;
                    VAR8 = VAR10;
                    if (VAR2->VAR14 == 2)
                        VAR8 = VAR10 * 1.6;
                    if (VAR11 == 44100)
                    {
                        if (VAR8 >= 0.61)
                        {
                            VAR5->VAR34 = 0;
                        }
                        else
                        {
                            VAR9 = VAR9 * 0.4;
                        }
                        else if (VAR11 == 22050)
                        {
                            if (VAR8 >= 1.16)
                            {
                                VAR5->VAR34 = 0;
                            }
                            else if (VAR8 >= 0.72)
                            {
                                VAR9 = VAR9 * 0.7;
                            }
                            else
                            {
                                VAR9 = VAR9 * 0.6;
                            }
                            else if (VAR11 == 16000)
                            {
                                if (VAR10 > 0.5)
                                {
                                    VAR9 = VAR9 * 0.5;
                                }
                                else
                                {
                                    VAR9 = VAR9 * 0.3;
                                }
                                else if (VAR11 == 11025) { VAR9 = VAR9 * 0.7; }
                                else if (VAR11 == 8000)
                                {
                                    if (VAR10 <= 0.625)
                                    {
                                        VAR9 = VAR9 * 0.5;
                                    }
                                    else if (VAR10 > 0.75)
                                    {
                                        VAR5->VAR34 = 0;
                                    }
                                    else
                                    {
                                        VAR9 = VAR9 * 0.65;
                                    }
                                    else
                                    {
                                        if (VAR10 >= 0.8)
                                        {
                                            VAR9 = VAR9 * 0.75;
                                        }
                                        else if (VAR10 >= 0.6)
                                        {
                                            VAR9 = VAR9 * 0.6;
                                        }
                                        else
                                        {
                                            VAR9 = VAR9 * 0.5;
                                            FUN6(VAR5->VAR2, "", VAR3);
                                            FUN6(VAR5->VAR2, "", VAR5->VAR23, VAR2->VAR14, VAR2->VAR13, VAR2->VAR15, VAR2->VAR36);
                                            FUN6(VAR5->VAR2, "", VAR10, VAR8, VAR9, VAR5->VAR35);
                                            FUN6(VAR5->VAR2, "", VAR5->VAR34, VAR5->VAR37, VAR5->VAR33);
                                            {
                                                int VAR38, VAR39, VAR40, VAR41, VAR42, VAR43, VAR7, VAR44, VAR45;
                                                const VAR46 *VAR47;
                                                if (VAR5->VAR23 == 1)
                                                {
                                                    VAR5->VAR48 = 3;
                                                }
                                                else
                                                {
                                                    VAR5->VAR48 = 0;
                                                    for (VAR42 = 0; VAR42 < VAR5->VAR33; VAR42++)
                                                    {
                                                        VAR43 = VAR5->VAR28 >> VAR42;
                                                        if (VAR5->VAR23 == 1)
                                                        {
                                                            VAR41 = 0;
                                                            for (VAR7 = 0; VAR7 < 25; VAR7++)
                                                            {
                                                                VAR38 = VAR49[VAR7];
                                                                VAR39 = VAR2->VAR13;
                                                                VAR40 = ((VAR43 * 2 * VAR38) + (VAR39 >> 1)) / VAR39;
                                                                if (VAR40 > VAR43)
                                                                    VAR40 = VAR43;
                                                                VAR5->VAR50[0][VAR7] = VAR40 - VAR41;
                                                                if (VAR40 >= VAR43)
                                                                {
                                                                    VAR7++;
                                                                    break;
                                                                    VAR41 = VAR40;
                                                                    VAR5->VAR51[0] = VAR7;
                                                                }
                                                                else
                                                                {
                                                                    VAR47 = NULL;
                                                                    VAR38 = VAR5->VAR24 - VAR32 - VAR42;
                                                                    if (VAR38 < 3)
                                                                    {
                                                                        if (VAR2->VAR13 >= 44100)
                                                                        {
                                                                            VAR47 = VAR52[VAR38];
                                                                        }
                                                                        else if (VAR2->VAR13 >= 32000)
                                                                        {
                                                                            VAR47 = VAR53[VAR38];
                                                                        }
                                                                        else if (VAR2->VAR13 >= 22050)
                                                                        {
                                                                            VAR47 = VAR54[VAR38];
                                                                            if (VAR47)
                                                                            {
                                                                                VAR45 = *VAR47++;
                                                                                for (VAR7 = 0; VAR7 < VAR45; VAR7++)
                                                                                    VAR5->VAR50[VAR42][VAR7] = VAR47[VAR7];
                                                                                VAR5->VAR51[VAR42] = VAR45;
                                                                            }
                                                                            else
                                                                            {
                                                                                VAR44 = 0;
                                                                                VAR41 = 0;
                                                                                for (VAR7 = 0; VAR7 < 25; VAR7++)
                                                                                {
                                                                                    VAR38 = VAR49[VAR7];
                                                                                    VAR39 = VAR2->VAR13;
                                                                                    VAR40 = ((VAR43 * 2 * VAR38) + (VAR39 << 1)) / (4 * VAR39);
                                                                                    VAR40 <<= 2;
                                                                                    if (VAR40 > VAR43)
                                                                                        VAR40 = VAR43;
                                                                                    if (VAR40 > VAR41)
                                                                                        VAR5->VAR50[VAR42][VAR44++] = VAR40 - VAR41;
                                                                                    if (VAR40 >= VAR43)
                                                                                        break;
                                                                                    VAR41 = VAR40;
                                                                                    VAR5->VAR51[VAR42] = VAR44;
                                                                                    VAR5->VAR55[VAR42] = (VAR5->VAR28 - ((VAR5->VAR28 * 9) / 100)) >> VAR42;
                                                                                    VAR5->VAR56[VAR42] = (int)((VAR43 * 2 * VAR9) / VAR2->VAR13 + 0.5);
                                                                                    VAR45 = VAR5->VAR51[VAR42];
                                                                                    VAR44 = 0;
                                                                                    VAR40 = 0;
                                                                                    for (VAR7 = 0; VAR7 < VAR45; VAR7++)
                                                                                    {
                                                                                        int VAR57, VAR58;
                                                                                        VAR57 = VAR40;
                                                                                        VAR40 += VAR5->VAR50[VAR42][VAR7];
                                                                                        VAR58 = VAR40;
                                                                                        if (VAR57 < VAR5->VAR56[VAR42])
                                                                                            VAR57 = VAR5->VAR56[VAR42];
                                                                                        if (VAR58 > VAR5->VAR55[VAR42])
                                                                                            VAR58 = VAR5->VAR55[VAR42];
                                                                                        if (VAR58 > VAR57)
                                                                                            VAR5->VAR59[VAR42][VAR44++] = VAR58 - VAR57;
                                                                                        VAR5->VAR60[VAR42] = VAR44;
                                                                                        FUN7(VAR5->VAR2, "", VAR5->VAR28 >> VAR42, VAR5->VAR55[VAR42], VAR5->VAR56[VAR42], VAR5->VAR60[VAR42]);
                                                                                        for (VAR44 = 0; VAR44 < VAR5->VAR60[VAR42]; VAR44++)
                                                                                            FUN7(VAR5->VAR2, "", VAR5->VAR59[VAR42][VAR44]);
                                                                                        FUN7(VAR5->VAR2, "");
                                                                                        {
                                                                                            int VAR7, VAR44;
                                                                                            for (VAR7 = 0; VAR7 < VAR5->VAR33; VAR7++)
                                                                                            {
                                                                                                FUN7(VAR5->VAR2, "", VAR5->VAR28 >> VAR7, VAR5->VAR51[VAR7]);
                                                                                                for (VAR44 = 0; VAR44 < VAR5->VAR51[VAR7]; VAR44++)
                                                                                                    FUN7(VAR5->VAR2, "", VAR5->VAR50[VAR7][VAR44]);
                                                                                                FUN7(VAR5->VAR2, "");
                                                                                                for (VAR7 = 0; VAR7 < VAR5->VAR33; VAR7++)
                                                                                                {
                                                                                                    FUN8(VAR5->VAR24 - VAR7);
                                                                                                    VAR5->VAR61[VAR7] = VAR62[VAR5->VAR24 - VAR7];
                                                                                                    VAR5->VAR63 = 1;
                                                                                                    if (VAR5->VAR34)
                                                                                                    {
                                                                                                        if (VAR5->VAR37)
                                                                                                        {
                                                                                                            VAR5->VAR64 = 0.02;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            VAR5->VAR64 = 0.04;
                                                                                                            for (VAR7 = 0; VAR7 < VAR65; VAR7++)
                                                                                                                VAR5->VAR66[VAR7] = 1.0 * VAR5->VAR64;
                                                                                                            {
                                                                                                                unsigned int VAR67;
                                                                                                                float VAR68;
                                                                                                                VAR67 = 1;
                                                                                                                VAR68 = (1.0 / (float)(1LL << 31)) * FUN9(3) * VAR5->VAR64;
                                                                                                                for (VAR7 = 0; VAR7 < VAR65; VAR7++)
                                                                                                                {
                                                                                                                    VAR67 = VAR67 * 314159 + 1;
                                                                                                                    VAR5->VAR66[VAR7] = (float)((int)VAR67) * VAR68;
                                                                                                                    VAR12 = 2;
                                                                                                                    if (VAR2->VAR13 >= 32000)
                                                                                                                    {
                                                                                                                        if (VAR8 < 0.72)
                                                                                                                        {
                                                                                                                            VAR12 = 0;
                                                                                                                        }
                                                                                                                        else if (VAR8 < 1.16)
                                                                                                                        {
                                                                                                                            VAR12 = 1;
                                                                                                                            VAR5->VAR69[0] = &VAR69[VAR12 * 2];
                                                                                                                            VAR5->VAR69[1] = &VAR69[VAR12 * 2 + 1];
                                                                                                                            FUN10(&VAR5->VAR70[0], &VAR5->VAR71[0], &VAR5->VAR72[0], &VAR5->VAR73[0], VAR5->VAR69[0]);
                                                                                                                            FUN10(&VAR5->VAR70[1], &VAR5->VAR71[1], &VAR5->VAR72[1], &VAR5->VAR73[1], VAR5->VAR69[1]);
                                                                                                                            return 0;