static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8 = 0;
    int VAR9 = 0, VAR10 = 0;
    VAR11 *VAR12;
    enum PixelFormat VAR13 = VAR14;
    AVRational VAR15;
    VAR2->VAR16 |= VAR17;
    VAR12 = FUN2(VAR2, NULL);
    if (!VAR12)
    {
        return FUN3(VAR18);
    }
    if (VAR4->VAR19 && (VAR13 = FUN4(VAR4->VAR19)) == VAR14)
    {
        FUN5(VAR2, VAR20, "", VAR4->VAR19);
        return FUN3(VAR21);
    }
    if (VAR4->VAR22 && (VAR8 = FUN6(&VAR9, &VAR10, VAR4->VAR22)) < 0)
    {
        FUN5(VAR4, VAR20, "", VAR4->VAR22);
        return VAR8;
    }
    if ((VAR8 = FUN7(&VAR15, VAR4->VAR15)) < 0)
    {
        FUN5(VAR4, VAR20, "", VAR4->VAR15);
        return VAR8;
    }
    FUN8(VAR4->VAR23, VAR2->VAR24, sizeof(VAR4->VAR23));
    VAR4->VAR25 = 0;
    VAR4->VAR26 = 0;
    if (VAR2->VAR27->VAR28 & VAR29)
        VAR4->VAR30 = 0;
    else
    {
        VAR4->VAR30 = 1;
        VAR12->VAR31 = VAR32;
    }
    FUN9(VAR12, 60, VAR15.VAR33, VAR15.VAR34);
    if (VAR9 && VAR10)
    {
        VAR12->VAR35->VAR9 = VAR9;
        VAR12->VAR35->VAR10 = VAR10;
    }
    if (!VAR4->VAR30)
    {
        if (VAR4->VAR36 == VAR37)
        {
            VAR4->VAR38 = FUN10(VAR4->VAR23);
            if (VAR4->VAR38)
            {
                char *VAR39 = VAR4->VAR23, *VAR40, *VAR41;
                int VAR42;
                FUN5(VAR2, VAR43, ""
                                           "");
                VAR41 = VAR40 = FUN11(VAR39);
                while (*VAR40)
                {
                    if ((VAR39 - VAR4->VAR23) >= (sizeof(VAR4->VAR23) - 2))
                        break;
                    if (*VAR40 == '' && strspn(VAR40 + 1, ""))
                        ++VAR40;
                    else if (strspn(VAR40, ""))
                        *VAR39++ = '';
                    *VAR39++ = *VAR40++;
                }
                *VAR39 = 0;
                FUN12(VAR41);
                VAR42 = FUN13(VAR4->VAR23, VAR44 | VAR45 | VAR46, NULL, &VAR4->VAR47);
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
            if (FUN14(&VAR6, &VAR7, VAR4->VAR23, VAR4->VAR51, VAR4->VAR52) < 0)
            {
                FUN5(VAR2, VAR20, "", VAR4->VAR23, VAR4->VAR51, VAR4->VAR51 + VAR4->VAR52 - 1);
                return FUN3(VAR48);
            }
        }
        else if (VAR4->VAR36 == VAR53)
        {
            int VAR42;
            VAR42 = FUN13(VAR4->VAR23, VAR44 | VAR45 | VAR46, NULL, &VAR4->VAR47);
            if (VAR42 != 0)
            {
                return FUN3(VAR48);
            }
            VAR6 = 0;
            VAR7 = VAR4->VAR47.VAR49 - 1;
            VAR4->VAR38 = 1;
            FUN5(VAR2, VAR20, ""
                                     "");
            return FUN3(VAR54);
        }
        else if (VAR4->VAR36 != VAR37)
        {
            FUN5(VAR2, VAR20, "", VAR4->VAR36);
            return FUN3(VAR21);
        }
        VAR4->VAR55 = VAR6;
        VAR4->VAR56 = VAR7;
        VAR4->VAR25 = VAR6;
        VAR12->VAR57 = 0;
        VAR12->VAR58 = VAR7 - VAR6 + 1;
    }
    if (VAR2->VAR59)
    {
        VAR12->VAR35->VAR60 = VAR61;
        VAR12->VAR35->VAR62 = VAR2->VAR59;
    }
    else if (VAR2->VAR63)
    {
        VAR12->VAR35->VAR60 = VAR64;
        VAR12->VAR35->VAR62 = VAR2->VAR63;
    }
    else
    {
        const char *VAR65 = strrchr(VAR4->VAR23, '');
        VAR4->VAR66 = VAR65 && !FUN15(VAR65 + 1, "");
        VAR12->VAR35->VAR60 = VAR61;
        VAR12->VAR35->VAR62 = FUN16(VAR4->VAR23);
        if (VAR12->VAR35->VAR62 == VAR67)
            VAR12->VAR35->VAR62 = VAR68;
    }
    if (VAR12->VAR35->VAR60 == VAR61 && VAR13 != VAR14)
        VAR12->VAR35->VAR13 = VAR13;
    return 0;
}