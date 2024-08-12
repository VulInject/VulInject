static int FUN1(VAR1 *VAR2)
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
    if (VAR4->VAR28)
        FUN7(VAR9, 60, 1, 1);
    else
        FUN7(VAR9, 60, VAR4->VAR29.VAR30, VAR4->VAR29.VAR31);
    if (VAR4->VAR32 && VAR4->VAR33)
    {
        VAR9->VAR34->VAR32 = VAR4->VAR32;
        VAR9->VAR34->VAR33 = VAR4->VAR33;
    }
    if (!VAR4->VAR25)
    {
        if (VAR4->VAR35 == VAR36)
        {
            VAR4->VAR37 = FUN8(VAR4->VAR18);
            if (VAR4->VAR37)
            {
                char *VAR38 = VAR4->VAR18, *VAR39, *VAR40;
                int VAR41;
                FUN5(VAR2, VAR42, ""
                                           "");
                VAR40 = VAR39 = FUN9(VAR38);
                while (*VAR39)
                {
                    if ((VAR38 - VAR4->VAR18) >= (sizeof(VAR4->VAR18) - 2))
                        break;
                    if (*VAR39 == '' && strspn(VAR39 + 1, ""))
                        ++VAR39;
                    else if (strspn(VAR39, ""))
                        *VAR38++ = '';
                    *VAR38++ = *VAR39++;
                }
                *VAR38 = 0;
                FUN10(VAR40);
                VAR41 = FUN11(VAR4->VAR18, VAR43 | VAR44 | VAR45, NULL, &VAR4->VAR46);
                if (VAR41 != 0)
                {
                    return FUN3(VAR47);
                }
                VAR6 = 0;
                VAR7 = VAR4->VAR46.VAR48 - 1;
            }
        }
        if ((VAR4->VAR35 == VAR36 && !VAR4->VAR37) || VAR4->VAR35 == VAR49)
        {
            if (FUN12(&VAR6, &VAR7, VAR4->VAR18, VAR4->VAR50, VAR4->VAR51) < 0)
            {
                FUN5(VAR2, VAR16, "", VAR4->VAR18, VAR4->VAR50, VAR4->VAR50 + VAR4->VAR51 - 1);
                return FUN3(VAR47);
            }
        }
        else if (VAR4->VAR35 == VAR52)
        {
            int VAR41;
            VAR41 = FUN11(VAR4->VAR18, VAR43 | VAR44 | VAR45, NULL, &VAR4->VAR46);
            if (VAR41 != 0)
            {
                return FUN3(VAR47);
            }
            VAR6 = 0;
            VAR7 = VAR4->VAR46.VAR48 - 1;
            VAR4->VAR37 = 1;
            FUN5(VAR2, VAR16, ""
                                     "");
            return FUN3(VAR53);
        }
        else if (VAR4->VAR35 != VAR36)
        {
            FUN5(VAR2, VAR16, "", VAR4->VAR35);
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
        VAR9->VAR34->VAR59 = VAR60;
        VAR9->VAR34->VAR61 = VAR2->VAR58;
    }
    else if (VAR2->VAR62)
    {
        VAR9->VAR34->VAR59 = VAR63;
        VAR9->VAR34->VAR61 = VAR2->VAR62;
    }
    else
    {
        const char *VAR64 = strrchr(VAR4->VAR18, '');
        VAR4->VAR65 = VAR64 && !FUN13(VAR64 + 1, "");
        VAR9->VAR34->VAR59 = VAR60;
        VAR9->VAR34->VAR61 = FUN14(VAR4->VAR18);
        if (VAR9->VAR34->VAR61 == VAR66)
            VAR9->VAR34->VAR61 = VAR67;
    }
    if (VAR9->VAR34->VAR59 == VAR60 && VAR10 != VAR11)
        VAR9->VAR34->VAR10 = VAR10;
    return 0;
}