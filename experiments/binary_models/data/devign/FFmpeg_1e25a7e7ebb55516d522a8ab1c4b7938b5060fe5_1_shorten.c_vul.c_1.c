static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12 = 0;
    VAR13 *VAR14 = VAR3;
    if (VAR9->VAR15 == 0)
    {
        VAR9->VAR15 = 1024;
        VAR9->VAR16 = FUN2(VAR9->VAR16, &VAR9->VAR17, VAR9->VAR15);
    }
    if (1 && VAR9->VAR15)
    {
        VAR7 = FUN3(VAR7, VAR9->VAR15 - VAR9->VAR18);
        VAR12 = VAR7;
        if (VAR9->VAR19 + VAR9->VAR18 + VAR7 > VAR9->VAR17)
        {
            memmove(VAR9->VAR16, &VAR9->VAR16[VAR9->VAR19], VAR9->VAR18);
            VAR9->VAR19 = 0;
        }
        memcpy(&VAR9->VAR16[VAR9->VAR19 + VAR9->VAR18], VAR6, VAR7);
        VAR6 = &VAR9->VAR16[VAR9->VAR19];
        VAR7 += VAR9->VAR18;
        VAR9->VAR18 = VAR7;
        if (VAR7 < VAR9->VAR15)
        {
            return VAR12;
        }
    }
    FUN4(&VAR9->VAR20, VAR6, VAR7 * 8);
    FUN5(&VAR9->VAR20, VAR9->VAR21);
    if (!VAR9->VAR22)
    {
        int VAR23 = 0;
        if (FUN6(&VAR9->VAR20, 32) != FUN7(FUN8("")))
        {
            FUN9(VAR9->VAR2, VAR24, "");
            return -1;
        }
        VAR9->VAR25 = 0;
        VAR9->VAR22 = VAR26;
        VAR9->VAR27 = 1;
        VAR9->VAR28 = -1;
        VAR9->VAR29 = FUN5(&VAR9->VAR20, 8);
        VAR9->VAR30 = FUN10(VAR9, VAR31);
        VAR9->VAR27 = FUN10(VAR9, VAR32);
        if (VAR9->VAR27 > VAR33)
        {
            FUN9(VAR9->VAR2, VAR24, "", VAR9->VAR27);
            return -1;
        }
        if (VAR9->VAR29 > 0)
        {
            int VAR34;
            VAR9->VAR22 = FUN10(VAR9, FUN11(VAR26));
            VAR23 = FUN10(VAR9, VAR35);
            VAR9->VAR28 = FUN10(VAR9, 0);
            VAR34 = FUN10(VAR9, VAR36);
            for (VAR11 = 0; VAR11 < VAR34; VAR11++)
            {
                FUN12(&VAR9->VAR20, 8);
            }
        }
        VAR9->VAR37 = FUN13(VAR38, VAR23);
        FUN14(VAR9);
        FUN15(VAR9);
        if (VAR9->VAR29 > 1)
            VAR9->VAR25 = VAR39;
        if (FUN16(&VAR9->VAR20, VAR40) != VAR41)
        {
            FUN9(VAR9->VAR2, VAR24, "");
            return -1;
        }
        VAR9->VAR42 = FUN16(&VAR9->VAR20, VAR43);
        if (VAR9->VAR42 >= VAR44 || VAR9->VAR42 < VAR45)
        {
            FUN9(VAR9->VAR2, VAR24, "", VAR9->VAR42);
            return -1;
        }
        for (VAR11 = 0; VAR11 < VAR9->VAR42; VAR11++)
            VAR9->VAR46[VAR11] = (char)FUN16(&VAR9->VAR20, VAR47);
        if (FUN17(VAR2, VAR9->VAR46, VAR9->VAR42) < 0)
            return -1;
        VAR9->VAR48 = 0;
        VAR9->VAR49 = 0;
    }
    else
    {
        int VAR50;
        int VAR51;
        VAR50 = FUN16(&VAR9->VAR20, VAR40);
        switch (VAR50)
        {
        case VAR52:
        case VAR53:
        case VAR54:
        case VAR55:
        case VAR56:
        case VAR57:
        {
            int VAR58 = 0;
            int VAR59 = VAR9->VAR48;
            int32_t VAR60;
            if (VAR50 != VAR52)
            {
                VAR58 = FUN16(&VAR9->VAR20, VAR61);
                if (VAR9->VAR29 == 0)
                    VAR58--;
            }
            if (VAR9->VAR28 == 0)
                VAR60 = VAR9->VAR62[VAR59][0];
            else
            {
                int32_t VAR63 = (VAR9->VAR29 < 2) ? 0 : VAR9->VAR28 / 2;
                for (VAR11 = 0; VAR11 < VAR9->VAR28; VAR11++)
                    VAR63 += VAR9->VAR62[VAR59][VAR11];
                VAR60 = VAR63 / VAR9->VAR28;
                if (VAR9->VAR29 >= 2)
                    VAR60 >>= FUN3(1, VAR9->VAR49);
            }
            switch (VAR50)
            {
            case VAR52:
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR9->VAR64[VAR59][VAR11] = 0;
                break;
            case VAR53:
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR9->VAR64[VAR59][VAR11] = FUN18(&VAR9->VAR20, VAR58) + VAR60;
                break;
            case VAR54:
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR9->VAR64[VAR59][VAR11] = FUN18(&VAR9->VAR20, VAR58) + VAR9->VAR64[VAR59][VAR11 - 1];
                break;
            case VAR55:
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR9->VAR64[VAR59][VAR11] = FUN18(&VAR9->VAR20, VAR58) + 2 * VAR9->VAR64[VAR59][VAR11 - 1] - VAR9->VAR64[VAR59][VAR11 - 2];
                break;
            case VAR56:
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR9->VAR64[VAR59][VAR11] = FUN18(&VAR9->VAR20, VAR58) + 3 * VAR9->VAR64[VAR59][VAR11 - 1] - 3 * VAR9->VAR64[VAR59][VAR11 - 2] + VAR9->VAR64[VAR59][VAR11 - 3];
                break;
            case VAR57:
            {
                int VAR65 = FUN16(&VAR9->VAR20, VAR35);
                for (VAR11 = 0; VAR11 < VAR65; VAR11++)
                    VAR9->VAR64[VAR59][VAR11 - VAR65] -= VAR60;
                FUN19(VAR9, VAR59, VAR58, VAR65);
                if (VAR60 != 0)
                    for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                        VAR9->VAR64[VAR59][VAR11] += VAR60;
            }
            }
            if (VAR9->VAR28 > 0)
            {
                int32_t VAR63 = (VAR9->VAR29 < 2) ? 0 : VAR9->VAR22 / 2;
                for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
                    VAR63 += VAR9->VAR64[VAR59][VAR11];
                for (VAR11 = 1; VAR11 < VAR9->VAR28; VAR11++)
                    VAR9->VAR62[VAR59][VAR11 - 1] = VAR9->VAR62[VAR59][VAR11];
                if (VAR9->VAR29 < 2)
                    VAR9->VAR62[VAR59][VAR9->VAR28 - 1] = VAR63 / VAR9->VAR22;
                else
                    VAR9->VAR62[VAR59][VAR9->VAR28 - 1] = (VAR63 / VAR9->VAR22) << VAR9->VAR49;
            }
            for (VAR11 = -VAR9->VAR37; VAR11 < 0; VAR11++)
                VAR9->VAR64[VAR59][VAR11] = VAR9->VAR64[VAR59][VAR11 + VAR9->VAR22];
            FUN20(VAR9, VAR9->VAR64[VAR59]);
            VAR9->VAR48++;
            if (VAR9->VAR48 == VAR9->VAR27)
            {
                VAR14 = FUN21(VAR14, VAR9->VAR27, VAR9->VAR22, VAR9->VAR64);
                VAR9->VAR48 = 0;
                goto VAR66;
            }
            break;
        }
        break;
        case VAR41:
            VAR51 = FUN16(&VAR9->VAR20, VAR43);
            while (VAR51--)
            {
                FUN16(&VAR9->VAR20, VAR47);
            }
            break;
        case VAR67:
            VAR9->VAR49 = FUN16(&VAR9->VAR20, VAR68);
            break;
        case VAR69:
            VAR9->VAR22 = FUN10(VAR9, FUN11(VAR9->VAR22));
            break;
        case VAR70:
            return VAR7;
            break;
        default:
            FUN9(VAR2, VAR24, "", VAR50);
            return -1;
            break;
        }
    }
VAR66:
    *VAR4 = (VAR71 *)VAR14 - (VAR71 *)VAR3;
    VAR9->VAR21 = FUN22(&VAR9->VAR20) - 8 * ((FUN22(&VAR9->VAR20)) / 8);
    VAR11 = (FUN22(&VAR9->VAR20)) / 8;
    if (VAR11 > VAR7)
    {
        FUN9(VAR9->VAR2, VAR24, "", VAR11 - VAR7);
        VAR9->VAR18 = 0;
        VAR9->VAR19 = 0;
        return -1;
    }
    if (VAR9->VAR18)
    {
        VAR9->VAR19 += VAR11;
        VAR9->VAR18 -= VAR11;
        return VAR12;
    }
    else
        return VAR11;
}