static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR10;
    int VAR11 = 0, VAR12 = 0, VAR13 = 0, VAR14 = 0;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20 = 0, VAR21 = 0, VAR22;
    const int VAR23 = VAR7->VAR23;
    unsigned VAR24, VAR25, VAR26;
    FUN2(VAR7);
    FUN3(VAR10, 2);
    FUN4(&VAR7->VAR27, VAR10);
    while (VAR13 < VAR2->VAR28 + 1)
    {
        VAR22 = FUN5(VAR7, &VAR7->VAR29[0][VAR11 + VAR12], 400, &VAR16);
        if (VAR22 < 0)
            return VAR22;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR16 >> VAR23;
        VAR22 = FUN5(VAR7, &VAR7->VAR29[1][VAR11 + VAR12], 400, &VAR17);
        if (VAR22 < 0)
            return VAR22;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR17 >> VAR23;
        VAR22 = FUN5(VAR7, &VAR7->VAR29[2][VAR11 + VAR12], 400, &VAR18);
        if (VAR22 < 0)
            return VAR22;
        VAR12 = (VAR11 << 6) & 0xFC0;
        VAR11 = VAR18 >> VAR23;
        VAR22 = FUN6(VAR7, VAR7->VAR30[0], 256, 400, &VAR15);
        if (VAR22 < 0)
            return VAR22;
        VAR14 = (VAR18 << 16) + (VAR17 << 8) + VAR16;
        VAR13 += VAR15;
        while (VAR15-- > 0)
        {
            VAR4[VAR20 * VAR5 + VAR21] = VAR14;
            VAR24 = VAR21;
            VAR25 = VAR20;
            VAR21++;
            if (VAR21 >= VAR2->VAR28)
            {
                VAR21 = 0;
                VAR20++;
            }
        }
    }
    VAR19 = -VAR5 - 1;
    VAR26 = 0;
    while (VAR21 < VAR2->VAR28 && VAR20 < VAR2->VAR31)
    {
        VAR22 = FUN6(VAR7, VAR7->VAR32[VAR26], 6, 1000, &VAR26);
        if (VAR22 < 0)
            return VAR22;
        if (VAR26 == 0)
        {
            VAR22 = FUN5(VAR7, &VAR7->VAR29[0][VAR11 + VAR12], 400, &VAR16);
            if (VAR22 < 0)
                return VAR22;
            VAR12 = (VAR11 << 6) & 0xFC0;
            VAR11 = VAR16 >> VAR23;
            VAR22 = FUN5(VAR7, &VAR7->VAR29[1][VAR11 + VAR12], 400, &VAR17);
            if (VAR22 < 0)
                return VAR22;
            VAR12 = (VAR11 << 6) & 0xFC0;
            VAR11 = VAR17 >> VAR23;
            VAR22 = FUN5(VAR7, &VAR7->VAR29[2][VAR11 + VAR12], 400, &VAR18);
            if (VAR22 < 0)
                return VAR22;
            VAR12 = (VAR11 << 6) & 0xFC0;
            VAR11 = VAR18 >> VAR23;
            VAR14 = (VAR18 << 16) + (VAR17 << 8) + VAR16;
        }
        if (VAR26 > 5)
            return VAR33;
        VAR22 = FUN6(VAR7, VAR7->VAR30[VAR26], 256, 400, &VAR15);
        if (VAR22 < 0)
            return VAR22;
        switch (VAR26)
        {
        case 0:
            while (VAR15-- > 0)
            {
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR24 = VAR21;
                VAR25 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR28)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 1:
            while (VAR15-- > 0)
            {
                VAR4[VAR20 * VAR5 + VAR21] = VAR4[VAR25 * VAR5 + VAR24];
                VAR24 = VAR21;
                VAR25 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR28)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            VAR14 = VAR4[VAR25 * VAR5 + VAR24];
            break;
        case 2:
            while (VAR15-- > 0)
            {
                VAR14 = VAR4[VAR20 * VAR5 + VAR21 + VAR19 + 1];
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR24 = VAR21;
                VAR25 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR28)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 4:
            while (VAR15-- > 0)
            {
                VAR34 *VAR35 = (VAR34 *)VAR4;
                VAR16 = VAR35[(VAR25 * VAR5 + VAR24) * 4] + VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4 + 4] - VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4];
                VAR17 = VAR35[(VAR25 * VAR5 + VAR24) * 4 + 1] + VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4 + 5] - VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4 + 1];
                VAR18 = VAR35[(VAR25 * VAR5 + VAR24) * 4 + 2] + VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4 + 6] - VAR35[((VAR20 * VAR5 + VAR21) + VAR19) * 4 + 2];
                VAR14 = ((VAR18 & 0xFF) << 16) + ((VAR17 & 0xFF) << 8) + (VAR16 & 0xFF);
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR24 = VAR21;
                VAR25 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR28)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        case 5:
            while (VAR15-- > 0)
            {
                VAR14 = VAR4[VAR20 * VAR5 + VAR21 + VAR19];
                VAR4[VAR20 * VAR5 + VAR21] = VAR14;
                VAR24 = VAR21;
                VAR25 = VAR20;
                VAR21++;
                if (VAR21 >= VAR2->VAR28)
                {
                    VAR21 = 0;
                    VAR20++;
                }
            }
            break;
        }
        if (VAR2->VAR36 == 16)
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