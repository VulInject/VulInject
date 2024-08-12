static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    VAR11 *const VAR12 = VAR3;
    unsigned int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    VAR7 *VAR24, *VAR25 = NULL;
    const VAR7 *VAR26 = VAR8;
    int VAR27;
    if (VAR6->VAR10 < 32)
        return VAR28;
    if (FUN2(VAR8) != VAR29)
    {
        FUN3(VAR2, VAR30, "");
        return VAR28;
    }
    VAR13 = FUN2(VAR8 + 4);
    VAR14 = FUN2(VAR8 + 8);
    VAR15 = FUN2(VAR8 + 12);
    VAR16 = FUN2(VAR8 + 20);
    VAR17 = FUN2(VAR8 + 24);
    VAR18 = FUN2(VAR8 + 28);
    VAR8 += 32;
    if (VAR16 == VAR31)
    {
        FUN4(VAR2, "");
        return VAR32;
    }
    if (VAR16 > VAR33)
    {
        FUN3(VAR2, VAR30, "");
        return VAR28;
    }
    if (VAR17 == VAR34)
    {
        FUN4(VAR2, "");
        return VAR32;
    }
    if (VAR17 > VAR34)
    {
        FUN3(VAR2, VAR30, "");
        return VAR28;
    }
    if (VAR16 == VAR35 || VAR16 == VAR33)
    {
        FUN3(VAR2, VAR30, "");
        return -1;
    }
    switch (VAR15)
    {
    case 1:
        VAR2->VAR36 = VAR18 ? VAR37 : VAR38;
        break;
    case 4:
        VAR2->VAR36 = VAR18 ? VAR37 : VAR39;
        break;
    case 8:
        VAR2->VAR36 = VAR18 ? VAR37 : VAR40;
        break;
    case 24:
        VAR2->VAR36 = (VAR16 == VAR41) ? VAR42 : VAR43;
        break;
    case 32:
        VAR2->VAR36 = (VAR16 == VAR41) ? VAR44 : VAR45;
        break;
    default:
        FUN3(VAR2, VAR30, "");
        return VAR28;
    }
    VAR27 = FUN5(VAR2, VAR13, VAR14);
    if (VAR27 < 0)
        return VAR27;
    if ((VAR27 = FUN6(VAR2, VAR12, 0)) < 0)
        return VAR27;
    VAR12->VAR46 = VAR47;
    if (VAR9 - VAR8 < VAR18)
        return VAR28;
    if (VAR15 > 8 && VAR18)
    {
        FUN3(VAR2, VAR48, "");
    }
    else if (VAR18)
    {
        unsigned int VAR22 = VAR18 / 3;
        if (VAR18 % 3 || VAR18 > 768)
        {
            FUN3(VAR2, VAR48, "");
            return VAR28;
        }
        VAR24 = VAR12->VAR3[1];
        for (VAR20 = 0; VAR20 < VAR22; VAR20++, VAR24 += 4)
            *(VAR49 *)VAR24 = (0xFFU << 24) + (VAR8[VAR20] << 16) + (VAR8[VAR22 + VAR20] << 8) + VAR8[VAR22 + VAR22 + VAR20];
    }
    VAR8 += VAR18;
    if (VAR18 && VAR15 < 8)
    {
        VAR24 = VAR25 = FUN7((VAR13 + 15), VAR14);
        if (!VAR24)
            return FUN8(VAR50);
        VAR19 = (VAR13 + 15 >> 3) * VAR15;
    }
    else
    {
        VAR24 = VAR12->VAR3[0];
        VAR19 = VAR12->VAR51[0];
    }
    VAR22 = (VAR15 * VAR13 + 7) >> 3;
    VAR23 = VAR22 + (VAR22 & 1);
    if (VAR16 == VAR52)
    {
        int VAR53, VAR54;
        VAR7 *VAR55 = VAR24 + VAR14 * VAR19;
        VAR20 = 0;
        while (VAR24 != VAR55 && VAR8 < VAR9)
        {
            VAR54 = 1;
            if (VAR9 - VAR8 < 1)
                return VAR28;
            if ((VAR53 = *VAR8++) == VAR56)
            {
                VAR54 = *VAR8++ + 1;
                if (VAR54 != 1)
                    VAR53 = *VAR8++;
            }
            while (VAR54--)
            {
                if (VAR20 < VAR22)
                    VAR24[VAR20] = VAR53;
                if (++VAR20 >= VAR23)
                {
                    VAR20 = 0;
                    VAR24 += VAR19;
                    if (VAR24 == VAR55)
                        break;
                }
            }
        }
    }
    else
    {
        for (VAR21 = 0; VAR21 < VAR14; VAR21++)
        {
            if (VAR9 - VAR8 < VAR23)
                break;
            memcpy(VAR24, VAR8, VAR22);
            VAR24 += VAR19;
            VAR8 += VAR23;
        }
    }
    if (VAR2->VAR36 == VAR37 && VAR15 < 8)
    {
        VAR7 *VAR57 = VAR25;
        VAR24 = VAR12->VAR3[0];
        for (VAR21 = 0; VAR21 < VAR14; VAR21++)
        {
            for (VAR20 = 0; VAR20 < (VAR13 + 7 >> 3) * VAR15; VAR20++)
            {
                if (VAR15 == 1)
                {
                    VAR24[8 * VAR20] = VAR25[VAR20] >> 7;
                    VAR24[8 * VAR20 + 1] = VAR25[VAR20] >> 6 & 1;
                    VAR24[8 * VAR20 + 2] = VAR25[VAR20] >> 5 & 1;
                    VAR24[8 * VAR20 + 3] = VAR25[VAR20] >> 4 & 1;
                    VAR24[8 * VAR20 + 4] = VAR25[VAR20] >> 3 & 1;
                    VAR24[8 * VAR20 + 5] = VAR25[VAR20] >> 2 & 1;
                    VAR24[8 * VAR20 + 6] = VAR25[VAR20] >> 1 & 1;
                    VAR24[8 * VAR20 + 7] = VAR25[VAR20] & 1;
                }
                else
                {
                    VAR24[2 * VAR20] = VAR25[VAR20] >> 4;
                    VAR24[2 * VAR20 + 1] = VAR25[VAR20] & 0xF;
                }
            }
            VAR24 += VAR12->VAR51[0];
            VAR25 += (VAR13 + 15 >> 3) * VAR15;
        }
        FUN9(&VAR57);
    }
    *VAR4 = 1;
    return VAR8 - VAR26;
}