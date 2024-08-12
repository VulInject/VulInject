static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = -VAR6, VAR7;
    struct VAR8 *VAR9;
    char VAR10[40] = "";
    struct VAR11 *VAR12;
    char VAR13[16];
    for (VAR7 = 0; VAR7 < VAR14; VAR7++)
    {
        VAR2->VAR15[VAR7].VAR16 = 0;
        VAR2->VAR15[VAR7].VAR17 = NULL;
    }
    if (VAR2->VAR18 == NULL)
    {
        FUN2(VAR4, "");
        VAR2->VAR19 = -VAR6;
        return -1;
    }
    VAR2->VAR20 = FUN3();
    if (!VAR2->VAR20)
    {
        FUN2(VAR4, "");
        VAR2->VAR19 = -VAR6;
        return -1;
    }
    VAR5 = FUN4(VAR2->VAR20, &VAR9, NULL, VAR21);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR22;
    }
    snprintf(VAR13, 16, "", VAR2->VAR23);
    VAR13[15] = '';
    if (VAR2->VAR18 && strcmp("", VAR2->VAR18))
    {
        struct VAR11 *VAR24;
        VAR5 = getaddrinfo(VAR2->VAR18, VAR13, NULL, &VAR12);
        if (VAR5 < 0)
        {
            FUN2(VAR4, "", VAR2->VAR18);
            goto VAR25;
        }
        for (VAR24 = VAR12; VAR24 != NULL; VAR24 = VAR24->VAR26)
        {
            FUN5(VAR24->VAR27, &((struct VAR28 *)VAR24->VAR29)->VAR30, VAR10, sizeof VAR10);
            FUN6("", VAR2->VAR18, VAR10);
            VAR5 = FUN7(VAR9, VAR24->VAR29);
            if (!VAR5)
            {
                goto VAR31;
            }
        }
        FUN2(VAR4, "");
        goto VAR25;
    }
    else
    {
        FUN2(VAR4, "");
        VAR5 = -VAR6;
        goto VAR25;
    }
VAR31:
    VAR2->VAR9 = VAR9;
    FUN8("", VAR9);
    return 0;
VAR25:
    FUN9(VAR9);
VAR22:
    FUN10(VAR2->VAR20);
    VAR2->VAR20 = NULL;
    VAR2->VAR19 = VAR5;
    return VAR5;
}