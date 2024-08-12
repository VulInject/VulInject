static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = 0, VAR15, VAR16 = 0, VAR17;
    VAR18 *VAR19 = VAR3, *VAR20, *VAR21;
    *VAR4 = 0;
    VAR9->VAR2 = VAR2;
    if (VAR9->VAR22 == 0)
    {
        VAR9->VAR22 = 8192;
        VAR9->VAR23 = FUN2(VAR9->VAR23, &VAR9->VAR24, VAR9->VAR22);
    }
    if (1 && VAR9->VAR22)
    {
        VAR7 = FUN3(VAR7, VAR9->VAR22 - VAR9->VAR25);
        VAR17 = VAR7;
        if (VAR9->VAR26 + VAR9->VAR25 + VAR7 > VAR9->VAR24)
        {
            memmove(VAR9->VAR23, &VAR9->VAR23[VAR9->VAR26], VAR9->VAR25);
            VAR9->VAR26 = 0;
        }
        memcpy(&VAR9->VAR23[VAR9->VAR26 + VAR9->VAR25], VAR6, VAR7);
        VAR6 = &VAR9->VAR23[VAR9->VAR26];
        VAR7 += VAR9->VAR25;
        VAR9->VAR25 = VAR7;
        if (VAR7 < VAR9->VAR22)
        {
            return VAR17;
        }
    }
    FUN4(&VAR9->VAR27, VAR6, VAR7 * 8);
    if (FUN5(&VAR9->VAR27, 32) == FUN6(FUN7("")))
    {
        FUN8(&VAR9->VAR27, 32);
        FUN9(VAR9->VAR2, VAR28, "");
        do
        {
            VAR11 = FUN10(&VAR9->VAR27, 1);
            VAR12 = FUN10(&VAR9->VAR27, 7);
            VAR13 = FUN11(&VAR9->VAR27, 24);
            FUN9(VAR9->VAR2, VAR28, "", VAR11, VAR12, VAR13);
            if (VAR13)
            {
                switch (VAR12)
                {
                case VAR29:
                    FUN12(VAR9);
                    FUN13(VAR9);
                    break;
                default:
                    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
                        FUN8(&VAR9->VAR27, 8);
                }
            }
        } while (!VAR11);
    }
    else
    {
        VAR14 = FUN14(&VAR9->VAR27, 16);
        if (VAR14 != 0xFFF8)
        {
            FUN9(VAR9->VAR2, VAR30, "");
            while (FUN15(&VAR9->VAR27) / 8 + 2 < VAR7 && FUN14(&VAR9->VAR27, 16) != 0xFFF8)
                FUN8(&VAR9->VAR27, 8);
            goto VAR31;
        }
        FUN8(&VAR9->VAR27, 16);
        if (FUN16(VAR9) < 0)
        {
            FUN9(VAR9->VAR2, VAR30, "");
            VAR9->VAR25 = 0;
            VAR9->VAR26 = 0;
            return -1;
        }
    }
    if (VAR9->VAR32 == VAR33)
    {
        short *VAR20 = VAR19;
        short *VAR21 = VAR19 + VAR9->VAR34;
        for (VAR15 = 0; VAR15 < VAR9->VAR34; VAR15 += 2)
        {
            uint32_t VAR35 = VAR9->VAR36[0][VAR15];
            uint32_t VAR37 = VAR9->VAR36[0][VAR15 + 1];
            VAR21[VAR15] = VAR35 - (VAR37 / 2);
            VAR20[VAR15] = VAR21[VAR15] + VAR37;
        }
        *VAR4 = 2 * VAR9->VAR34;
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR9->VAR38; VAR15++)
        {
            switch (VAR9->VAR32)
            {
            case VAR39:
                for (VAR16 = 0; VAR16 < VAR9->VAR34; VAR16++)
                    VAR19[(VAR9->VAR34 * VAR15) + VAR16] = VAR9->VAR36[VAR15][VAR16];
                break;
            case VAR40:
            case VAR41:
                if (VAR15 == 0)
                    for (VAR16 = 0; VAR16 < VAR9->VAR34; VAR16++)
                        VAR19[(VAR9->VAR34 * VAR15) + VAR16] = VAR9->VAR36[0][VAR16];
                else
                    for (VAR16 = 0; VAR16 < VAR9->VAR34; VAR16++)
                        VAR19[(VAR9->VAR34 * VAR15) + VAR16] = VAR9->VAR36[0][VAR16] - VAR9->VAR36[VAR15][VAR16];
                break;
            }
            *VAR4 += VAR9->VAR34;
        }
    }
    switch (VAR9->VAR42)
    {
    case VAR39:
        for (VAR16 = 0; VAR16 < VAR9->VAR34; VAR16++)
        {
            for (VAR15 = 0; VAR15 < VAR9->VAR38; VAR15++)
                *(VAR19++) = VAR9->VAR36[VAR15][VAR16];
        }
        break;
    case VAR40:
        assert(VAR9->VAR38 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR34; VAR15++)
        {
            *(VAR19++) = VAR9->VAR36[0][VAR15];
            *(VAR19++) = VAR9->VAR36[0][VAR15] - VAR9->VAR36[1][VAR15];
        }
        break;
    case VAR41:
        assert(VAR9->VAR38 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR34; VAR15++)
        {
            *(VAR19++) = VAR9->VAR36[0][VAR15] + VAR9->VAR36[1][VAR15];
            *(VAR19++) = VAR9->VAR36[1][VAR15];
        }
        break;
    case VAR33:
        assert(VAR9->VAR38 == 2);
        for (VAR15 = 0; VAR15 < VAR9->VAR34; VAR15++)
        {
            int VAR43, VAR44;
            VAR43 = VAR9->VAR36[0][VAR15];
            VAR44 = VAR9->VAR36[1][VAR15];
            VAR43 -= VAR44 >> 1;
            *(VAR19++) = VAR43 + VAR44;
            *(VAR19++) = VAR43;
            VAR43 <<= 1;
            if (VAR44 & 1)
                VAR43++;
            *(VAR19++) = (VAR43 + VAR44) >> 1;
            *(VAR19++) = (VAR43 - VAR44) >> 1;
        }
        break;
    }
    *VAR4 = (VAR45 *)VAR19 - (VAR45 *)VAR3;
VAR31:
    VAR15 = (FUN15(&VAR9->VAR27) + 7) / 8;
    ;
    if (VAR15 > VAR7)
    {
        FUN9(VAR9->VAR2, VAR30, "", VAR15 - VAR7);
        VAR9->VAR25 = 0;
        VAR9->VAR26 = 0;
        return -1;
    }
    if (VAR9->VAR25)
    {
        VAR9->VAR26 += VAR15;
        VAR9->VAR25 -= VAR15;
        return VAR17;
    }
    else
        return VAR15;
}