FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, int VAR10)
{
    int VAR11 = 0;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR3 *VAR17 = VAR4;
    int16_t VAR18;
    VAR19 *VAR20 = NULL;
    int VAR21, VAR22, VAR23 = 0;
    uint64_t VAR24;
    if ((VAR21 = FUN2(VAR4, VAR5, &VAR24)) < 0)
    {
        FUN3(VAR2->VAR25, VAR26, "");
        FUN4(VAR17);
        return VAR11;
    }
    VAR4 += VAR21;
    VAR5 -= VAR21;
    VAR12 = FUN5(VAR2, VAR24);
    if (VAR5 <= 3 || VAR12 < 0 || VAR12 >= VAR2->VAR27)
    {
        FUN3(VAR2->VAR25, VAR28, "", VAR12, VAR5);
        FUN4(VAR17);
        return VAR11;
    }
    if (VAR2->VAR29[VAR12]->VAR30 < 0)
        return VAR11;
    VAR14 = VAR2->VAR25->VAR31[VAR2->VAR29[VAR12]->VAR30];
    if (VAR14->VAR32 >= VAR33)
    {
        FUN4(VAR17);
        return VAR11;
    }
    if (VAR8 == VAR34)
        VAR8 = VAR2->VAR29[VAR12]->VAR35;
    VAR18 = FUN6(VAR4);
    VAR4 += 2;
    VAR22 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR22 & 1 ? VAR36 : 0;
    if (VAR2->VAR37)
    {
        if (!VAR9 || VAR14 != VAR2->VAR38)
            return VAR11;
        VAR2->VAR37 = 0;
    }
    switch ((VAR22 & 0x06) >> 1)
    {
    case 0x0:
        VAR23 = 1;
        VAR20 = FUN7(sizeof(int));
        VAR20[0] = VAR5;
        break;
    case 0x1:
    case 0x2:
    case 0x3:
        if (VAR5 == 0)
        {
            VAR11 = -1;
            break;
        }
        VAR23 = (*VAR4) + 1;
        VAR4 += 1;
        VAR5 -= 1;
        VAR20 = FUN7(VAR23 * sizeof(int));
        switch ((VAR22 & 0x06) >> 1)
        {
        case 0x1:
        {
            uint8_t VAR39;
            uint32_t VAR40 = 0;
            for (VAR21 = 0; VAR11 == 0 && VAR21 < VAR23 - 1; VAR21++)
            {
                while (1)
                {
                    if (VAR5 == 0)
                    {
                        VAR11 = -1;
                        break;
                    }
                    VAR39 = *VAR4;
                    VAR20[VAR21] += VAR39;
                    VAR4 += 1;
                    VAR5 -= 1;
                    if (VAR39 != 0xff)
                        break;
                }
                VAR40 += VAR20[VAR21];
            }
            VAR20[VAR21] = VAR5 - VAR40;
            break;
        }
        case 0x2:
            for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                VAR20[VAR21] = VAR5 / VAR23;
            break;
        case 0x3:
        {
            uint32_t VAR40;
            VAR21 = FUN2(VAR4, VAR5, &VAR24);
            if (VAR21 < 0)
            {
                FUN3(VAR2->VAR25, VAR28, "");
                break;
            }
            VAR4 += VAR21;
            VAR5 -= VAR21;
            VAR40 = VAR20[0] = VAR24;
            for (VAR21 = 1; VAR11 == 0 && VAR21 < VAR23 - 1; VAR21++)
            {
                int64_t VAR41;
                int VAR42;
                VAR42 = FUN8(VAR4, VAR5, &VAR41);
                if (VAR42 < 0)
                {
                    FUN3(VAR2->VAR25, VAR28, "");
                    break;
                }
                VAR4 += VAR42;
                VAR5 -= VAR42;
                VAR20[VAR21] = VAR20[VAR21 - 1] + VAR41;
                VAR40 += VAR20[VAR21];
            }
            VAR20[VAR21] = VAR5 - VAR40;
            break;
        }
        }
        break;
    }
    if (VAR11 == 0)
    {
        int VAR43 = VAR2->VAR29[VAR12]->VAR22 & VAR44;
        uint64_t VAR45 = VAR34;
        if (VAR7 != (VAR46)-1 && (VAR18 >= 0 || VAR7 >= -VAR18))
            VAR45 = VAR7 + VAR18;
        for (VAR21 = 0; VAR21 < VAR23; VAR21++)
        {
            int VAR47, VAR48 = 1;
            if (VAR43)
            {
                VAR48 = *VAR4++ + 1;
                VAR20[VAR21]--;
            }
            for (VAR47 = 0; VAR47 < VAR48; VAR47++)
            {
                int VAR49, VAR50 = 0;
                if (VAR43)
                    VAR50 = FUN9(VAR4, VAR47, VAR48);
                if (VAR47 + 1 == VAR48)
                    VAR49 = VAR20[VAR21] - VAR50;
                else
                    VAR49 = FUN9(VAR4, VAR47 + 1, VAR48) - VAR50;
                if (VAR14->VAR51->VAR52 == VAR53 || VAR14->VAR51->VAR52 == VAR54 || VAR14->VAR51->VAR52 == VAR55)
                {
                    VAR56 *VAR57 = (VAR56 *)VAR2->VAR29[VAR12];
                    int VAR58 = VAR14->VAR51->VAR59;
                    int VAR60 = VAR57->VAR61;
                    int VAR62 = VAR57->VAR63;
                    int VAR64 = VAR57->VAR65;
                    int VAR66 = VAR57->VAR67;
                    int VAR68 = VAR57->VAR69;
                    int VAR70;
                    if (!VAR57->VAR71)
                    {
                        if (VAR14->VAR51->VAR52 == VAR53)
                            for (VAR70 = 0; VAR70 < VAR64 / 2; VAR70++)
                                memcpy(VAR57->VAR72 + VAR70 * 2 * VAR68 + VAR66 * VAR62, VAR4 + VAR70 * VAR62, VAR62);
                        else
                            for (VAR70 = 0; VAR70 < VAR68 / VAR60; VAR70++)
                                memcpy(VAR57->VAR72 + VAR60 * (VAR64 * VAR70 + ((VAR64 + 1) / 2) * (VAR66 & 1) + (VAR66 >> 1)), VAR4 + VAR70 * VAR60, VAR60);
                        if (++VAR57->VAR67 >= VAR64)
                        {
                            VAR57->VAR67 = 0;
                            VAR57->VAR71 = VAR64 * VAR68 / VAR58;
                        }
                    }
                    while (VAR57->VAR71)
                    {
                        VAR16 = FUN7(sizeof(VAR15));
                        FUN10(VAR16, VAR58);
                        memcpy(VAR16->VAR4, VAR57->VAR72 + VAR58 * (VAR64 * VAR68 / VAR58 - VAR57->VAR71--), VAR58);
                        VAR16->VAR6 = VAR6;
                        VAR16->VAR30 = VAR2->VAR29[VAR12]->VAR30;
                        FUN11(VAR2, VAR16);
                    }
                }
                else
                {
                    int VAR73 = 0;
                    if (VAR14->VAR51->VAR52 == VAR74 && ((VAR75 *)(VAR2->VAR29[VAR12]))->VAR76)
                    {
                        int VAR77;
                        for (VAR77 = 0; VAR77 < 8 && VAR4[VAR50 + VAR73]; VAR73++)
                            if (VAR4[VAR50 + VAR73] == '')
                                VAR77++;
                    }
                    VAR16 = FUN7(sizeof(VAR15));
                    if (FUN10(VAR16, VAR49 - VAR73) < 0)
                    {
                        VAR11 = FUN12(VAR78);
                        VAR21 = VAR23 - 1;
                        break;
                    }
                    memcpy(VAR16->VAR4, VAR4 + VAR50 + VAR73, VAR49 - VAR73);
                    if (VAR21 == 0)
                        VAR16->VAR22 = VAR9;
                    VAR16->VAR30 = VAR2->VAR29[VAR12]->VAR30;
                    VAR16->VAR79 = VAR45;
                    VAR16->VAR6 = VAR6;
                    VAR16->VAR8 = VAR8;
                    FUN11(VAR2, VAR16);
                }
                if (VAR45 != VAR34)
                    VAR45 = VAR8 ? VAR45 + VAR8 : VAR34;
            }
            VAR4 += VAR20[VAR21];
        }
    }
    FUN4(VAR20);
    FUN4(VAR17);
    return VAR11;
}