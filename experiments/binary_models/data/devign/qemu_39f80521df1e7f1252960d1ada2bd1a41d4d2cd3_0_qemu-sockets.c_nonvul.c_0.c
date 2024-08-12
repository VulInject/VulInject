static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, VAR5 **VAR6)
{
    struct addrinfo VAR7, *VAR8, *VAR9;
    char VAR10[33];
    char VAR11[VAR12 + 1];
    char VAR13[33];
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR5 *VAR19 = NULL;
    memset(&VAR7, 0, sizeof(VAR7));
    VAR7.VAR20 = VAR21;
    if (VAR2->VAR22 && VAR2->VAR23)
    {
        VAR7.VAR20 |= VAR24 | VAR25;
    }
    VAR7.VAR26 = FUN2(VAR2, &VAR19);
    VAR7.VAR27 = VAR28;
    if (VAR19)
    {
        FUN3(VAR6, VAR19);
        return -1;
    }
    if (VAR2->VAR29 == NULL)
    {
        FUN4(VAR6, "");
        return -1;
    }
    if (VAR2->VAR10 != NULL)
    {
        FUN5(VAR10, sizeof(VAR10), VAR2->VAR10);
    }
    else
    {
        VAR10[0] = '';
    }
    if (VAR3)
    {
        unsigned long long VAR30;
        if (strlen(VAR10) == 0)
        {
            FUN4(VAR6, "");
            return -1;
        }
        if (FUN6(VAR10, &VAR30, 10) < 0)
        {
            FUN4(VAR6, "", VAR10);
            return -1;
        }
        if (VAR30 > 65535 || VAR30 + VAR3 > 65535)
        {
            FUN4(VAR6, "", VAR10);
            return -1;
        }
        snprintf(VAR10, sizeof(VAR10), "", (int)VAR30 + VAR3);
    }
    VAR15 = getaddrinfo(strlen(VAR2->VAR29) ? VAR2->VAR29 : NULL, strlen(VAR10) ? VAR10 : NULL, &VAR7, &VAR8);
    if (VAR15 != 0)
    {
        FUN4(VAR6, "", VAR2->VAR29, VAR10, FUN7(VAR15));
        return -1;
    }
    for (VAR9 = VAR8; VAR9 != NULL; VAR9 = VAR9->VAR31)
    {
        getnameinfo((struct VAR32 *)VAR9->VAR33, VAR9->VAR34, VAR11, VAR12, VAR13, 32, VAR35 | VAR36);
        VAR14 = FUN8(VAR9);
        if (VAR14 < 0)
        {
            if (!VAR9->VAR31)
            {
                FUN9(VAR6, VAR37, "");
            }
            continue;
        }
        VAR16 = FUN10(VAR9);
        VAR17 = VAR2->VAR38 ? VAR2->VAR39 + VAR3 : VAR16;
        for (VAR18 = VAR16; VAR18 <= VAR17; VAR18++)
        {
            FUN11(VAR9, VAR18);
            if (FUN12(VAR14, VAR2, VAR9) >= 0)
            {
                goto VAR40;
            }
            if (VAR18 == VAR17)
            {
                if (!VAR9->VAR31)
                {
                    FUN9(VAR6, VAR37, "");
                }
            }
        }
        FUN13(VAR14);
    }
    FUN14(VAR8);
    return -1;
VAR40:
    if (FUN15(VAR14, 1) != 0)
    {
        FUN9(VAR6, VAR37, "");
        FUN13(VAR14);
        FUN14(VAR8);
        return -1;
    }
    if (VAR4)
    {
        FUN16(VAR2->VAR29);
        VAR2->VAR29 = FUN17(VAR11);
        FUN16(VAR2->VAR10);
        VAR2->VAR10 = FUN18("", FUN10(VAR9) - VAR3);
        VAR2->VAR41 = VAR2->VAR42 = VAR9->VAR26 == VAR43;
        VAR2->VAR44 = VAR2->VAR45 = VAR9->VAR26 != VAR43;
    }
    FUN14(VAR8);
    return VAR14;
}