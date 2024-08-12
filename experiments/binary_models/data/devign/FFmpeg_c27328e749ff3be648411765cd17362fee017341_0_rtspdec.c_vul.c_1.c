static inline int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, char *VAR5, int VAR6, char *VAR7, int VAR8, enum VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    const char *VAR14, *VAR15;
    VAR14 = strchr(VAR3, '');
    if (VAR14 - VAR3 > VAR8 - 1)
    {
        FUN2(VAR2, VAR16, "");
        return FUN3(VAR17);
    }
    memcpy(VAR7, VAR3, VAR14 - VAR3);
    VAR7[VAR14 - VAR3] = '';
    VAR14++;
    if (!strcmp(VAR7, ""))
        *VAR10 = VAR18;
    else if (!strcmp(VAR7, ""))
        *VAR10 = VAR19;
    else if (!strcmp(VAR7, ""))
        *VAR10 = VAR20;
    else if (!strcmp(VAR7, ""))
        *VAR10 = VAR21;
    else if (!strcmp(VAR7, ""))
        *VAR10 = VAR22;
    else if (!strcmp(VAR7, ""))
        *VAR10 = VAR23;
    else
        *VAR10 = VAR24;
    if (VAR12->VAR25 == VAR26)
    {
        if ((*VAR10 != VAR18) && (*VAR10 != VAR19))
        {
            FUN2(VAR2, VAR16, "", VAR3);
            return VAR27;
        }
    }
    else if (VAR12->VAR25 == VAR28)
    {
        if ((*VAR10 != VAR19) && (*VAR10 != VAR20) && (*VAR10 != VAR21))
        {
            FUN2(VAR2, VAR16, "", VAR3);
            return VAR27;
        }
    }
    else if (VAR12->VAR25 == VAR29)
    {
        if ((*VAR10 != VAR22) && (*VAR10 != VAR19) && (*VAR10 != VAR23))
        {
            FUN2(VAR2, VAR16, ""
                                    "",
                   VAR3);
            return VAR27;
        }
    }
    else
    {
        FUN2(VAR2, VAR16, "", VAR12->VAR25);
        return VAR30;
    }
    VAR15 = strchr(VAR14, '');
    if (!VAR15)
    {
        FUN2(VAR2, VAR16, "");
    }
    if (VAR15 - VAR14 > VAR6 - 1)
    {
        FUN2(VAR2, VAR16, "");
        return FUN3(VAR17);
    }
    memcpy(VAR5, VAR14, VAR15 - VAR14);
    VAR5[VAR15 - VAR14] = '';
    if (strcmp(VAR12->VAR31, VAR5))
    {
        char VAR32[128], VAR33[512], VAR34[128];
        int VAR35;
        char VAR36[128], VAR37[512], VAR38[128];
        int VAR39;
        FUN4(NULL, 0, VAR34, sizeof(VAR34), VAR32, sizeof(VAR32), &VAR35, VAR33, sizeof(VAR33), VAR5);
        FUN4(NULL, 0, VAR38, sizeof(VAR38), VAR36, sizeof(VAR36), &VAR39, VAR37, sizeof(VAR37), VAR12->VAR31);
        if (strcmp(VAR32, VAR36))
            FUN2(VAR2, VAR40, "", VAR32, VAR36);
        if (strcmp(VAR33, VAR37) && *VAR10 != VAR21)
            FUN2(VAR2, VAR41, ""
                                      "",
                   VAR33, VAR37);
        if (*VAR10 == VAR18)
        {
            FUN2(VAR2, VAR40, "", VAR5);
            FUN5(VAR12->VAR31, VAR5, sizeof(VAR12->VAR31));
        }
    }
    VAR14 = VAR15 + 1;
    if (!FUN6(VAR14, "", NULL))
    {
        FUN2(VAR2, VAR16, "");
        return VAR27;
    }
    return 0;