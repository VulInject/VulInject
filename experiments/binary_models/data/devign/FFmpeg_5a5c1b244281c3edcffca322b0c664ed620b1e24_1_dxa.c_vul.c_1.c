static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR5 *VAR8, VAR5 *VAR9)
{
    VAR5 *VAR10, *VAR11, *VAR12, *VAR13, *VAR14, *VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23;
    uint32_t VAR24;
    VAR10 = VAR8 + 12;
    VAR11 = VAR10 + ((VAR2->VAR25 * VAR2->VAR26) >> 4);
    VAR12 = VAR11 + FUN2(VAR8 + 0);
    VAR13 = VAR12 + FUN2(VAR8 + 4);
    for (VAR17 = 0; VAR17 < VAR2->VAR26; VAR17 += 4)
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR25; VAR16 += 4)
        {
            VAR14 = VAR6 + VAR16;
            VAR15 = VAR9 + VAR16;
            VAR19 = *VAR10++;
            switch (VAR19)
            {
            case 4:
                VAR20 = (*VAR12) >> 4;
                if (VAR20 & 8)
                    VAR20 = 8 - VAR20;
                VAR21 = (*VAR12++) & 0xF;
                if (VAR21 & 8)
                    VAR21 = 8 - VAR21;
                if (VAR16 < -VAR20 || VAR2->VAR25 - VAR16 - 4 < VAR20 || VAR17 < -VAR21 || VAR2->VAR26 - VAR17 - 4 < VAR21)
                {
                    FUN3(VAR2, VAR27, "", VAR20, VAR21);
                    return VAR28;
                }
                VAR15 += VAR20 + VAR21 * VAR7;
            case 0:
            case 5:
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    memcpy(VAR14, VAR15, 4);
                    VAR14 += VAR7;
                    VAR15 += VAR7;
                }
                break;
            case 1:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                if (VAR19 == 1)
                {
                    VAR24 = FUN4(VAR13);
                    VAR13 += 2;
                }
                else
                {
                    VAR19 -= 10;
                    VAR24 = ((VAR13[0] & 0xF0) << VAR29[VAR19]) | ((VAR13[0] & 0xF) << VAR30[VAR19]);
                    VAR13++;
                }
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    for (VAR20 = 0; VAR20 < 4; VAR20++)
                    {
                        VAR14[VAR20] = (VAR24 & 0x8000) ? *VAR11++ : VAR15[VAR20];
                        VAR24 <<= 1;
                    }
                    VAR14 += VAR7;
                    VAR15 += VAR7;
                }
                break;
            case 2:
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    memset(VAR14, VAR11[0], 4);
                    VAR14 += VAR7;
                }
                VAR11++;
                break;
            case 3:
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    memcpy(VAR14, VAR11, 4);
                    VAR11 += 4;
                    VAR14 += VAR7;
                }
                break;
            case 8:
                VAR24 = *VAR13++;
                for (VAR18 = 0; VAR18 < 4; VAR18++)
                {
                    VAR22 = ((VAR18 & 1) << 1) + ((VAR18 & 2) * VAR7);
                    VAR23 = ((VAR18 & 1) << 1) + ((VAR18 & 2) * VAR7);
                    VAR15 = VAR9 + VAR16 + VAR23;
                    switch (VAR24 & 0xC0)
                    {
                    case 0x80:
                        VAR20 = (*VAR12) >> 4;
                        if (VAR20 & 8)
                            VAR20 = 8 - VAR20;
                        VAR21 = (*VAR12++) & 0xF;
                        if (VAR21 & 8)
                            VAR21 = 8 - VAR21;
                        if (VAR16 + 2 * (VAR18 & 1) < -VAR20 || VAR2->VAR25 - VAR16 - 2 * (VAR18 & 1) - 2 < VAR20 || VAR17 + (VAR18 & 2) < -VAR21 || VAR2->VAR26 - VAR17 - (VAR18 & 2) - 2 < VAR21)
                        {
                            FUN3(VAR2, VAR27, "", VAR20, VAR21);
                            return VAR28;
                        }
                        VAR15 += VAR20 + VAR21 * VAR7;
                    case 0x00:
                        VAR14[VAR22 + 0] = VAR15[0];
                        VAR14[VAR22 + 1] = VAR15[1];
                        VAR14[VAR22 + 0 + VAR7] = VAR15[0 + VAR7];
                        VAR14[VAR22 + 1 + VAR7] = VAR15[1 + VAR7];
                        break;
                    case 0x40:
                        VAR14[VAR22 + 0] = VAR11[0];
                        VAR14[VAR22 + 1] = VAR11[0];
                        VAR14[VAR22 + 0 + VAR7] = VAR11[0];
                        VAR14[VAR22 + 1 + VAR7] = VAR11[0];
                        VAR11++;
                        break;
                    case 0xC0:
                        VAR14[VAR22 + 0] = *VAR11++;
                        VAR14[VAR22 + 1] = *VAR11++;
                        VAR14[VAR22 + 0 + VAR7] = *VAR11++;
                        VAR14[VAR22 + 1 + VAR7] = *VAR11++;
                        break;
                    }
                    VAR24 <<= 2;
                }
                break;
            case 32:
                VAR24 = FUN4(VAR13);
                VAR13 += 2;
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    for (VAR20 = 0; VAR20 < 4; VAR20++)
                    {
                        VAR14[VAR20] = VAR11[VAR24 & 1];
                        VAR24 >>= 1;
                    }
                    VAR14 += VAR7;
                    VAR15 += VAR7;
                }
                VAR11 += 2;
                break;
            case 33:
            case 34:
                VAR24 = FUN2(VAR13);
                VAR13 += 4;
                for (VAR21 = 0; VAR21 < 4; VAR21++)
                {
                    for (VAR20 = 0; VAR20 < 4; VAR20++)
                    {
                        VAR14[VAR20] = VAR11[VAR24 & 3];
                        VAR24 >>= 2;
                    }
                    VAR14 += VAR7;
                    VAR15 += VAR7;
                }
                VAR11 += VAR19 - 30;
                break;
            default:
                FUN3(VAR2, VAR27, "", VAR19);
                return VAR28;
            }
        }
        VAR6 += VAR7 * 4;
        VAR9 += VAR7 * 4;
    }
    return 0;
}