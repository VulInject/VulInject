static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14 = 0;
    int VAR15 = 0;
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18 = 0;
    int VAR19 = 0, VAR20 = 0;
    int VAR21;
    int VAR22;
    int VAR23;
    VAR12->VAR24.VAR25 = 1;
    VAR12->VAR24.VAR26 = VAR27 | VAR28 | VAR29;
    if (VAR2->FUN2(VAR2, &VAR12->VAR24) < 0)
    {
        FUN3(VAR2, VAR30, "");
        return -1;
    }
    while (!VAR18)
    {
        int VAR31;
        if (VAR17 >= VAR12->VAR17 || VAR20 >= VAR12->VAR32)
            break;
        VAR31 = *VAR8++;
        if ((VAR31 & 0xF8) == 0x70)
        {
            switch (VAR31)
            {
            case 0x70:
                VAR14 = *VAR8++;
                if (VAR14 > 1)
                    FUN3(VAR2, VAR33, "", VAR14);
                break;
            case 0x71:
                VAR15 = 1;
                break;
            case 0x72:
                VAR16 = !VAR16;
                break;
            case 0x73:
                VAR18 = 1;
                break;
            case 0x74:
                VAR22 = *VAR8++;
                if ((VAR17 + VAR22) >= VAR12->VAR17)
                    break;
                VAR17 += VAR22;
                VAR19 += VAR22 * 8;
                while (VAR19 >= VAR12->VAR34)
                {
                    VAR19 -= VAR12->VAR34;
                    VAR20 += 8;
                }
                break;
            default:
                FUN3(VAR2, VAR33, "", VAR31);
            }
        }
        else
        {
            int VAR35;
            int VAR36;
            int VAR37 = 0;
            uint8_t VAR38[4];
            int VAR39 = 0, VAR40 = 0;
            int VAR41 = 0;
            if (VAR16 || VAR15)
            {
                VAR15 = 0;
                VAR36 = 1;
                VAR41 = 0;
            }
            else
            {
                VAR36 = 0;
                if (VAR31)
                    VAR41 = *VAR8++;
            }
            for (VAR21 = 0; VAR21 < 4; VAR21++)
            {
                VAR35 = (VAR31 >> (6 - VAR21 * 2)) & 3;
                if (!VAR35)
                    continue;
                if (VAR36)
                    VAR41 = *VAR8++;
                VAR39 = VAR19 + VAR42[VAR21 * 2];
                VAR40 = VAR20 + VAR42[(VAR21 * 2) + 1];
                switch (VAR35)
                {
                case 1:
                    VAR23 = *VAR8++;
                    VAR37 = VAR43[(VAR23 >> 6) & 0x3];
                    VAR38[0] = VAR23 & 0x3F;
                    VAR38[1] = VAR38[0];
                    if (VAR37)
                    {
                        VAR38[2] = VAR38[0] + 1;
                        if (VAR38[2] > 0x3F)
                            VAR38[2] = 0x3F;
                        VAR38[3] = VAR38[2];
                    }
                    else
                    {
                        VAR38[2] = VAR38[0];
                        VAR38[3] = VAR38[0];
                    }
                    break;
                case 2:
                    if (VAR14)
                    {
                        VAR23 = FUN4(&VAR8);
                        VAR38[0] = (VAR23 >> 18) & 0x3F;
                        VAR38[1] = (VAR23 >> 12) & 0x3F;
                        VAR38[2] = (VAR23 >> 6) & 0x3F;
                        VAR38[3] = VAR23 & 0x3F;
                        VAR37 = 16;
                    }
                    else
                    {
                        VAR23 = FUN5(&VAR8);
                        VAR37 = (VAR23 >> 12) & 0xF;
                        VAR23 &= 0xFFF;
                        VAR23 <<= 2;
                        VAR38[0] = VAR12->VAR44[VAR23];
                        VAR38[1] = VAR12->VAR44[VAR23 + 1];
                        VAR38[2] = VAR12->VAR44[VAR23 + 2];
                        VAR38[3] = VAR12->VAR44[VAR23 + 3];
                    }
                    break;
                case 3:
                    if (VAR14)
                    {
                        uint8_t VAR45[16];
                        VAR23 = FUN4(&VAR8);
                        VAR45[0] = (VAR23 >> 18) & 0x3F;
                        VAR45[1] = (VAR23 >> 12) & 0x3F;
                        VAR45[2] = (VAR23 >> 6) & 0x3F;
                        VAR45[3] = VAR23 & 0x3F;
                        VAR23 = FUN4(&VAR8);
                        VAR45[4] = (VAR23 >> 18) & 0x3F;
                        VAR45[5] = (VAR23 >> 12) & 0x3F;
                        VAR45[6] = (VAR23 >> 6) & 0x3F;
                        VAR45[7] = VAR23 & 0x3F;
                        VAR23 = FUN4(&VAR8);
                        VAR45[8] = (VAR23 >> 18) & 0x3F;
                        VAR45[9] = (VAR23 >> 12) & 0x3F;
                        VAR45[10] = (VAR23 >> 6) & 0x3F;
                        VAR45[11] = VAR23 & 0x3F;
                        VAR23 = FUN4(&VAR8);
                        VAR45[12] = (VAR23 >> 18) & 0x3F;
                        VAR45[13] = (VAR23 >> 12) & 0x3F;
                        VAR45[14] = (VAR23 >> 6) & 0x3F;
                        VAR45[15] = VAR23 & 0x3F;
                        FUN6(&VAR12->VAR24, VAR39, VAR40, VAR45, VAR41);
                    }
                    else
                    {
                        VAR23 = *VAR8++;
                        if (VAR23 & 0x80)
                        {
                            VAR37 = (VAR23 >> 4) & 0x7;
                            VAR23 = (VAR23 << 8) + *VAR8++;
                            VAR38[0] = (VAR23 >> 6) & 0x3F;
                            VAR38[1] = VAR23 & 0x3F;
                            VAR38[2] = (*VAR8++) & 0x3F;
                            VAR38[3] = (*VAR8++) & 0x3F;
                            FUN7(&VAR12->VAR24, VAR39, VAR40, VAR38, VAR41, VAR37);
                        }
                        else
                        {
                            int VAR46, VAR47;
                            VAR46 = *VAR8++;
                            VAR47 = VAR23;
                            VAR38[0] = (*VAR8++) & 0x3F;
                            VAR38[1] = (*VAR8++) & 0x3F;
                            FUN8(&VAR12->VAR24, VAR39, VAR40, VAR47, VAR46, VAR38[0], VAR38[1], VAR41);
                        }
                    }
                    break;
                }
                if (VAR35 != 3)
                    FUN7(&VAR12->VAR24, VAR39, VAR40, VAR38, VAR41, VAR37);
            }
            VAR17++;
            VAR19 += 8;
            if (VAR19 >= VAR12->VAR34)
            {
                VAR19 = 0;
                VAR20 += 8;
            }
        }
    }
    *VAR4 = sizeof(VAR48);
    *(VAR48 *)VAR3 = VAR12->VAR24;
    return VAR9;
}