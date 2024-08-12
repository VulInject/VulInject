static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[VAR6 + 10];
    char *VAR7, *VAR8, *VAR9;
    int VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int VAR13 = -1, VAR14 = -1, VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18 = 0;
    enum PixelFormat VAR19 = VAR20, VAR21 = VAR20;
    enum AVChromaLocation VAR22 = VAR23;
    VAR24 *VAR25;
    struct VAR26 *VAR27 = VAR2->VAR28;
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        VAR5[VAR10] = FUN2(VAR12);
        if (VAR5[VAR10] == '')
        {
            VAR5[VAR10 + 1] = 0x20;
            VAR5[VAR10 + 2] = 0;
            break;
        }
    }
    if (VAR10 == VAR6)
        return -1;
    if (FUN3(VAR5, VAR29, strlen(VAR29)))
        return -1;
    VAR27->VAR30 = 0;
    VAR27->VAR31 = 0;
    VAR9 = &VAR5[VAR10 + 1];
    for (VAR7 = &VAR5[strlen(VAR29) + 1]; VAR7 < VAR9; VAR7++)
    {
        if (*VAR7 == 0x20)
            continue;
        switch (*VAR7++)
        {
        case '':
            VAR13 = FUN4(VAR7, &VAR8, 10);
            VAR7 = VAR8;
            break;
        case '':
            VAR14 = FUN4(VAR7, &VAR8, 10);
            VAR7 = VAR8;
            break;
        case '':
            if (FUN3("", VAR7, 7) == 0)
            {
                VAR19 = VAR32;
                VAR22 = VAR33;
            }
            else if (FUN3("", VAR7, 8) == 0)
            {
                VAR19 = VAR32;
                VAR22 = VAR34;
            }
            else if (FUN3("", VAR7, 8) == 0)
            {
                VAR19 = VAR32;
                VAR22 = VAR35;
            }
            else if (FUN3("", VAR7, 3) == 0)
                VAR19 = VAR36;
            else if (FUN3("", VAR7, 3) == 0)
                VAR19 = VAR37;
            else if (FUN3("", VAR7, 8) == 0)
            {
                FUN5(VAR2, VAR38, "");
                return -1;
            }
            else if (FUN3("", VAR7, 3) == 0)
                VAR19 = VAR39;
            else if (FUN3("", VAR7, 4) == 0)
            {
                VAR19 = VAR40;
            }
            else
            {
                FUN5(VAR2, VAR38, "");
                return -1;
            }
            while (VAR7 < VAR9 && *VAR7 != 0x20)
                VAR7++;
            break;
        case '':
            switch (*VAR7++)
            {
            case '':
                break;
            case '':
                VAR27->VAR30 = 0;
                break;
            case '':
                VAR27->VAR30 = 1;
                VAR27->VAR31 = 1;
                break;
            case '':
                VAR27->VAR30 = 1;
                VAR27->VAR31 = 0;
                break;
            case '':
                FUN5(VAR2, VAR38, "");
                return -1;
            default:
                FUN5(VAR2, VAR38, "");
                return -1;
            }
            break;
        case '':
            sscanf(VAR7, "", &VAR15, &VAR16);
            while (VAR7 < VAR9 && *VAR7 != 0x20)
                VAR7++;
            break;
        case '':
            sscanf(VAR7, "", &VAR17, &VAR18);
            while (VAR7 < VAR9 && *VAR7 != 0x20)
                VAR7++;
            break;
        case '':
            if (FUN3("", VAR7, 6) == 0)
            {
                VAR7 += 6;
                if (FUN3("", VAR7, 7) == 0)
                    VAR21 = VAR32;
                else if (FUN3("", VAR7, 8) == 0)
                    VAR21 = VAR32;
                else if (FUN3("", VAR7, 8) == 0)
                    VAR21 = VAR32;
                else if (FUN3("", VAR7, 3) == 0)
                    VAR21 = VAR36;
                else if (FUN3("", VAR7, 3) == 0)
                    VAR21 = VAR37;
                else if (FUN3("", VAR7, 3) == 0)
                    VAR21 = VAR39;
            }
            while (VAR7 < VAR9 && *VAR7 != 0x20)
                VAR7++;
            break;
        }
    }
    if ((VAR13 == -1) || (VAR14 == -1))
    {
        FUN5(VAR2, VAR38, "");
        return -1;
    }
    if (VAR19 == VAR20)
    {
        if (VAR21 == VAR20)
            VAR19 = VAR32;
        else
            VAR19 = VAR21;
    }
    if (VAR15 <= 0 || VAR16 <= 0)
    {
        VAR15 = 25;
        VAR16 = 1;
    }
    if (VAR17 == 0 && VAR18 == 0)
    {
        VAR18 = 1;
    }
    VAR25 = FUN6(VAR2, 0);
    if (!VAR25)
        return FUN7(VAR41);
    VAR25->VAR42->VAR13 = VAR13;
    VAR25->VAR42->VAR14 = VAR14;
    FUN8(&VAR15, &VAR16, VAR15, VAR16, (1UL << 31) - 1);
    FUN9(VAR25, 64, VAR16, VAR15);
    VAR25->VAR42->VAR19 = VAR19;
    VAR25->VAR42->VAR43 = VAR44;
    VAR25->VAR42->VAR45 = VAR46;
    VAR25->VAR47 = (VAR48){VAR17, VAR18};
    VAR25->VAR42->VAR22 = VAR22;
    return 0;
}