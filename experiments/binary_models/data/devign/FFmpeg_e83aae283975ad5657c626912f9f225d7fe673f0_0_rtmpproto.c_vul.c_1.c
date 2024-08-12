static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char VAR7[300], *VAR8, VAR9[15];
    int VAR10 = 0, VAR11 = 0;
    const char *VAR12 = "", *VAR13 = "", *VAR14 = NULL, *VAR15 = NULL, *VAR16 = NULL, *VAR17 = NULL;
    if (!(VAR16 = strstr(VAR3, "")) && !(VAR16 = strstr(VAR3, "")))
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    VAR16 += strlen("");
    while (*VAR16 && *VAR16 != '' && VAR10 < sizeof(VAR9) - 1)
        VAR9[VAR10++] = *VAR16++;
    VAR9[VAR10] = '';
    if (!VAR5->VAR20[0] || !VAR5->VAR21[0])
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    if (strstr(VAR3, ""))
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    else if (strstr(VAR3, ""))
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    if (VAR5->VAR22)
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    VAR5->VAR23[0] = '';
    if (strstr(VAR3, ""))
    {
        snprintf(VAR5->VAR23, sizeof(VAR5->VAR23), "", VAR9, VAR5->VAR20);
        return 0;
    }
    if (!(VAR16 = strstr(VAR3, "")))
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    FUN3(VAR7, VAR16 + 1, sizeof(VAR7));
    VAR8 = VAR7;
    while (VAR8)
    {
        char *VAR24 = strchr(VAR8, '');
        char *VAR25 = strchr(VAR8, '');
        if (VAR24)
            *VAR24++ = '';
        if (VAR25)
            *VAR25++ = '';
        if (!strcmp(VAR8, ""))
        {
            VAR12 = VAR25;
        }
        else if (!strcmp(VAR8, ""))
        {
            VAR13 = VAR25;
        }
        else if (!strcmp(VAR8, ""))
        {
            VAR14 = VAR25;
        }
        else if (!strcmp(VAR8, ""))
        {
            VAR15 = VAR25;
        }
        else if (!strcmp(VAR8, ""))
        {
            VAR17 = VAR25;
        }
        VAR8 = VAR24;
    }
    if (!strcmp(VAR9, ""))
    {
        if ((VAR11 = FUN4(VAR5, VAR12, VAR13, VAR14, VAR15)) < 0)
            return VAR11;
    }
    else
    {
        if ((VAR11 = FUN5(VAR5, VAR12, VAR17)) < 0)
            return VAR11;
    }
    VAR5->VAR22 = 1;
    return 0;
}