static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = 0, VAR15, VAR16 = 0, VAR17 = 0;
    VAR18 *VAR19 = VAR3;
    if (VAR9->VAR20 == 0)
    {
        VAR9->VAR20 = 8192;
        VAR9->VAR21 = FUN2(VAR9->VAR21, &VAR9->VAR22, VAR9->VAR20);
    }
    if (1 && VAR9->VAR20)
    {
        VAR7 = FUN3(VAR7, VAR9->VAR20 - VAR9->VAR23);
        VAR17 = VAR7;
        if (VAR9->VAR24 + VAR9->VAR23 + VAR7 > VAR9->VAR22)
        {
            memmove(VAR9->VAR21, &VAR9->VAR21[VAR9->VAR24], VAR9->VAR23);
            VAR9->VAR24 = 0;
        }
        memcpy(&VAR9->VAR21[VAR9->VAR24 + VAR9->VAR23], VAR6, VAR7);
        VAR6 = &VAR9->VAR21[VAR9->VAR24];
        VAR7 += VAR9->VAR23;
        VAR9->VAR23 = VAR7;
        if (VAR7 < VAR9->VAR20)
        {
            return VAR17;
        }
    }
    FUN4(&VAR9->VAR25, VAR6, VAR7 * 8);
    if (FUN5(&VAR9->VAR25, 32) == FUN6(FUN7("")))
    {
        FUN8(&VAR9->VAR25, 32);
        FUN9(VAR9->VAR2, VAR26, "");
        do
        {
            VAR11 = FUN10(&VAR9->VAR25, 1);
            VAR12 = FUN10(&VAR9->VAR25, 7);
            VAR13 = FUN11(&VAR9->VAR25, 24);
            FUN9(VAR9->VAR2, VAR26, "", VAR11, VAR12, VAR13);
            if (VAR13)
            {
                switch (VAR12)
                {
                case VAR27:
                {
                    int VAR28 = FUN12(&VAR9->VAR25);
                    FUN13(VAR9);
                    VAR6 = &VAR9->VAR21[VAR9->VAR24];
                    FUN4(&VAR9->VAR25, VAR6, VAR7 * 8);
                    FUN8(&VAR9->VAR25, VAR28);
                    FUN14(VAR9);
                    break;
                }
                default:
                    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
                        FUN8(&VAR9->VAR25, 8);
                }
            }
        } while (!VAR11);
    }
    else
    {
        VAR14 = FUN15(&VAR9->VAR25, 16);
        if (VAR14 != 0xFFF8)
        {
            FUN9(VAR9->VAR2, VAR29, "");
            while (FUN12(&VAR9->VAR25) / 8 + 2 < VAR7 && FUN15(&VAR9->VAR25, 16) != 0xFFF8)
                FUN8(&VAR9->VAR25, 8);
            goto VAR30;
        }
        FUN8(&VAR9->VAR25, 16);
        if (FUN16(VAR9) < 0)
        {
            FUN9(VAR9->VAR2, VAR29, "");
            VAR9->VAR23 = 0;
            VAR9->VAR24 = 0;
            return -1;
        }
    }
    if (VAR9->VAR31 == VAR32)
    {
        short *VAR33 = VAR19;
        short *VAR34 = VAR19 + VAR9->VAR35;
        for (VAR15 = 0; VAR15 < VAR9->VAR35; VAR15 += 2)
        {
            uint32_t VAR36 = VAR9->VAR37[0][VAR15];
            uint32_t VAR38 = VAR9->VAR37[0][VAR15 + 1];
            VAR34[VAR15] = VAR36 - (VAR38 / 2);
            VAR33[VAR15] = VAR34[VAR15] + VAR38;
        }
        *VAR4 = 2 * VAR9->VAR35;
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR9->VAR39; VAR15++)
        {
            switch (VAR9->VAR31)
            {
            case VAR40:
                for (VAR16 = 0; VAR16 < VAR9->VAR35; VAR16++)
                    VAR19[(VAR9->VAR35 * VAR15) + VAR16] = VAR9->VAR37[VAR15][VAR16];
                break;
            case VAR41:
            case VAR42:
                if (VAR15 == 0)
                    for (VAR16 = 0; VAR16 < VAR9->VAR35; VAR16++)
                        VAR19[(VAR9->VAR35 * VAR15) + VAR16] = VAR9->VAR37[0][VAR16];
                else
                    for (VAR16 = 0; VAR16 < VAR9->VAR35; VAR16++)
                        VAR19[(VAR9->VAR35 * VAR15) + VAR16] = VAR9->VAR37[0][VAR16] - VAR9->VAR37[VAR15][VAR16];
                break;
            }
            *VAR4 += VAR9->VAR35;
        }
    }
    switch (VAR9->VAR43)
    {
    case VAR40:
        for (VAR16 = 0; VAR16 < VAR9->VAR35; VAR16++)
        {
            for (VAR15 = 0; VAR15 < VAR9->VAR39; VAR15++)
                *(VAR19++) = VAR9->VAR37[VAR15][VAR16];
        }
        break;
    case VAR41:
        assert(VAR9->VAR39 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR35; VAR15++)
        {
            *(VAR19++) = VAR9->VAR37[0][VAR15];
            *(VAR19++) = VAR9->VAR37[0][VAR15] - VAR9->VAR37[1][VAR15];
        }
        break;
    case VAR42:
        assert(VAR9->VAR39 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR35; VAR15++)
        {
            *(VAR19++) = VAR9->VAR37[0][VAR15] + VAR9->VAR37[1][VAR15];
            *(VAR19++) = VAR9->VAR37[1][VAR15];
        }
        break;
    case VAR32:
        assert(VAR9->VAR39 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR35; VAR15++)
        {
            int VAR44, VAR45;
            VAR44 = VAR9->VAR37[0][VAR15];
            VAR45 = VAR9->VAR37[1][VAR15];
            VAR44 -= VAR45 >> 1;
            *(VAR19++) = VAR44 + VAR45;
            *(VAR19++) = VAR44;
            VAR44 <<= 1;
            if (VAR45 & 1)
                VAR44++;
            *(VAR19++) = (VAR44 + VAR45) >> 1;
            *(VAR19++) = (VAR44 - VAR45) >> 1;
        }
        break;
    }
    *VAR4 = (VAR46 *)VAR19 - (VAR46 *)VAR3;
VAR30:
    VAR15 = (FUN12(&VAR9->VAR25) + 7) / 8;
    ;
    if (VAR15 > VAR7)
    {
        FUN9(VAR9->VAR2, VAR29, "", VAR15 - VAR7);
        VAR9->VAR23 = 0;
        VAR9->VAR24 = 0;
        return -1;
    }
    if (VAR9->VAR23)
    {
        VAR9->VAR24 += VAR15;
        VAR9->VAR23 -= VAR15;
        return VAR17;
    }
    else
        return VAR15;
}