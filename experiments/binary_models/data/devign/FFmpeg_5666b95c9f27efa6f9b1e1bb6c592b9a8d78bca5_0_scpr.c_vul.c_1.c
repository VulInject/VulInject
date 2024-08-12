static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR10;
    int VAR11 = 0, VAR12 = 0, VAR13 = 0, VAR14 = 0;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20 = 0, VAR21 = 0, VAR22, VAR23;
    unsigned VAR24 = VAR5 - VAR2->VAR25;
    const int VAR26 = VAR7->VAR26;
    unsigned VAR27, VAR28, VAR29;
    FUN2(VAR7);
    FUN3(VAR10, 2);
    FUN4(&VAR7->VAR30, VAR10);
    while (VAR13 < VAR2->VAR25 + 1)
    {
        VAR23 = FUN5(VAR7, &VAR7->VAR31[0][VAR11 + VAR12], 400, &VAR16);
        if (VAR23 < 0)
            return VAR23;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR16 >> VAR26;
        VAR23 = FUN5(VAR7, &VAR7->VAR31[1][VAR11 + VAR12], 400, &VAR17);
        if (VAR23 < 0)
            return VAR23;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR17 >> VAR26;
        VAR23 = FUN5(VAR7, &VAR7->VAR31[2][VAR11 + VAR12], 400, &VAR18);
        if (VAR23 < 0)
            return VAR23;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR18 >> VAR26;
        VAR23 = FUN6(VAR7, VAR7->VAR32[0], 256, 400, &VAR15);
        if (VAR23 < 0)
            return VAR23;
        VAR14 = (VAR18 << 16) + (VAR17 << 8) + VAR16;
        VAR13 += VAR15;
        while (VAR15-- > 0)
        {
            if (VAR20 >= VAR2->VAR33)
                return VAR34;
            VAR4[VAR20 * VAR5 + VAR21] = VAR14;
            VAR27 = VAR21;
            VAR28 = VAR20;
            VAR21++;
            if (VAR21 >= VAR2->VAR25)
            {
                VAR21 = 0;
                VAR20++;
            }
        }
    }
    VAR19 = -VAR5 - 1;
    VAR29 = 0;
    while (VAR21 < VAR2->VAR25 && VAR20 < VAR2->VAR33)
    {
        VAR23 = FUN6(VAR7, VAR7->VAR35[VAR29], 6, 1000, &VAR29);
        if (VAR23 < 0)
            return VAR23;
        if (VAR29 == 0)
        {
            VAR23 = FUN5(VAR7, &VAR7->VAR31[0][VAR11 + VAR12], 400, &VAR16);
            if (VAR23 < 0)
                return VAR23;
            VAR12 = (VAR11 << 6) & 0xFC0;
            VAR11 = VAR16 >> VAR26;
            VAR23 = FUN5(VAR7, &VAR7->VAR31[1][VAR11 + VAR12], 400, &VAR17);
            if (VAR23 < 0)
                return VAR23;
            VAR12 = (VAR11 << 6) & 0xFC0;
            VAR11 = VAR17 >> VAR26;
            VAR23 = FUN5(VAR7, &VAR7->VAR31[2][VAR11 + VAR12], 400, &VAR18);
            if (VAR23 < 0)
                return VAR23;
            VAR14 = (VAR18 << 16) + (VAR17 << 8) + VAR16;
        }
        if (VAR29 > 5)
            return VAR34;
        VAR23 = FUN6(VAR7, VAR7->VAR32[VAR29], 256, 400, &VAR15);
        if (VAR23 < 0)
            return VAR23;
        switch (VAR29)
        {
        case 0:
            while (VAR15-- > 0)
            {
                if (VAR20 >= VAR2->VAR33)
                    return VAR34;
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR27 = VAR21;
                VAR28 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR25)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 1:
            while (VAR15-- > 0)
            {
                if (VAR20 >= VAR2->VAR33)
                    return VAR34;
                VAR4[VAR20 * VAR5 + VAR21] = VAR4[VAR28 * VAR5 + VAR27];
                VAR27 = VAR21;
                VAR28 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR25)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            VAR14 = VAR4[VAR28 * VAR5 + VAR27];
            break;
        case 2:
            while (VAR15-- > 0)
            {
                if (VAR20 < 1 || VAR20 >= VAR2->VAR33)
                    return VAR34;
                VAR14 = VAR4[VAR20 * VAR5 + VAR21 + VAR19 + 1];
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR27 = VAR21;
                VAR28 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR25)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 4:
            while (VAR15-- > 0)
            {
                VAR36 *VAR37 = (VAR36 *)VAR4;
                if (VAR20 < 1 || VAR20 >= VAR2->VAR33 || (VAR20 == 1 && VAR21 == 0))
                    return VAR34;
                if (VAR21 == 0)
                {
                    VAR22 = VAR24;
                }
                else
                {
                    VAR22 = 0;
                }
                VAR16 = VAR37[(VAR28 * VAR5 + VAR27) * 4] + VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4 + 4] - VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4];
                VAR17 = VAR37[(VAR28 * VAR5 + VAR27) * 4 + 1] + VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4 + 5] - VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4 + 1];
                VAR18 = VAR37[(VAR28 * VAR5 + VAR27) * 4 + 2] + VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4 + 6] - VAR37[((VAR20 * VAR5 + VAR21) + VAR19 - VAR22) * 4 + 2];
                VAR14 = ((VAR18 & 0xFF) << 16) + ((VAR17 & 0xFF) << 8) + (VAR16 & 0xFF);
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR27 = VAR21;
                VAR28 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR25)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 5:
            while (VAR15-- > 0)
            {
                if (VAR20 < 1 || VAR20 >= VAR2->VAR33 || (VAR20 == 1 && VAR21 == 0))
                    return VAR34;
                if (VAR21 == 0)
                {
                    VAR22 = VAR24;
                }
                else
                {
                    VAR22 = 0;
                }
                VAR14 = VAR4[VAR20 * VAR5 + VAR21 + VAR19 - VAR22];
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR27 = VAR21;
                VAR28 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR25)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        }
        if (VAR2->VAR38 == 16)
        {
            VAR12 = (VAR14 & 0x3F00) >> 2;
            VAR11 = (VAR14 & 0xFFFFFF) >> 16;
        }
        else
        {
            VAR12 = (VAR14 & 0xFC00) >> 4;
            VAR11 = (VAR14 & 0xFFFFFF) >> 18;
        }
    }
    return 0;
}