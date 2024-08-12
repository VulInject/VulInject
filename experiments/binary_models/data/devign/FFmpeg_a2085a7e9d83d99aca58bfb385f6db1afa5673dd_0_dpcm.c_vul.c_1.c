static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12 = 0;
    int VAR13[2];
    int VAR14 = 0;
    short *VAR15 = VAR3;
    int VAR16[2];
    unsigned char VAR17;
    short VAR18;
    if (!VAR7)
        return 0;
    if (*VAR4 / 2 < VAR7)
        switch (VAR2->VAR19->VAR20)
        {
        case VAR21:
            if (VAR9->VAR22 == 1)
                VAR13[0] = FUN2(&VAR6[6]);
            else
            {
                VAR13[0] = VAR6[7] << 8;
                VAR13[1] = VAR6[6] << 8;
            }
            FUN3(VAR13[0]);
            FUN3(VAR13[1]);
            for (VAR11 = 8, VAR12 = 0; VAR11 < VAR7; VAR11++, VAR12++)
            {
                VAR13[VAR14] += VAR9->VAR23[VAR6[VAR11]];
                VAR13[VAR14] = FUN4(VAR13[VAR14]);
                VAR15[VAR12] = VAR13[VAR14];
                VAR14 ^= VAR9->VAR22 - 1;
            }
            break;
        case VAR24:
            VAR11 = 6;
            VAR13[0] = FUN2(&VAR6[VAR11]);
            VAR11 += 2;
            FUN3(VAR13[0])
            VAR15[VAR12++] = VAR13[0];
            if (VAR9->VAR22 == 2)
            {
                VAR13[1] = FUN2(&VAR6[VAR11]);
                VAR11 += 2;
                FUN3(VAR13[1])
                VAR15[VAR12++] = VAR13[1];
            }
            while (VAR11 < VAR7)
            {
                VAR13[VAR14] += VAR25[VAR6[VAR11++]];
                VAR13[VAR14] = FUN4(VAR13[VAR14]);
                VAR15[VAR12++] = VAR13[VAR14];
                VAR14 ^= VAR9->VAR22 - 1;
            }
            break;
        case VAR26:
            VAR11 = 0;
            VAR16[0] = VAR16[1] = 4;
            VAR13[0] = FUN2(&VAR6[VAR11]);
            VAR11 += 2;
            FUN3(VAR13[0]);
            if (VAR9->VAR22 == 2)
            {
                VAR13[1] = FUN2(&VAR6[VAR11]);
                VAR11 += 2;
                FUN3(VAR13[1]);
            }
            while (VAR11 < VAR7)
            {
                VAR17 = VAR6[VAR11++];
                VAR18 = (VAR17 & 0xFC) << 8;
                if ((VAR17 & 0x03) == 3)
                    VAR16[VAR14]++;
                else
                    VAR16[VAR14] -= (2 * (VAR17 & 3));
                if (VAR16[VAR14] < 0)
                    VAR16[VAR14] = 0;
                VAR18 >>= VAR16[VAR14];
                VAR13[VAR14] += VAR18;
                VAR13[VAR14] = FUN4(VAR13[VAR14]);
                VAR15[VAR12++] = VAR13[VAR14];
                VAR14 ^= VAR9->VAR22 - 1;
            }
            break;
        case VAR27:
            VAR11 = 0;
            if (VAR2->VAR28 != 3)
            {
                while (VAR11 < VAR7)
                {
                    int VAR29, VAR30;
                    VAR29 = (VAR6[VAR11] >> 4) & 0xF;
                    VAR30 = VAR6[VAR11++] & 0xF;
                    VAR9->VAR31[0] += VAR9->VAR32[VAR29];
                    if (VAR9->VAR31[0] < 0)
                        VAR9->VAR31[0] = 0;
                    if (VAR9->VAR31[0] > 255)
                        VAR9->VAR31[0] = 255;
                    VAR15[VAR12++] = (VAR9->VAR31[0] - 128) << 8;
                    VAR9->VAR31[VAR9->VAR22 - 1] += VAR9->VAR32[VAR30];
                    if (VAR9->VAR31[VAR9->VAR22 - 1] < 0)
                        VAR9->VAR31[VAR9->VAR22 - 1] = 0;
                    if (VAR9->VAR31[VAR9->VAR22 - 1] > 255)
                        VAR9->VAR31[VAR9->VAR22 - 1] = 255;
                    VAR15[VAR12++] = (VAR9->VAR31[VAR9->VAR22 - 1] - 128) << 8;
                }
            }
            else
            {
                while (VAR11 < VAR7)
                {
                    int VAR33;
                    VAR33 = VAR6[VAR11++];
                    if (VAR33 & 0x80)
                        VAR9->VAR31[VAR14] -= VAR9->VAR32[VAR33 & 0x7F];
                    else
                        VAR9->VAR31[VAR14] += VAR9->VAR32[VAR33 & 0x7F];
                    VAR9->VAR31[VAR14] = FUN4(VAR9->VAR31[VAR14]);
                    VAR15[VAR12++] = VAR9->VAR31[VAR14];
                    VAR14 ^= VAR9->VAR22 - 1;
                }
            }
            break;
        }
    *VAR4 = VAR12 * sizeof(short);
    return VAR7;