int FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5 = NULL;
    char *VAR6 = NULL, *VAR7 = NULL, *VAR8 = NULL;
    enum AVHWDeviceType VAR9;
    VAR2 *VAR10, *VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14;
    const char *VAR15, *VAR16, *VAR17;
    size_t VAR18;
    VAR18 = strcspn(VAR1, "");
    VAR16 = VAR1 + VAR18;
    VAR6 = FUN2(VAR1, VAR18);
    if (!VAR6)
    {
        VAR14 = FUN3(VAR19);
        goto VAR20;
    }
    VAR9 = FUN4(VAR6);
    if (VAR9 == VAR21)
    {
        VAR15 = "";
        goto VAR22;
    }
    if (*VAR16 == '')
    {
        VAR18 = strcspn(VAR16 + 1, "");
        VAR7 = FUN2(VAR16 + 1, VAR18);
        if (!VAR7)
        {
            VAR14 = FUN3(VAR19);
            goto VAR20;
        }
        if (FUN5(VAR7))
        {
            VAR15 = "";
            goto VAR22;
        }
        VAR16 += 1 + VAR18;
    }
    else
    {
        VAR7 = FUN6(VAR9);
        if (!VAR7)
        {
            VAR14 = FUN3(VAR19);
            goto VAR20;
        }
    }
    if (!*VAR16)
    {
        VAR14 = FUN7(&VAR13, VAR9, NULL, NULL, 0);
        if (VAR14 < 0)
            goto VAR20;
    }
    else if (*VAR16 == '')
    {
        ++VAR16;
        VAR17 = strchr(VAR16, '');
        if (VAR17)
        {
            VAR8 = FUN2(VAR16, VAR17 - VAR16);
            if (!VAR8)
            {
                VAR14 = FUN3(VAR19);
                goto VAR20;
            }
            VAR14 = FUN8(&VAR5, VAR17 + 1, "", "", 0);
            if (VAR14 < 0)
            {
                VAR15 = "";
                goto VAR22;
            }
        }
        VAR14 = FUN7(&VAR13, VAR9, VAR8 ? VAR8 : VAR16, VAR5, 0);
        if (VAR14 < 0)
            goto VAR20;
    }
    else if (*VAR16 == '')
    {
        VAR11 = FUN5(VAR16 + 1);
        if (!VAR11)
        {
            VAR15 = "";
            goto VAR22;
        }
        VAR14 = FUN9(&VAR13, VAR9, VAR11->VAR13, 0);
        if (VAR14 < 0)
            goto VAR20;
    }
    else
    {
        VAR15 = "";
        goto VAR22;
    }
    VAR10 = FUN10();
    if (!VAR10)
    {
        VAR14 = FUN3(VAR19);
        goto VAR20;
    }
    VAR10->VAR7 = VAR7;
    VAR10->VAR9 = VAR9;
    VAR10->VAR13 = VAR13;
    if (VAR3)
        *VAR3 = VAR10;
    VAR7 = NULL;
    VAR14 = 0;
VAR23:
    FUN11(&VAR6);
    FUN11(&VAR7);
    FUN11(&VAR8);
    FUN12(&VAR5);
    return VAR14;
VAR22:
    FUN13(NULL, VAR24, ""%VAR25\"", VAR1, VAR15);
    VAR14 = FUN3(VAR26);
    goto VAR23;
VAR20:
    FUN13(NULL, VAR24, "", VAR14);
    FUN14(&VAR13);
    goto VAR23;
}