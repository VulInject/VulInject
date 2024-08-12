static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4 + 10];
    char *VAR5, *VAR6, *VAR7;
    int VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    int VAR11 = -1, VAR12 = -1, VAR13 = 0, VAR14 = 0, VAR15 = 0, VAR16 = 0;
    enum AVPixelFormat VAR17 = VAR18, VAR19 = VAR18;
    enum AVChromaLocation VAR20 = VAR21;
    VAR22 *VAR23;
    enum AVFieldOrder VAR24;
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        VAR3[VAR8] = FUN2(VAR10);
        if (VAR3[VAR8] == '')
        {
            VAR3[VAR8 + 1] = 0x20;
            VAR3[VAR8 + 2] = 0;
            break;
        }
    }
    if (VAR8 == VAR4)
        return -1;
    if (FUN3(VAR3, VAR25, strlen(VAR25)))
        return -1;
    VAR7 = &VAR3[VAR8 + 1];
    for (VAR5 = &VAR3[strlen(VAR25) + 1]; VAR5 < VAR7; VAR5++)
    {
        if (*VAR5 == 0x20)
            continue;
        switch (*VAR5++)
        {
        case '':
            VAR11 = FUN4(VAR5, &VAR6, 10);
            VAR5 = VAR6;
            break;
        case '':
            VAR12 = FUN4(VAR5, &VAR6, 10);
            VAR5 = VAR6;
            break;
        case '':
            if (FUN3("", VAR5, 7) == 0)
            {
                VAR17 = VAR26;
                VAR20 = VAR27;
            }
            else if (FUN3("", VAR5, 8) == 0)
            {
                VAR17 = VAR26;
                VAR20 = VAR28;
            }
            else if (FUN3("", VAR5, 8) == 0)
            {
                VAR17 = VAR26;
                VAR20 = VAR29;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR30;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR31;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR32;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR33;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR34;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR35;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR36;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR37;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR38;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR39;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR40;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR41;
            }
            else if (FUN3("", VAR5, 5) == 0)
            {
                VAR17 = VAR42;
            }
            else if (FUN3("", VAR5, 5) == 0)
            {
                VAR17 = VAR43;
            }
            else if (FUN3("", VAR5, 5) == 0)
            {
                VAR17 = VAR44;
            }
            else if (FUN3("", VAR5, 3) == 0)
            {
                VAR17 = VAR26;
                VAR20 = VAR27;
            }
            else if (FUN3("", VAR5, 3) == 0)
            {
                VAR17 = VAR45;
            }
            else if (FUN3("", VAR5, 3) == 0)
            {
                VAR17 = VAR46;
            }
            else if (FUN3("", VAR5, 8) == 0)
            {
                FUN5(VAR2, VAR47, ""
                                        "");
                return -1;
            }
            else if (FUN3("", VAR5, 3) == 0)
            {
                VAR17 = VAR48;
            }
            else if (FUN3("", VAR5, 6) == 0)
            {
                VAR17 = VAR49;
            }
            else if (FUN3("", VAR5, 4) == 0)
            {
                VAR17 = VAR50;
            }
            else
            {
                FUN5(VAR2, VAR47, ""
                                        "");
                return -1;
            }
            while (VAR5 < VAR7 && *VAR5 != 0x20)
                VAR5++;
            break;
        case '':
            switch (*VAR5++)
            {
            case '':
                VAR24 = VAR51;
                break;
            case '':
                VAR24 = VAR52;
                break;
            case '':
                VAR24 = VAR53;
                break;
            case '':
                VAR24 = VAR54;
                break;
            case '':
                FUN5(VAR2, VAR47, ""
                                        "");
            default:
                FUN5(VAR2, VAR47, "");
                return FUN6(VAR55);
            }
            break;
        case '':
            sscanf(VAR5, "", &VAR13, &VAR14);
            while (VAR5 < VAR7 && *VAR5 != 0x20)
                VAR5++;
            break;
        case '':
            sscanf(VAR5, "", &VAR15, &VAR16);
            while (VAR5 < VAR7 && *VAR5 != 0x20)
                VAR5++;
            break;
        case '':
            if (FUN3("", VAR5, 6) == 0)
            {
                VAR5 += 6;
                if (FUN3("", VAR5, 7) == 0)
                    VAR19 = VAR26;
                else if (FUN3("", VAR5, 8) == 0)
                    VAR19 = VAR26;
                else if (FUN3("", VAR5, 8) == 0)
                    VAR19 = VAR26;
                else if (FUN3("", VAR5, 5) == 0)
                    VAR19 = VAR42;
                else if (FUN3("", VAR5, 5) == 0)
                    VAR19 = VAR43;
                else if (FUN3("", VAR5, 5) == 0)
                    VAR19 = VAR44;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR39;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR40;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR41;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR36;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR37;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR38;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR33;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR34;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR35;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR30;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR31;
                else if (FUN3("", VAR5, 6) == 0)
                    VAR19 = VAR32;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR45;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR46;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR48;
            }
            while (VAR5 < VAR7 && *VAR5 != 0x20)
                VAR5++;
            break;
        }
    }
    if (VAR11 == -1 || VAR12 == -1)
    {
        FUN5(VAR2, VAR47, "");
        return -1;
    }
    if (VAR17 == VAR18)
    {
        if (VAR19 == VAR18)
            VAR17 = VAR26;
        else
            VAR17 = VAR19;
    }
    if (VAR13 <= 0 || VAR14 <= 0)
    {
        VAR13 = 25;
        VAR14 = 1;
    }
    if (VAR15 == 0 && VAR16 == 0)
    {
        VAR16 = 1;
    }
    VAR23 = FUN7(VAR2, NULL);
    if (!VAR23)
        return FUN6(VAR56);
    VAR23->VAR57->VAR11 = VAR11;
    VAR23->VAR57->VAR12 = VAR12;
    FUN8(&VAR13, &VAR14, VAR13, VAR14, (1UL << 31) - 1);
    FUN9(VAR23, 64, VAR14, VAR13);
    VAR23->VAR58 = FUN10(VAR23->VAR59);
    VAR23->VAR57->VAR17 = VAR17;
    VAR23->VAR57->VAR60 = VAR61;
    VAR23->VAR57->VAR62 = VAR63;
    VAR23->VAR64 = (VAR65){VAR15, VAR16};
    VAR23->VAR57->VAR20 = VAR20;
    VAR23->VAR57->VAR24 = VAR24;
    return 0;
}