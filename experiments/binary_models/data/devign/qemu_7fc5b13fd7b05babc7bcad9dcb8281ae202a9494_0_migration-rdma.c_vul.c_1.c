static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    struct VAR6 *VAR7;
    char VAR8[16];
    struct VAR9 *VAR10;
    char VAR11[40] = "";
    struct VAR6 *VAR12;
    if (VAR2->VAR13 == NULL || !strcmp(VAR2->VAR13, ""))
    {
        FUN2(VAR4, "");
        return -1;
    }
    VAR2->VAR14 = FUN3();
    if (!VAR2->VAR14)
    {
        FUN2(VAR4, "");
        return -1;
    }
    VAR5 = FUN4(VAR2->VAR14, &VAR2->VAR15, NULL, VAR16);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR17;
    }
    snprintf(VAR8, 16, "", VAR2->VAR18);
    VAR8[15] = '';
    VAR5 = getaddrinfo(VAR2->VAR13, VAR8, NULL, &VAR7);
    if (VAR5 < 0)
    {
        FUN2(VAR4, "", VAR2->VAR13);
        goto VAR19;
    }
    for (VAR12 = VAR7; VAR12 != NULL; VAR12 = VAR12->VAR20)
    {
        FUN5(VAR12->VAR21, &((struct VAR22 *)VAR12->VAR23)->VAR24, VAR11, sizeof VAR11);
        FUN6("", VAR2->VAR13, VAR11);
        VAR5 = FUN7(VAR2->VAR15, NULL, VAR12->VAR23, VAR25);
        if (!VAR5)
        {
            goto VAR26;
        }
    }
    FUN2(VAR4, "", VAR2->VAR13);
    goto VAR19;
VAR26:
    FUN8("", VAR2->VAR15);
    VAR5 = FUN9(VAR2->VAR14, &VAR10);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR19;
    }
    if (VAR10->VAR27 != VAR28)
    {
        FUN2(VAR4, "", FUN10(VAR10->VAR27));
        FUN11("");
        goto VAR19;
    }
    FUN12(VAR10);
    VAR5 = FUN13(VAR2->VAR15, VAR25);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR19;
    }
    VAR5 = FUN9(VAR2->VAR14, &VAR10);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR19;
    }
    if (VAR10->VAR27 != VAR29)
    {
        FUN2(VAR4, "", FUN10(VAR10->VAR27));
        FUN12(VAR10);
        goto VAR19;
    }
    FUN12(VAR10);
    VAR2->VAR30 = VAR2->VAR15->VAR30;
    FUN14("", VAR2->VAR15->VAR30);
    FUN8("", VAR2->VAR15);
    return 0;
VAR19:
    FUN15(VAR2->VAR15);
    VAR2->VAR15 = NULL;
VAR17:
    FUN16(VAR2->VAR14);
    VAR2->VAR14 = NULL;
    return -1;
}