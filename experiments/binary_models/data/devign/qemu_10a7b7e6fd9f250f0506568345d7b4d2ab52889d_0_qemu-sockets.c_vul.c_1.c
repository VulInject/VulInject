static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, VAR5 **VAR6)
{
    struct addrinfo VAR7, *VAR8, *VAR9;
    char VAR10[33];
    char VAR11[VAR12 + 1];
    char VAR13[33];
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18 = 0;
    int VAR19 = 0;
    bool VAR20 = false;
    VAR5 *VAR21 = NULL;
    memset(&VAR7, 0, sizeof(VAR7));
    VAR7.VAR22 = VAR23;
    if (VAR2->VAR24 && VAR2->VAR25)
    {
        VAR7.VAR22 |= VAR26 | VAR27;
    }
    VAR7.VAR28 = FUN2(VAR2, &VAR21);
    VAR7.VAR29 = VAR30;
    if (VAR21)
    {
        FUN3(VAR6, VAR21);
        return -1;
    }
    if (VAR2->VAR31 == NULL)
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
        unsigned long long VAR32;
        if (strlen(VAR10) == 0)
        {
            FUN4(VAR6, "");
            return -1;
        }
        if (FUN6(VAR10, &VAR32, 10) < 0)
        {
            FUN4(VAR6, "", VAR10);
            return -1;
        }
        if (VAR32 > 65535 || VAR32 + VAR3 > 65535)
        {
            FUN4(VAR6, "", VAR10);
            return -1;
        }
        snprintf(VAR10, sizeof(VAR10), "", (int)VAR32 + VAR3);
    }
    VAR14 = getaddrinfo(strlen(VAR2->VAR31) ? VAR2->VAR31 : NULL, strlen(VAR10) ? VAR10 : NULL, &VAR7, &VAR8);
    if (VAR14 != 0)
    {
        FUN4(VAR6, "", VAR2->VAR31, VAR10, FUN7(VAR14));
        return -1;
    }
    for (VAR9 = VAR8; VAR9 != NULL; VAR9 = VAR9->VAR33)
    {
        getnameinfo((struct VAR34 *)VAR9->VAR35, VAR9->VAR36, VAR11, VAR12, VAR13, 32, VAR37 | VAR38);
        VAR18 = FUN8(VAR9);
        if (VAR18 < 0)
        {
            continue;
        }
        VAR20 = true;
        VAR15 = FUN9(VAR9);
        VAR16 = VAR2->VAR39 ? VAR2->VAR40 + VAR3 : VAR15;
        for (VAR17 = VAR15; VAR17 <= VAR16; VAR17++)
        {
            FUN10(VAR9, VAR17);
            VAR14 = FUN11(VAR18, VAR2, VAR9);
            if (VAR14)
            {
                if (VAR41 == VAR42)
                {
                    continue;
                }
                else
                {
                    FUN12(VAR6, VAR41, "");
                    goto VAR43;
                }
            }
            if (!FUN13(VAR18, 1))
            {
                goto VAR44;
            }
            if (VAR41 != VAR42)
            {
                FUN12(VAR6, VAR41, "");
                goto VAR43;
            }
            FUN14(VAR18);
            VAR18 = FUN8(VAR9);
            if (VAR18 < 0)
            {
                FUN12(VAR6, VAR41, "");
                goto VAR43;
            }
        }
    }
    FUN12(VAR6, VAR41, VAR20 ? "" : "");
VAR43:
    VAR19 = VAR41;
    if (VAR18 >= 0)
    {
        FUN14(VAR18);
    }
    FUN15(VAR8);
    VAR41 = VAR19;
    return -1;
VAR44:
    if (VAR4)
    {
        FUN16(VAR2->VAR31);
        VAR2->VAR31 = FUN17(VAR11);
        FUN16(VAR2->VAR10);
        VAR2->VAR10 = FUN18("", FUN9(VAR9) - VAR3);
        VAR2->VAR45 = VAR2->VAR46 = VAR9->VAR28 == VAR47;
        VAR2->VAR48 = VAR2->VAR49 = VAR9->VAR28 != VAR47;
    }
    FUN15(VAR8);
    return VAR18;
}