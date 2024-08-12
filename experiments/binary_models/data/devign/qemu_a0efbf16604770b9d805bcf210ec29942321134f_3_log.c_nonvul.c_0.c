void FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 **VAR5 = FUN2(VAR1, "", 0);
    int VAR6;
    if (VAR7)
    {
        FUN3(VAR7);
        VAR7 = NULL;
    }
    VAR7 = FUN4(VAR8, VAR8, sizeof(VAR9), FUN5(VAR5));
    for (VAR6 = 0; VAR5[VAR6]; VAR6++)
    {
        const char *VAR10 = VAR5[VAR6];
        const char *VAR11, *VAR12, *VAR13;
        uint64_t VAR14, VAR15, VAR16, VAR17;
        struct Range VAR18;
        VAR11 = strstr(VAR10, "");
        VAR12 = VAR11 ? VAR11 + 1 : NULL;
        if (!VAR11)
        {
            VAR11 = strstr(VAR10, "");
            VAR12 = VAR11 ? VAR11 + 1 : NULL;
        }
        if (!VAR11)
        {
            VAR11 = strstr(VAR10, "");
            VAR12 = VAR11 ? VAR11 + 2 : NULL;
        }
        if (!VAR11)
        {
            FUN6(VAR3, "");
            goto VAR19;
        }
        if (FUN7(VAR10, &VAR13, 0, &VAR14) || VAR13 != VAR11)
        {
            FUN6(VAR3, "", (int)(VAR12 - VAR11), VAR11);
            goto VAR19;
        }
        if (FUN7(VAR12, NULL, 0, &VAR15))
        {
            FUN6(VAR3, "", (int)(VAR12 - VAR11), VAR11);
            goto VAR19;
        }
        switch (*VAR11)
        {
        case '':
            VAR16 = VAR14;
            VAR17 = VAR14 + VAR15 - 1;
            break;
        case '':
            VAR17 = VAR14;
            VAR16 = VAR14 - (VAR15 - 1);
            break;
        case '':
            VAR16 = VAR14;
            VAR17 = VAR15;
            break;
        default:
            FUN8();
        }
        if (VAR16 > VAR17 || (VAR16 == 0 && VAR17 == VAR20))
        {
            FUN6(VAR3, "");
            goto VAR19;
        }
        FUN9(&VAR18, VAR16, VAR17);
        FUN10(VAR7, VAR18);
    }
VAR19:
    FUN11(VAR5);
}