static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4 + 10];
    char *VAR5, *VAR6, *VAR7;
    int VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    int VAR11 = -1, VAR12 = -1, VAR13 = 0, VAR14 = 0, VAR15 = 0, VAR16 = 0;
    enum AVPixelFormat VAR17 = VAR18, VAR19 = VAR18;
    enum AVChromaLocation VAR20 = VAR21;
    enum AVFieldOrder VAR22 = VAR23;
    VAR24 *VAR25;
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
    if (FUN3(VAR3, VAR26, strlen(VAR26)))
        return -1;
    VAR7 = &VAR3[VAR8 + 1];
    for (VAR5 = &VAR3[strlen(VAR26) + 1]; VAR5 < VAR7; VAR5++)
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
                VAR17 = VAR27;
                VAR20 = VAR28;
            }
            else if (FUN3("", VAR5, 8) == 0)
            {
                VAR17 = VAR27;
                VAR20 = VAR29;
            }
            else if (FUN3("", VAR5, 8) == 0)
            {
                VAR17 = VAR27;
                VAR20 = VAR30;
            }
            else if (FUN3("", VAR5, 3) == 0)
            {
                VAR17 = VAR27;
                VAR20 = VAR28;
            }
            else if (FUN3("", VAR5, 3) == 0)
                VAR17 = VAR31;
            else if (FUN3("", VAR5, 3) == 0)
                VAR17 = VAR32;
            else if (FUN3("", VAR5, 8) == 0)
            {
                FUN5(VAR2, VAR33, ""
                                        "");
                return -1;
            }
            else if (FUN3("", VAR5, 3) == 0)
                VAR17 = VAR34;
            else if (FUN3("", VAR5, 4) == 0)
            {
                VAR17 = VAR35;
            }
            else
            {
                FUN5(VAR2, VAR33, ""
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
                VAR22 = VAR23;
                break;
            case '':
                VAR22 = VAR36;
                break;
            case '':
                VAR22 = VAR37;
                break;
            case '':
                VAR22 = VAR38;
                break;
            case '':
                FUN5(VAR2, VAR33, ""
                                        "");
                return -1;
            default:
                FUN5(VAR2, VAR33, "");
                return -1;
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
                    VAR19 = VAR27;
                else if (FUN3("", VAR5, 8) == 0)
                    VAR19 = VAR27;
                else if (FUN3("", VAR5, 8) == 0)
                    VAR19 = VAR27;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR31;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR32;
                else if (FUN3("", VAR5, 3) == 0)
                    VAR19 = VAR34;
            }
            while (VAR5 < VAR7 && *VAR5 != 0x20)
                VAR5++;
            break;
        }
    }
    if (VAR11 == -1 || VAR12 == -1)
    {
        FUN5(VAR2, VAR33, "");
        return -1;
    }
    if (VAR17 == VAR18)
    {
        if (VAR19 == VAR18)
            VAR17 = VAR27;
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
    VAR25 = FUN6(VAR2, NULL);
    if (!VAR25)
        return FUN7(VAR39);
    VAR25->VAR40->VAR11 = VAR11;
    VAR25->VAR40->VAR12 = VAR12;
    FUN8(&VAR13, &VAR14, VAR13, VAR14, (1UL << 31) - 1);
    FUN9(VAR25, 64, VAR14, VAR13);
    VAR25->VAR41 = FUN10(VAR25->VAR42);
    VAR25->VAR40->VAR17 = VAR17;
    VAR25->VAR40->VAR43 = VAR44;
    VAR25->VAR40->VAR45 = VAR46;
    VAR25->VAR47 = (VAR48){VAR15, VAR16};
    VAR25->VAR40->VAR20 = VAR20;
    VAR25->VAR40->VAR22 = VAR22;
    return 0;
}