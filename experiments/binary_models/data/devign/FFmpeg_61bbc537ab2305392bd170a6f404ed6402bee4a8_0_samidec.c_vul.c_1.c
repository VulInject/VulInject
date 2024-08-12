static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7 = 0;
    char *VAR8 = NULL;
    char *VAR9 = FUN2(VAR3);
    char *VAR10 = VAR9;
    VAR11 *VAR12 = &VAR5->VAR13;
    VAR11 *VAR14 = &VAR5->VAR15;
    FUN3(&VAR5->VAR13);
    FUN3(&VAR5->VAR16);
    FUN3(&VAR5->VAR15);
    for (;;)
    {
        char *VAR17 = NULL;
        int VAR18 = 0;
        VAR11 *VAR19 = &VAR5->VAR16;
        VAR10 = FUN4(VAR10, "");
        if (!VAR10)
            break;
        if (VAR10[2] != '' && !FUN5(VAR10[2]))
        {
            VAR10++;
            continue;
        }
        if (VAR19->VAR20)
            FUN6(VAR19, "");
        VAR8 = FUN7(VAR10, "", &VAR17);
        if (!VAR8 || !VAR17)
            break;
        VAR10 = VAR17;
        if (FUN4(VAR8, "") || FUN4(VAR8, ""VAR21\""))
        {
            VAR19 = &VAR5->VAR22;
            FUN3(VAR19);
        }
        while (FUN5(*VAR10))
            VAR10++;
        if (!FUN8(VAR10, "", 6))
        {
            VAR7 = -1;
            goto VAR23;
        }
        while (*VAR10)
        {
            if (*VAR10 == '')
            {
                if (!FUN9(VAR10, "", 2) && (VAR10[2] == '' || FUN5(VAR10[2])))
                    break;
            }
            if (!FUN9(VAR10, "", 3))
            {
                FUN6(VAR19, "");
                VAR10++;
                while (*VAR10 && *VAR10 != '')
                    VAR10++;
                if (!*VAR10)
                    break;
                if (*VAR10 == '')
                    VAR10++;
                continue;
            }
            if (!FUN5(*VAR10))
                FUN10(VAR19, *VAR10, 1);
            else if (!VAR18)
                FUN10(VAR19, '', 1);
            VAR18 = FUN5(*VAR10);
            VAR10++;
        }
    }
    FUN3(&VAR5->VAR24);
    if (VAR5->VAR22.VAR20)
    {
        VAR7 = FUN11(VAR2, VAR14, VAR5->VAR22.VAR25);
        if (VAR7 < 0)
            goto VAR23;
        FUN6(&VAR5->VAR24, "", VAR5->VAR15.VAR25);
    }
    VAR7 = FUN11(VAR2, VAR12, VAR5->VAR16.VAR25);
    if (VAR7 < 0)
        goto VAR23;
    FUN6(&VAR5->VAR24, "", VAR5->VAR13.VAR25);
VAR23:
    FUN12(VAR9);
    return VAR7;