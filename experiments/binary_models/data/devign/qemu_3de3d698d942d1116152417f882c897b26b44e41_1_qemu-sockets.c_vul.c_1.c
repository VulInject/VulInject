int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    struct addrinfo VAR6, *VAR7, *VAR8;
    const char *VAR9;
    char VAR10[33];
    char VAR11[VAR12 + 1];
    char VAR13[33];
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR20 = VAR21 | VAR22;
    VAR6.VAR23 = VAR24;
    VAR6.VAR25 = VAR26;
    if ((FUN2(VAR2, "") == NULL) || (FUN2(VAR2, "") == NULL))
    {
        FUN3(VAR5, "");
        return -1;
    }
    FUN4(VAR10, sizeof(VAR10), FUN2(VAR2, ""));
    VAR9 = FUN2(VAR2, "");
    VAR16 = FUN5(VAR2, "", 0);
    if (FUN6(VAR2, "", 0))
        VAR6.VAR23 = VAR27;
    if (FUN6(VAR2, "", 0))
        VAR6.VAR23 = VAR28;
    if (VAR3)
    {
        unsigned long long VAR29;
        if (FUN7(VAR10, &VAR29, 10) < 0)
        {
            FUN3(VAR5, "", VAR10);
            return -1;
        }
        if (VAR29 > 65535 || VAR29 + VAR3 > 65535)
        {
            FUN3(VAR5, "", VAR10);
            return -1;
        }
        snprintf(VAR10, sizeof(VAR10), "", (int)VAR29 + VAR3);
    }
    VAR15 = getaddrinfo(strlen(VAR9) ? VAR9 : NULL, VAR10, &VAR6, &VAR7);
    if (VAR15 != 0)
    {
        FUN3(VAR5, "", VAR9, VAR10, FUN8(VAR15));
        return -1;
    }
    for (VAR8 = VAR7; VAR8 != NULL; VAR8 = VAR8->VAR30)
    {
        getnameinfo((struct VAR31 *)VAR8->VAR32, VAR8->VAR33, VAR11, VAR12, VAR13, 32, VAR34 | VAR35);
        VAR14 = FUN9(VAR8->VAR23, VAR8->VAR25, VAR8->VAR36);
        if (VAR14 < 0)
        {
            if (!VAR8->VAR30)
            {
                FUN10(VAR5, VAR37, "");
            }
            continue;
        }
        FUN11(VAR14);
        if (VAR8->VAR23 == VAR28)
        {
            const int VAR38 = 0;
            FUN12(VAR14, VAR39, VAR40, &VAR38, sizeof(VAR38));
        }
        VAR17 = FUN13(VAR8);
        VAR18 = VAR16 ? VAR16 + VAR3 : VAR17;
        for (VAR19 = VAR17; VAR19 <= VAR18; VAR19++)
        {
            FUN14(VAR8, VAR19);
            if (FUN15(VAR14, VAR8->VAR32, VAR8->VAR33) == 0)
            {
                goto VAR41;
            }
            if (VAR19 == VAR18)
            {
                if (!VAR8->VAR30)
                {
                    FUN10(VAR5, VAR37, "");
                }
            }
        }
        FUN16(VAR14);
    }
    FUN17(VAR7);
    return -1;
VAR41:
    if (FUN18(VAR14, 1) != 0)
    {
        FUN10(VAR5, VAR37, "");
        FUN16(VAR14);
        FUN17(VAR7);
        return -1;
    }
    FUN19(VAR2, "", VAR11, &VAR42);
    FUN20(VAR2, "", FUN13(VAR8) - VAR3, &VAR42);
    FUN21(VAR2, "", VAR8->VAR23 == VAR28, &VAR42);
    FUN21(VAR2, "", VAR8->VAR23 != VAR28, &VAR42);
    FUN17(VAR7);
    return VAR14;
}