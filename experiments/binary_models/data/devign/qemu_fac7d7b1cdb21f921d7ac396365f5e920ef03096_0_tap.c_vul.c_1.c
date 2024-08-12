int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9;
    int VAR10, VAR11 = 0, VAR12 = 0, VAR13;
    const char *VAR14 = NULL;
    const char *VAR15 = NULL;
    VAR6 *VAR16 = NULL;
    const char *VAR17;
    char VAR18[128];
    assert(VAR2->VAR19 == VAR20);
    VAR9 = &VAR2->VAR21.VAR9;
    VAR13 = VAR9->VAR22 ? VAR9->VAR13 : 1;
    VAR17 = VAR9->VAR23 ? VAR9->VAR24 : NULL;
    if (VAR5 && (VAR9->VAR22 || VAR9->VAR25 || VAR9->VAR26))
    {
        FUN2(VAR7, "");
        return -1;
    }
    if (VAR9->VAR27)
    {
        if (VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR31 || VAR9->VAR32 || VAR9->VAR22 || VAR9->VAR25 || VAR9->VAR26)
        {
            FUN2(VAR7, ""
                             ""
                             "");
            return -1;
        }
        VAR10 = FUN3(VAR33, VAR9->VAR10, &VAR16);
        if (VAR10 == -1)
        {
            FUN4(VAR7, VAR16);
            return -1;
        }
        FUN5(VAR10, VAR34, VAR35);
        VAR11 = FUN6(VAR10);
        FUN7(VAR9, VAR5, "", VAR3, NULL, VAR14, VAR15, VAR17, VAR11, VAR10, &VAR16);
        if (VAR16)
        {
            FUN4(VAR7, VAR16);
            return -1;
        }
    }
    else if (VAR9->VAR25)
    {
        char **VAR36 = FUN8(char *, VAR37);
        char **VAR38 = FUN8(char *, VAR37);
        int VAR39, VAR40;
        if (VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR31 || VAR9->VAR32 || VAR9->VAR22 || VAR9->VAR23)
        {
            FUN2(VAR7, ""
                             ""
                             "");
            return -1;
        }
        VAR39 = FUN9(VAR9->VAR36, VAR36, VAR37);
        if (VAR9->VAR26)
        {
            VAR40 = FUN9(VAR9->VAR41, VAR38, VAR37);
            if (VAR39 != VAR40)
            {
                FUN2(VAR7, ""
                                 "");
                goto VAR42;
            }
        }
        for (VAR12 = 0; VAR12 < VAR39; VAR12++)
        {
            VAR10 = FUN3(VAR33, VAR36[VAR12], &VAR16);
            if (VAR10 == -1)
            {
                FUN4(VAR7, VAR16);
                goto VAR42;
            }
            FUN5(VAR10, VAR34, VAR35);
            if (VAR12 == 0)
            {
                VAR11 = FUN6(VAR10);
            }
            else if (VAR11 != FUN6(VAR10))
            {
                FUN2(VAR7, "");
                goto VAR42;
            }
            FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR14, VAR15, VAR9->VAR26 ? VAR38[VAR12] : NULL, VAR11, VAR10, &VAR16);
            if (VAR16)
            {
                FUN4(VAR7, VAR16);
                goto VAR42;
            }
        }
        FUN10(VAR36);
        FUN10(VAR38);
        return 0;
    VAR42:
        for (VAR12 = 0; VAR12 < VAR39; VAR12++)
        {
            FUN10(VAR36[VAR12]);
            FUN10(VAR38[VAR12]);
        }
        FUN10(VAR36);
        FUN10(VAR38);
        return -1;
    }
    else if (VAR9->VAR32)
    {
        if (VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR31 || VAR9->VAR22 || VAR9->VAR26)
        {
            FUN2(VAR7, ""
                             "");
            return -1;
        }
        VAR10 = FUN11(VAR9->VAR43, VAR9->VAR44 ? VAR9->VAR45 : VAR46, VAR7);
        if (VAR10 == -1)
        {
            return -1;
        }
        FUN5(VAR10, VAR34, VAR35);
        VAR11 = FUN6(VAR10);
        FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR14, VAR15, VAR17, VAR11, VAR10, &VAR16);
        if (VAR16)
        {
            FUN4(VAR7, VAR16);
            close(VAR10);
            return -1;
        }
    }
    else
    {
        if (VAR9->VAR26)
        {
            FUN2(VAR7, "");
            return -1;
        }
        VAR14 = VAR9->VAR29 ? VAR9->VAR14 : VAR47;
        VAR15 = VAR9->VAR30 ? VAR9->VAR15 : VAR48;
        if (VAR9->VAR28)
        {
            FUN12(VAR18, sizeof VAR18, VAR9->VAR18);
        }
        else
        {
            VAR18[0] = '';
        }
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            VAR10 = FUN13(VAR9, &VAR11, VAR12 >= 1 ? "" : VAR14, VAR18, sizeof VAR18, VAR13 > 1, VAR7);
            if (VAR10 == -1)
            {
                return -1;
            }
            if (VAR13 > 1 && VAR12 == 0 && !VAR9->VAR28)
            {
                if (FUN14(VAR10, VAR18))
                {
                    FUN2(VAR7, "");
                    close(VAR10);
                    return -1;
                }
            }
            FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR12 >= 1 ? "" : VAR14, VAR12 >= 1 ? "" : VAR15, VAR17, VAR11, VAR10, &VAR16);
            if (VAR16)
            {
                FUN4(VAR7, VAR16);
                close(VAR10);
                return -1;
            }
        }
    }
    return 0;
}