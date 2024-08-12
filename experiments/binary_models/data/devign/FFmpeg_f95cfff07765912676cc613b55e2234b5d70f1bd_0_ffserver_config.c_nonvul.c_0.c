static int FUN1(const char *VAR1, const char *VAR2, int VAR3, VAR4 *VAR5)
{
    static int VAR6 = 0;
    int VAR7 = 0;
    VAR8 *VAR9;
    const VAR10 *VAR11 = NULL;
    const char *VAR12 = NULL;
    const char *VAR13 = NULL;
    char VAR14[1024];
    VAR15 *VAR16;
    VAR17 **VAR18;
    enum AVCodecID VAR19;
    switch (VAR3)
    {
    case VAR20:
        VAR16 = VAR5->VAR21;
        VAR18 = &VAR5->VAR22;
        VAR19 = VAR5->VAR23 != VAR24 ? VAR5->VAR23 : VAR25;
        break;
    case VAR26:
        VAR16 = VAR5->VAR27;
        VAR18 = &VAR5->VAR28;
        VAR19 = VAR5->VAR29 != VAR24 ? VAR5->VAR29 : VAR30;
        break;
    default:
        FUN2(0);
    }
    if (strchr(VAR1, ''))
    {
        snprintf(VAR14, sizeof(VAR14), "", VAR1);
        VAR13 = VAR14;
        if (!(VAR12 = strchr(VAR14, '')))
        {
            FUN3(VAR5->VAR31, VAR5->VAR32, VAR33, &VAR5->VAR34, "");
            return -1;
        }
        VAR14[VAR12 - VAR14] = '';
        VAR12++;
        if ((VAR7 = FUN4(VAR16, VAR13, VAR5)) < 0)
            return VAR7;
        if (!VAR16->VAR35 || !VAR16->VAR36)
            return -1;
    }
    else
    {
        VAR12 = VAR1;
    }
    VAR11 = FUN5(VAR16, VAR12, NULL, VAR3 | VAR37, VAR38);
    if (!VAR11 && (!strcmp(VAR12, "") || !strcmp(VAR12, "") || !strcmp(VAR12, "") || !strcmp(VAR12, "")))
        VAR11 = FUN5(VAR16, VAR12, NULL, 0, 0);
    if (!VAR11)
    {
        FUN3(VAR5->VAR31, VAR5->VAR32, VAR33, &VAR5->VAR34, "", VAR1);
        if (!VAR6 && VAR16->VAR39 == VAR24)
        {
            VAR6 = 1;
            FUN3(VAR5->VAR31, VAR5->VAR32, VAR33, NULL, ""
                                                                                        "",
                                VAR1, FUN6(VAR19), VAR1, VAR2);
        }
    }
    else if ((VAR7 = FUN7(VAR16, VAR12, VAR2, VAR38)) < 0)
    {
        FUN3(VAR5->VAR31, VAR5->VAR32, VAR33, &VAR5->VAR34, "", VAR1, VAR2, FUN8(VAR7));
    }
    else if ((VAR9 = FUN9(*VAR18, VAR12, NULL, 0)))
    {
        if ((VAR11->VAR3 == VAR40) && VAR2 && (VAR2[0] == '' || VAR2[0] == ''))
            return FUN10(VAR18, VAR12, VAR2, VAR41);
        FUN3(VAR5->VAR31, VAR5->VAR32, VAR33, &VAR5->VAR34, "", VAR1, VAR9->VAR42);
    }
    else if (FUN10(VAR18, VAR12, VAR2, 0) < 0)
    {
        return FUN11(VAR43);
    }
    return 0;
}