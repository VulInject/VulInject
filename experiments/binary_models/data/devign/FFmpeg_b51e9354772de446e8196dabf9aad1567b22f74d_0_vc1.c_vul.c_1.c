int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    if (VAR2->VAR8)
        VAR2->VAR9 = FUN2(VAR4);
    if (!VAR2->VAR10.VAR11->VAR12)
        return -1;
    if (VAR2->VAR10.VAR11->VAR13 == VAR14)
        VAR2->VAR15 = VAR2->VAR16 = VAR2->VAR17 = FUN3(VAR4, 2) == 1;
    else
        FUN4(VAR4, 2);
    VAR2->VAR18 = 0;
    if (VAR2->VAR16)
        VAR2->VAR18 = FUN2(VAR4);
    VAR2->VAR10.VAR19 = FUN2(VAR4);
    if (VAR2->VAR10.VAR11->VAR20)
    {
        if (!VAR2->VAR10.VAR19)
        {
            if (FUN2(VAR4))
                VAR2->VAR10.VAR19 = VAR21;
            else
                VAR2->VAR10.VAR19 = VAR22;
        }
        else
            VAR2->VAR10.VAR19 = VAR23;
    }
    else
        VAR2->VAR10.VAR19 = VAR2->VAR10.VAR19 ? VAR23 : VAR21;
    VAR2->VAR24 = 0;
    if (VAR2->VAR10.VAR19 == VAR22)
    {
        if (FUN5(VAR2, VAR4) < 0)
            return VAR25;
        if (VAR2->VAR26 == 0)
        {
            VAR2->VAR10.VAR19 = VAR27;
        }
    }
    if (VAR2->VAR10.VAR19 == VAR21 || VAR2->VAR10.VAR19 == VAR27)
        FUN4(VAR4, 7);
    if (VAR2->VAR28)
        return 0;
    if (VAR2->VAR10.VAR19 == VAR21 || VAR2->VAR10.VAR19 == VAR27)
        VAR2->VAR29 = 1;
    if (VAR2->VAR10.VAR19 == VAR23)
        VAR2->VAR29 ^= 1;
    VAR5 = FUN3(VAR4, 5);
    if (!VAR5)
        return -1;
    if (VAR2->VAR30 == VAR31)
        VAR2->VAR32 = VAR33[0][VAR5];
    else
        VAR2->VAR32 = VAR33[1][VAR5];
    VAR2->VAR34 = 1;
    if (VAR2->VAR30 == VAR31)
        VAR2->VAR34 = VAR5 < 9;
    if (VAR2->VAR30 == VAR35)
        VAR2->VAR34 = 0;
    VAR2->VAR5 = VAR5;
    if (VAR5 < 9)
        VAR2->VAR36 = FUN2(VAR4);
    else
        VAR2->VAR36 = 0;
    if (VAR2->VAR30 == VAR37)
        VAR2->VAR34 = FUN2(VAR4);
    VAR2->VAR38 = 0;
    if (VAR2->VAR39 == 1)
        VAR2->VAR40 = FUN6(VAR4, 0, 3);
    VAR2->VAR41 = VAR2->VAR40 + 9 + (VAR2->VAR40 >> 1);
    VAR2->VAR42 = VAR2->VAR40 + 8;
    VAR2->VAR43 = 1 << (VAR2->VAR41 - 1);
    VAR2->VAR44 = 1 << (VAR2->VAR42 - 1);
    if (VAR2->VAR17 && VAR2->VAR10.VAR19 != VAR22)
        VAR2->VAR15 = FUN3(VAR4, 2);
    if (VAR2->VAR45 && (VAR2->VAR10.VAR19 == VAR21 || VAR2->VAR10.VAR19 == VAR27))
    {
        VAR2->VAR46 = FUN2(VAR4);
    }
    else
        VAR2->VAR46 = 0;
    FUN7(VAR2->VAR10.VAR11, "", (VAR2->VAR10.VAR19 == VAR23) ? '' : ((VAR2->VAR10.VAR19 == VAR21) ? '' : ''), VAR5, VAR2->VAR32, VAR2->VAR36, VAR2->VAR18);
    if (VAR2->VAR47)
        FUN8(VAR2);
    switch (VAR2->VAR10.VAR19)
    {
    case VAR23:
        if (VAR2->VAR32 < 5)
            VAR2->VAR48 = 0;
        else if (VAR2->VAR32 < 13)
            VAR2->VAR48 = 1;
        else
            VAR2->VAR48 = 2;
        VAR6 = (VAR2->VAR32 > 12) ? 0 : 1;
        VAR2->VAR49 = VAR50[VAR6][FUN6(VAR4, 1, 4)];
        if (VAR2->VAR49 == VAR51)
        {
            VAR2->VAR52 = VAR53[VAR6][FUN6(VAR4, 1, 3)];
            VAR2->VAR54 = FUN3(VAR4, 6);
            VAR2->VAR55 = FUN3(VAR4, 6);
            VAR2->VAR56 = 1;
            FUN9(VAR2->VAR54, VAR2->VAR55, VAR2->VAR57[0], VAR2->VAR58[0], 1);
            FUN9(VAR2->VAR54, VAR2->VAR55, VAR2->VAR57[1], VAR2->VAR58[1], 1);
        }
        VAR2->VAR59 = VAR2->VAR10.VAR60;
        if (VAR2->VAR49 == VAR61 || VAR2->VAR49 == VAR62)
            VAR2->VAR10.VAR60 = 0;
        else if (VAR2->VAR49 == VAR51)
        {
            if (VAR2->VAR52 == VAR61 || VAR2->VAR52 == VAR62)
                VAR2->VAR10.VAR60 = 0;
            else
                VAR2->VAR10.VAR60 = 1;
        }
        else
            VAR2->VAR10.VAR60 = 1;
        VAR2->VAR10.VAR63 = !(VAR2->VAR49 == VAR62 || (VAR2->VAR49 == VAR51 && VAR2->VAR52 == VAR62));
        if ((VAR2->VAR49 == VAR51 && VAR2->VAR52 == VAR64) || VAR2->VAR49 == VAR64)
        {
            VAR7 = FUN10(VAR2->VAR65, &VAR2->VAR66, VAR2);
            if (VAR7 < 0)
                return -1;
            FUN11(VAR2->VAR10.VAR11, VAR67, ""
                                             "",
                   VAR7 >> 1, VAR7 & 1);
        }
        else
        {
            VAR2->VAR66 = 0;
            memset(VAR2->VAR65, 0, VAR2->VAR10.VAR68 * VAR2->VAR10.VAR69);
        }
        VAR7 = FUN10(VAR2->VAR10.VAR70, &VAR2->VAR71, VAR2);
        if (VAR7 < 0)
            return -1;
        FUN11(VAR2->VAR10.VAR11, VAR67, ""
                                         "",
               VAR7 >> 1, VAR7 & 1);
        VAR2->VAR10.VAR72 = FUN3(VAR4, 2);
        VAR2->VAR73 = &VAR74[FUN3(VAR4, 2)];
        if (VAR2->VAR75)
        {
            FUN11(VAR2->VAR10.VAR11, VAR67, "");
            FUN12(VAR2);
        }
        VAR2->VAR76 = 0;
        if (VAR2->VAR77)
        {
            VAR2->VAR78 = FUN2(VAR4);
            if (VAR2->VAR78)
            {
                VAR2->VAR76 = VAR79[FUN3(VAR4, 2)];
            }
        }
        else
        {
            VAR2->VAR78 = 1;
            VAR2->VAR76 = VAR80;
        }
        break;
    case VAR22:
        if (VAR2->VAR32 < 5)
            VAR2->VAR48 = 0;
        else if (VAR2->VAR32 < 13)
            VAR2->VAR48 = 1;
        else
            VAR2->VAR48 = 2;
        VAR2->VAR49 = FUN2(VAR4) ? VAR81 : VAR62;
        VAR2->VAR59 = VAR2->VAR10.VAR60;
        VAR2->VAR10.VAR60 = (VAR2->VAR49 == VAR81);
        VAR2->VAR10.VAR63 = VAR2->VAR10.VAR60;
        VAR7 = FUN10(VAR2->VAR82, &VAR2->VAR83, VAR2);
        if (VAR7 < 0)
            return -1;
        FUN11(VAR2->VAR10.VAR11, VAR67, ""
                                         "",
               VAR7 >> 1, VAR7 & 1);
        VAR7 = FUN10(VAR2->VAR10.VAR70, &VAR2->VAR71, VAR2);
        if (VAR7 < 0)
            return -1;
        FUN11(VAR2->VAR10.VAR11, VAR67, ""
                                         "",
               VAR7 >> 1, VAR7 & 1);
        VAR2->VAR10.VAR72 = FUN3(VAR4, 2);
        VAR2->VAR73 = &VAR74[FUN3(VAR4, 2)];
        if (VAR2->VAR75)
        {
            FUN11(VAR2->VAR10.VAR11, VAR67, "");
            FUN12(VAR2);
        }
        VAR2->VAR76 = 0;
        if (VAR2->VAR77)
        {
            VAR2->VAR78 = FUN2(VAR4);
            if (VAR2->VAR78)
            {
                VAR2->VAR76 = VAR79[FUN3(VAR4, 2)];
            }
        }
        else
        {
            VAR2->VAR78 = 1;
            VAR2->VAR76 = VAR80;
        }
        break;
    }
    if (!VAR2->VAR46)
    {
        VAR2->VAR84 = FUN13(VAR4);
        if (VAR2->VAR10.VAR19 == VAR21 || VAR2->VAR10.VAR19 == VAR27)
        {
            VAR2->VAR85 = FUN13(VAR4);
        }
        VAR2->VAR10.VAR86 = FUN2(VAR4);
    }
    if (VAR2->VAR10.VAR19 == VAR27)
    {
        VAR2->VAR10.VAR19 = VAR22;
        VAR2->VAR24 = 1;
    }
    return 0;