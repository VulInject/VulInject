int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR8 *VAR9;
    enum AVPixelFormat VAR10 = VAR11;
    VAR2->VAR12 |= VAR13;
    VAR9 = FUN2(VAR2, NULL);
    if (!VAR9)
    {
        return FUN3(VAR14);
    }
    if (VAR4->VAR15 && (VAR10 = FUN4(VAR4->VAR15)) == VAR11)
    {
        FUN5(VAR2, VAR16, "", VAR4->VAR15);
        return FUN3(VAR17);
    }
    FUN6(VAR4->VAR18, VAR2->VAR19, sizeof(VAR4->VAR18));
    VAR4->VAR20 = 0;
    VAR4->VAR21 = 0;
    if (VAR2->VAR22->VAR23 & VAR24)
        VAR4->VAR25 = 0;
    else
    {
        VAR4->VAR25 = 1;
        VAR9->VAR26 = VAR27;
    }
    if (VAR4->VAR28 == 2)
    {
        FUN5(VAR2, VAR16, "");
        return FUN3(VAR29);
        FUN7(VAR9, 64, 1, 1000000000);
    }
    else if (VAR4->VAR28)
        FUN7(VAR9, 64, 1, 1);
    else
        FUN7(VAR9, 64, VAR4->VAR30.VAR31, VAR4->VAR30.VAR32);
    if (VAR4->VAR33 && VAR4->VAR34)
    {
        VAR9->VAR35->VAR33 = VAR4->VAR33;
        VAR9->VAR35->VAR34 = VAR4->VAR34;
    }
    if (!VAR4->VAR25)
    {
        if (VAR4->VAR36 == VAR37)
        {
            VAR4->VAR38 = FUN8(VAR4->VAR18);
            if (VAR4->VAR38)
            {
                char *VAR39 = VAR4->VAR18, *VAR40, *VAR41;
                int VAR42;
                FUN5(VAR2, VAR43, ""
                                           "");
                VAR41 = VAR40 = FUN9(VAR39);
                while (*VAR40)
                {
                    if ((VAR39 - VAR4->VAR18) >= (sizeof(VAR4->VAR18) - 2))
                        break;
                    if (*VAR40 == '' && strspn(VAR40 + 1, ""))
                        ++VAR40;
                    else if (strspn(VAR40, ""))
                        *VAR39++ = '';
                    *VAR39++ = *VAR40++;
                }
                *VAR39 = 0;
                FUN10(VAR41);
                VAR42 = FUN11(VAR4->VAR18, VAR44 | VAR45 | VAR46, NULL, &VAR4->VAR47);
                if (VAR42 != 0)
                {
                    return FUN3(VAR48);
                }
                VAR6 = 0;
                VAR7 = VAR4->VAR47.VAR49 - 1;
            }
        }
        if ((VAR4->VAR36 == VAR37 && !VAR4->VAR38) || VAR4->VAR36 == VAR50)
        {
            if (FUN12(&VAR6, &VAR7, VAR4->VAR18, VAR4->VAR51, VAR4->VAR52) < 0)
            {
                FUN5(VAR2, VAR16, "", VAR4->VAR18, VAR4->VAR51, VAR4->VAR51 + VAR4->VAR52 - 1);
                return FUN3(VAR48);
            }
        }
        else if (VAR4->VAR36 == VAR53)
        {
            int VAR42;
            VAR42 = FUN11(VAR4->VAR18, VAR44 | VAR45 | VAR46, NULL, &VAR4->VAR47);
            if (VAR42 != 0)
            {
                return FUN3(VAR48);
            }
            VAR6 = 0;
            VAR7 = VAR4->VAR47.VAR49 - 1;
            VAR4->VAR38 = 1;
            FUN5(VAR2, VAR16, ""
                                     "");
            return FUN3(VAR29);
        }
        else if (VAR4->VAR36 != VAR37)
        {
            FUN5(VAR2, VAR16, "", VAR4->VAR36);
            return FUN3(VAR17);
        }
        VAR4->VAR54 = VAR6;
        VAR4->VAR55 = VAR7;
        VAR4->VAR20 = VAR6;
        if (!VAR4->VAR28)
        {
            VAR9->VAR56 = 0;
            VAR9->VAR57 = VAR7 - VAR6 + 1;
        }
    }
    if (VAR2->VAR58)
    {
        VAR9->VAR35->VAR59 = VAR60;
        VAR9->VAR35->VAR61 = VAR2->VAR58;
    }
    else if (VAR2->VAR62)
    {
        VAR9->VAR35->VAR59 = VAR63;
        VAR9->VAR35->VAR61 = VAR2->VAR62;
    }
    else if (VAR2->VAR22->VAR64)
    {
        VAR9->VAR35->VAR59 = VAR60;
        VAR9->VAR35->VAR61 = VAR2->VAR22->VAR64;
    }
    else
    {
        const char *VAR65 = strrchr(VAR4->VAR18, '');
        VAR4->VAR66 = VAR65 && !FUN13(VAR65 + 1, "");
        VAR9->VAR35->VAR59 = VAR60;
        if (VAR2->VAR67)
        {
            int VAR68 = 2048;
            VAR69 *VAR70 = FUN14(NULL, VAR68 + VAR71);
            VAR72 *VAR73 = NULL;
            AVProbeData VAR74 = {0};
            if (!VAR70)
                return FUN3(VAR14);
            VAR68 = FUN15(VAR2->VAR67, VAR70, VAR68);
            if (VAR68 < 0)
            {
                FUN10(VAR70);
                return VAR68;
            }
            memset(VAR70 + VAR68, 0, VAR71);
            VAR74.VAR75 = VAR70;
            VAR74.VAR76 = VAR68;
            VAR74.VAR19 = VAR2->VAR19;
            while ((VAR73 = FUN16(VAR73)))
            {
                if (VAR73->VAR77 != VAR78 || !VAR73->VAR79 || (VAR73->VAR23 & VAR24) || !VAR73->VAR64)
                    continue;
                if (VAR73->FUN17(&VAR74) > 0)
                {
                    VAR9->VAR35->VAR61 = VAR73->VAR64;
                    break;
                }
            }
            FUN18(VAR2->VAR67, &VAR70, VAR68);
        }
        if (VAR9->VAR35->VAR61 == VAR80)
            VAR9->VAR35->VAR61 = FUN19(VAR4->VAR18);
        if (VAR9->VAR35->VAR61 == VAR81)
            VAR9->VAR35->VAR61 = VAR82;
        if (VAR9->VAR35->VAR61 == VAR83)
            VAR9->VAR35->VAR61 = VAR80;
    }
    if (VAR9->VAR35->VAR59 == VAR60 && VAR10 != VAR11)
        VAR9->VAR35->VAR10 = VAR10;
    return 0;
}