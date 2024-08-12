static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned int VAR7, VAR8;
    unsigned int VAR9, VAR10;
    int VAR11;
    const VAR12 *VAR13;
    int16_t VAR14[13];
    if (VAR4->VAR15 < 32000)
    {
        VAR7 = 3000;
    }
    else if (VAR4->VAR15 < 64000)
    {
        VAR7 = 4000;
    }
    else
        VAR7 = 5000;
    switch (VAR4->VAR15)
    {
    case 16000:
        VAR13 = VAR16[0];
        break;
    case 22050:
        VAR13 = VAR16[1];
        break;
    case 24000:
        VAR13 = VAR16[2];
        break;
    case 32000:
        VAR13 = VAR16[3];
        break;
    case 44100:
    case 48000:
    case 64000:
        VAR13 = VAR16[4];
        break;
    case 88200:
    case 96000:
    case 128000:
    case 176400:
    case 192000:
        VAR13 = VAR16[5];
        break;
    default:
        FUN2(VAR2->VAR17, VAR18, "", VAR4->VAR15);
        return -1;
    }
    VAR9 = ((VAR7 << 7) + (VAR4->VAR15 >> 1)) / VAR4->VAR15;
    VAR10 = ((VAR7 << 8) + (VAR4->VAR15 >> 1)) / VAR4->VAR15;
    VAR4->VAR11[0] = VAR9 + VAR13[VAR6->VAR19];
    if (VAR6->VAR20 < 14)
    {
        VAR4->VAR11[2] = VAR10;
        FUN3(VAR14, VAR10, 64, 13);
        FUN4(VAR14, 13, sizeof(VAR14[0]), VAR21);
        for (VAR11 = 0; VAR11 < VAR6->VAR20; VAR11++)
            VAR4->VAR11[2] += VAR14[VAR11];
    }
    else if (VAR6->VAR20 == 14)
    {
        VAR4->VAR11[2] = 2 * VAR4->VAR11[0];
    }
    else if (VAR6->VAR20 == 15)
    {
        VAR4->VAR11[2] = 3 * VAR4->VAR11[0];
    }
    else
    {
        FUN2(VAR2->VAR17, VAR18, "", VAR6->VAR20);
        return -1;
    }
    VAR4->VAR11[2] = FUN5(64, VAR4->VAR11[2]);
    if (VAR4->VAR15 <= 32000)
    {
        VAR8 = 48;
    }
    else if (VAR4->VAR15 == 44100)
    {
        VAR8 = 35;
    }
    else if (VAR4->VAR15 >= 48000)
        VAR8 = 32;
    if (VAR4->VAR11[2] - VAR4->VAR11[0] > VAR8)
    {
        FUN2(VAR2->VAR17, VAR18, "", VAR4->VAR11[2] - VAR4->VAR11[0]);
        return -1;
    }
    if (!VAR6->VAR22)
    {
        int VAR23, VAR24;
        VAR23 = VAR6->VAR25 + 1;
        VAR4->VAR26 = ((VAR4->VAR11[2] - VAR4->VAR11[0] + (VAR23 & 2)) >> VAR23) << 1;
        if (FUN6(VAR2->VAR17, VAR4->VAR26, VAR4->VAR27.VAR28))
            return -1;
        for (VAR11 = 1; VAR11 <= VAR4->VAR26; VAR11++)
            VAR4->VAR29[VAR11] = VAR23;
        VAR24 = VAR4->VAR11[2] - VAR4->VAR11[0] - VAR4->VAR26 * VAR23;
        if (VAR24 < 0)
        {
            VAR4->VAR29[1]--;
            VAR4->VAR29[2] -= (VAR24 < -1);
        }
        else if (VAR24)
        {
            VAR4->VAR29[VAR4->VAR26]++;
        }
        VAR4->VAR29[0] = VAR4->VAR11[0];
        for (VAR11 = 1; VAR11 <= VAR4->VAR26; VAR11++)
            VAR4->VAR29[VAR11] += VAR4->VAR29[VAR11 - 1];
    }
    else
    {
        int VAR30 = 7 - VAR6->VAR22;
        int VAR31, VAR32;
        int VAR33, VAR34;
        int16_t VAR35[49];
        if (49 * VAR4->VAR11[2] > 110 * VAR4->VAR11[0])
        {
            VAR31 = 1;
            VAR4->VAR11[1] = 2 * VAR4->VAR11[0];
        }
        else
        {
            VAR31 = 0;
            VAR4->VAR11[1] = VAR4->VAR11[2];
        }
        VAR32 = FUN7(VAR30 * FUN8(VAR4->VAR11[1] / (float)VAR4->VAR11[0])) * 2;
        if (VAR32 <= 0)
        {
            FUN2(VAR2->VAR17, VAR18, "", VAR32);
            return -1;
        }
        VAR35[0] = 0;
        FUN3(VAR35 + 1, VAR4->VAR11[0], VAR4->VAR11[1], VAR32);
        FUN4(VAR35 + 1, VAR32, sizeof(VAR35[1]), VAR21);
        VAR33 = VAR35[VAR32];
        VAR35[0] = VAR4->VAR11[0];
        for (VAR11 = 1; VAR11 <= VAR32; VAR11++)
        {
            if (VAR35[VAR11] <= 0)
            {
                FUN2(VAR2->VAR17, VAR18, "", VAR11, VAR35[VAR11]);
                return -1;
            }
            VAR35[VAR11] += VAR35[VAR11 - 1];
        }
        if (VAR31)
        {
            int16_t VAR36[49];
            float VAR37 = VAR6->VAR25 ? 0.76923076923076923077f : 1.0f;
            int VAR38 = FUN7(VAR30 * VAR37 * FUN8(VAR4->VAR11[2] / (float)VAR4->VAR11[1])) * 2;
            FUN3(VAR36 + 1, VAR4->VAR11[1], VAR4->VAR11[2], VAR38);
            VAR34 = FUN9(VAR36 + 1, VAR38);
            if (VAR34 < VAR33)
            {
                int VAR39;
                FUN4(VAR36 + 1, VAR38, sizeof(VAR36[1]), VAR21);
                VAR39 = FUN5(VAR33 - VAR36[1], (VAR36[VAR38] - VAR36[1]) >> 1);
                VAR36[1] += VAR39;
                VAR36[VAR38] -= VAR39;
            }
            FUN4(VAR36 + 1, VAR38, sizeof(VAR36[1]), VAR21);
            VAR36[0] = VAR4->VAR11[1];
            for (VAR11 = 1; VAR11 <= VAR38; VAR11++)
            {
                if (VAR36[VAR11] <= 0)
                {
                    FUN2(VAR2->VAR17, VAR18, "", VAR11, VAR36[VAR11]);
                    return -1;
                }
                VAR36[VAR11] += VAR36[VAR11 - 1];
            }
            VAR4->VAR26 = VAR32 + VAR38;
            if (FUN6(VAR2->VAR17, VAR4->VAR26, VAR4->VAR27.VAR28))
                return -1;
            memcpy(&VAR4->VAR29[0], VAR35, (VAR32 + 1) * sizeof(VAR4->VAR29[0]));
            memcpy(&VAR4->VAR29[VAR32 + 1], VAR36 + 1, VAR38 * sizeof(VAR4->VAR29[0]));
        }
        else
        {
            VAR4->VAR26 = VAR32;
            if (FUN6(VAR2->VAR17, VAR4->VAR26, VAR4->VAR27.VAR28))
                return -1;
            memcpy(VAR4->VAR29, VAR35, (VAR32 + 1) * sizeof(VAR4->VAR29[0]));
        }
    }
    return 0;