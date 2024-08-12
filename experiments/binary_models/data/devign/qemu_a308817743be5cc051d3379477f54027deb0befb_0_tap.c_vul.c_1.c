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
    VAR9 = VAR2->VAR9;
    VAR13 = VAR9->VAR21 ? VAR9->VAR13 : 1;
    VAR17 = VAR9->VAR22 ? VAR9->VAR23 : NULL;
    if (VAR5 && (VAR9->VAR21 || VAR9->VAR24 || VAR9->VAR25))
    {
        FUN2("");
        return -1;
    }
    if (VAR9->VAR26)
    {
        if (VAR9->VAR27 || VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR31 || VAR9->VAR21 || VAR9->VAR24 || VAR9->VAR25)
        {
            FUN2(""
                         ""
                         "");
            return -1;
        }
        VAR10 = FUN3(VAR32, VAR9->VAR10, &VAR16);
        if (VAR10 == -1)
        {
            FUN4(VAR16);
            return -1;
        }
        FUN5(VAR10, VAR33, VAR34);
        VAR11 = FUN6(VAR10);
        FUN7(VAR9, VAR5, "", VAR3, NULL, VAR14, VAR15, VAR17, VAR11, VAR10, &VAR16);
        if (VAR16)
        {
            FUN4(VAR16);
            return -1;
        }
    }
    else if (VAR9->VAR24)
    {
        char *VAR35[VAR36];
        char *VAR37[VAR36];
        int VAR38, VAR39;
        if (VAR9->VAR27 || VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR31 || VAR9->VAR21 || VAR9->VAR22)
        {
            FUN2(""
                         ""
                         "");
            return -1;
        }
        VAR38 = FUN8(VAR9->VAR35, VAR35, VAR36);
        if (VAR9->VAR25)
        {
            VAR39 = FUN8(VAR9->VAR40, VAR37, VAR36);
            if (VAR38 != VAR39)
            {
                FUN2(""
                             "");
                return -1;
            }
        }
        for (VAR12 = 0; VAR12 < VAR38; VAR12++)
        {
            VAR10 = FUN3(VAR32, VAR35[VAR12], &VAR16);
            if (VAR10 == -1)
            {
                FUN4(VAR16);
                return -1;
            }
            FUN5(VAR10, VAR33, VAR34);
            if (VAR12 == 0)
            {
                VAR11 = FUN6(VAR10);
            }
            else if (VAR11 != FUN6(VAR10))
            {
                FUN2("");
                return -1;
            }
            FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR14, VAR15, VAR9->VAR25 ? VAR37[VAR12] : NULL, VAR11, VAR10, &VAR16);
            if (VAR16)
            {
                FUN4(VAR16);
                return -1;
            }
        }
    }
    else if (VAR9->VAR31)
    {
        if (VAR9->VAR27 || VAR9->VAR28 || VAR9->VAR29 || VAR9->VAR30 || VAR9->VAR21 || VAR9->VAR25)
        {
            FUN2(""
                         "");
            return -1;
        }
        VAR10 = FUN9(VAR9->VAR41, VAR42, VAR7);
        if (VAR10 == -1)
        {
            return -1;
        }
        FUN5(VAR10, VAR33, VAR34);
        VAR11 = FUN6(VAR10);
        FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR14, VAR15, VAR17, VAR11, VAR10, &VAR16);
        if (VAR16)
        {
            FUN4(VAR16);
            close(VAR10);
            return -1;
        }
    }
    else
    {
        if (VAR9->VAR25)
        {
            FUN2("");
            return -1;
        }
        VAR14 = VAR9->VAR28 ? VAR9->VAR14 : VAR43;
        VAR15 = VAR9->VAR29 ? VAR9->VAR15 : VAR44;
        if (VAR9->VAR27)
        {
            FUN10(VAR18, sizeof VAR18, VAR9->VAR18);
        }
        else
        {
            VAR18[0] = '';
        }
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            VAR10 = FUN11(VAR9, &VAR11, VAR12 >= 1 ? "" : VAR14, VAR18, sizeof VAR18, VAR13 > 1, &VAR16);
            if (VAR10 == -1)
            {
                FUN4(VAR16);
                return -1;
            }
            if (VAR13 > 1 && VAR12 == 0 && !VAR9->VAR27)
            {
                if (FUN12(VAR10, VAR18))
                {
                    FUN2("");
                    close(VAR10);
                    return -1;
                }
            }
            FUN7(VAR9, VAR5, "", VAR3, VAR18, VAR12 >= 1 ? "" : VAR14, VAR12 >= 1 ? "" : VAR15, VAR17, VAR11, VAR10, &VAR16);
            if (VAR16)
            {
                FUN4(VAR16);
                close(VAR10);
                return -1;
            }
        }
    }
    return 0;
}