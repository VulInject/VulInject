static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    AVOpenCallback VAR10 = VAR2->VAR11->VAR12;
    if (!VAR10)
        VAR10 = VAR13;
    if (VAR7->VAR14 > 0 && VAR7->VAR15 > 0)
    {
        char VAR16[1025];
        const char *VAR17;
        int VAR18, VAR19;
        VAR17 = strrchr(VAR5, '');
        if (VAR17)
            VAR17++;
        else
            VAR17 = VAR5;
        for (VAR18 = 0, VAR19 = strlen(VAR7->VAR20) - 1; VAR19 >= 0; VAR19--)
            if (VAR7->VAR20[VAR19] == '')
            {
                if (VAR18 == VAR7->VAR14 - 1)
                    break;
                else
                    VAR18++;
            }
        if (VAR18 == VAR7->VAR14 - 1 && VAR17 - VAR5 < sizeof(VAR16))
        {
            memcpy(VAR16, VAR5, VAR17 - VAR5);
            VAR16[VAR17 - VAR5] = 0;
            for (VAR18 = 1; VAR18 < VAR7->VAR15; VAR18++)
                FUN2(VAR16, "", sizeof(VAR16));
            FUN2(VAR16, VAR7->VAR20 + VAR19 + 1, sizeof(VAR16));
            if (!VAR2->VAR21 && !VAR2->VAR11->VAR12)
                if (strstr(VAR7->VAR20 + VAR19 + 1, "") || strstr(VAR7->VAR20 + VAR19 + 1, "") || VAR7->VAR15 > 1 || (VAR16[0] == '' && VAR17 == VAR5))
                    return FUN3(VAR22);
            if (strlen(VAR16) + 1 == sizeof(VAR16))
                return FUN3(VAR22);
            if (!FUN4(VAR2->VAR11, VAR4, VAR16, VAR23, VAR9, NULL))
                return 0;
        }
    }
    else if (VAR2->VAR21)
    {
        FUN5(VAR2->VAR11, VAR24, ""
                                      "");
        if (!FUN4(VAR2->VAR11, VAR4, VAR7->VAR20, VAR23, VAR9, NULL))
            return 0;
    }
    else if (VAR2->VAR11->VAR12)
    {
        if (!FUN4(VAR2->VAR11, VAR4, VAR7->VAR20, VAR23, VAR9, NULL))
            return 0;
    }
    else
    {
        FUN5(VAR2->VAR11, VAR25, ""
                                    "",
               VAR7->VAR20);
    }
    return FUN3(VAR22);
}