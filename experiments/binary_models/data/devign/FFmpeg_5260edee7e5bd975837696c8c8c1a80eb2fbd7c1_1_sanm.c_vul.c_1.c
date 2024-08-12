static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17;
    uint32_t VAR18;
    VAR19 *VAR20, *VAR21;
    VAR14 = FUN2(&VAR2->VAR22);
    VAR15 = FUN2(&VAR2->VAR22);
    VAR16 = FUN3(&VAR2->VAR22);
    VAR18 = FUN4(&VAR2->VAR22);
    FUN5(&VAR2->VAR22, 4);
    VAR17 = FUN2(&VAR2->VAR22);
    FUN5(&VAR2->VAR22, 3);
    if (VAR18 > VAR6 * VAR7 - VAR4 - VAR3 * VAR7)
    {
        VAR18 = VAR6 * VAR7 - VAR4 - VAR3 * VAR7;
        FUN6(VAR2->VAR23, VAR24, "");
    }
    VAR2->VAR25 = 0;
    if (((VAR16 & 1) || !(VAR17 & 1)) && (VAR14 && VAR14 != 2))
        FUN7(VAR2, 1);
    VAR20 = ((VAR19 *)VAR2->VAR26) + VAR4 + VAR3 * VAR7;
    VAR21 = ((VAR19 *)VAR2->VAR27) + VAR4 + VAR3 * VAR7;
    if (VAR15 > 2)
    {
        FUN6(VAR2->VAR23, VAR28, "", VAR15);
        return VAR29;
    }
    FUN8(VAR2->VAR23, "", VAR14);
    switch (VAR14)
    {
    case 0:
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
        {
            FUN9(&VAR2->VAR22, VAR20, VAR5);
            VAR20 += VAR7;
        }
        memset(VAR2->VAR30, 0, VAR2->VAR6 * VAR7);
        memset(VAR2->VAR27, 0, VAR2->VAR6 * VAR7);
        break;
    case 2:
        if (FUN10(VAR2, VAR20, VAR18))
            return VAR29;
        memset(VAR2->VAR30, 0, VAR2->VAR31);
        memset(VAR2->VAR27, 0, VAR2->VAR32);
        break;
    case 3:
    case 4:
        if (VAR17 & 4)
        {
            for (VAR10 = 0; VAR10 < VAR6; VAR10 += 4)
            {
                for (VAR9 = 0; VAR9 < VAR5; VAR9 += 4)
                {
                    int VAR33;
                    if (VAR13)
                    {
                        VAR13--;
                        FUN11(VAR20 + VAR9, VAR21 + VAR9, VAR7, VAR7, 4);
                        continue;
                    }
                    if (FUN12(&VAR2->VAR22) < 1)
                        return VAR29;
                    VAR33 = FUN13(&VAR2->VAR22);
                    switch (VAR33)
                    {
                    case 0xFF:
                        if (FUN12(&VAR2->VAR22) < 16)
                            return VAR29;
                        for (VAR11 = 0; VAR11 < 4; VAR11++)
                            FUN14(&VAR2->VAR22, VAR20 + VAR9 + VAR11 * VAR7, 4);
                        break;
                    case 0xFE:
                        if (FUN12(&VAR2->VAR22) < 4)
                            return VAR29;
                        for (VAR11 = 0; VAR11 < 4; VAR11++)
                            memset(VAR20 + VAR9 + VAR11 * VAR7, FUN13(&VAR2->VAR22), 4);
                        break;
                    case 0xFD:
                        if (FUN12(&VAR2->VAR22) < 1)
                            return VAR29;
                        VAR12 = FUN13(&VAR2->VAR22);
                        for (VAR11 = 0; VAR11 < 4; VAR11++)
                            memset(VAR20 + VAR9 + VAR11 * VAR7, VAR12, 4);
                        break;
                    default:
                        if (VAR14 == 4 && !VAR33)
                        {
                            if (FUN12(&VAR2->VAR22) < 1)
                                return VAR29;
                            VAR13 = FUN13(&VAR2->VAR22) + 1;
                            VAR9 -= 4;
                        }
                        else
                        {
                            int VAR34, VAR35;
                            VAR34 = VAR36[(VAR15 * 255 + VAR33) * 2];
                            VAR35 = VAR36[(VAR15 * 255 + VAR33) * 2 + 1];
                            FUN15(VAR20 + VAR9, VAR21 + VAR9 + VAR34 + VAR35 * VAR7, VAR2->VAR6, VAR7, VAR9 + VAR34, VAR10 + VAR35);
                        }
                    }
                }
                VAR20 += VAR7 * 4;
                VAR21 += VAR7 * 4;
            }
        }
        else
        {
            for (VAR10 = 0; VAR10 < VAR6; VAR10 += 4)
            {
                for (VAR9 = 0; VAR9 < VAR5; VAR9 += 4)
                {
                    int VAR33;
                    if (VAR13)
                    {
                        VAR13--;
                        FUN11(VAR20 + VAR9, VAR21 + VAR9, VAR7, VAR7, 4);
                        continue;
                    }
                    VAR33 = FUN2(&VAR2->VAR22);
                    if (VAR33 == 0xFF)
                    {
                        if (FUN12(&VAR2->VAR22) < 16)
                            return VAR29;
                        for (VAR11 = 0; VAR11 < 4; VAR11++)
                            FUN14(&VAR2->VAR22, VAR20 + VAR9 + VAR11 * VAR7, 4);
                    }
                    else if (VAR14 == 4 && !VAR33)
                    {
                        if (FUN12(&VAR2->VAR22) < 1)
                            return VAR29;
                        VAR13 = FUN13(&VAR2->VAR22) + 1;
                        VAR9 -= 4;
                    }
                    else
                    {
                        int VAR34, VAR35;
                        VAR34 = VAR36[(VAR15 * 255 + VAR33) * 2];
                        VAR35 = VAR36[(VAR15 * 255 + VAR33) * 2 + 1];
                        FUN15(VAR20 + VAR9, VAR21 + VAR9 + VAR34 + VAR35 * VAR7, VAR2->VAR6, VAR7, VAR9 + VAR34, VAR10 + VAR35);
                    }
                }
                VAR20 += VAR7 * 4;
                VAR21 += VAR7 * 4;
            }
        }
        break;
    default:
        FUN6(VAR2->VAR23, VAR28, "", VAR14);
        return VAR37;
    }
    return 0;
}