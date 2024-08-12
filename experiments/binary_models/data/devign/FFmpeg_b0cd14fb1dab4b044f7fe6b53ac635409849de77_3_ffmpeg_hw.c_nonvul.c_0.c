int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4;
    enum AVHWDeviceType VAR5;
    VAR6 *VAR7 = NULL;
    int VAR8, VAR9 = 0;
    if (VAR2->VAR10)
    {
        VAR7 = FUN2(VAR2->VAR10);
        if (!VAR7)
        {
            if (VAR2->VAR11 == VAR12)
            {
                VAR9 = 1;
            }
            else if (VAR2->VAR11 == VAR13)
            {
                VAR5 = VAR2->VAR14;
                VAR8 = FUN3(VAR5, VAR2->VAR10, &VAR7);
            }
            else
            {
                return 0;
            }
        }
        else
        {
            if (VAR2->VAR11 == VAR12)
            {
                VAR2->VAR14 = VAR7->VAR5;
            }
            else if (VAR2->VAR14 != VAR7->VAR5)
            {
                FUN4(VAR2->VAR15, VAR16, ""
                                                   ""
                                                   "",
                       VAR7->VAR17, FUN5(VAR7->VAR5), FUN5(VAR2->VAR14));
                return FUN6(VAR18);
            }
        }
    }
    else
    {
        if (VAR2->VAR11 == VAR12)
        {
            VAR9 = 1;
        }
        else if (VAR2->VAR11 == VAR13)
        {
            VAR5 = VAR2->VAR14;
            VAR7 = FUN7(VAR5);
            if (!VAR7)
                VAR8 = FUN3(VAR5, NULL, &VAR7);
        }
        else
        {
            VAR7 = FUN8(VAR2->VAR19);
            if (!VAR7)
            {
                return 0;
            }
        }
    }
    if (VAR9)
    {
        int VAR20;
        if (!FUN9(VAR2->VAR19, 0))
        {
            return 0;
        }
        for (VAR20 = 0; !VAR7; VAR20++)
        {
            VAR4 = FUN9(VAR2->VAR19, VAR20);
            if (!VAR4)
                break;
            VAR5 = VAR4->VAR21;
            VAR7 = FUN7(VAR5);
            if (VAR7)
            {
                FUN4(VAR2->VAR15, VAR22, ""
                                                  "",
                       FUN5(VAR5), VAR7->VAR17);
            }
        }
        for (VAR20 = 0; !VAR7; VAR20++)
        {
            VAR4 = FUN9(VAR2->VAR19, VAR20);
            if (!VAR4)
                break;
            VAR5 = VAR4->VAR21;
            VAR8 = FUN3(VAR5, VAR2->VAR10, &VAR7);
            if (VAR8 < 0)
            {
                continue;
            }
            if (VAR2->VAR10)
            {
                FUN4(VAR2->VAR15, VAR22, ""
                                                  ""
                                                  "",
                       FUN5(VAR5), VAR2->VAR10);
            }
            else
            {
                FUN4(VAR2->VAR15, VAR22, ""
                                                  "",
                       FUN5(VAR5));
            }
        }
        if (VAR7)
        {
            VAR2->VAR14 = VAR5;
        }
        else
        {
            FUN4(VAR2->VAR15, VAR22, ""
                                              "");
            VAR2->VAR11 = VAR23;
            return 0;
        }
    }
    if (!VAR7)
    {
        FUN4(VAR2->VAR15, VAR16, ""
                                           "",
               FUN5(VAR5), VAR2->VAR19->VAR17);
        return VAR8;
    }
    VAR2->VAR15->VAR24 = FUN10(VAR7->VAR25);
    if (!VAR2->VAR15->VAR24)
        return FUN6(VAR26);
    return 0;
}