VAR1 *FUN1(VAR2 *VAR3, void (*VAR4)(struct VAR1 *VAR5), VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12;
    if (FUN2(VAR3) == NULL)
    {
        FUN3(VAR7, "");
        goto VAR13;
    }
    if (FUN4(VAR3, "") == NULL)
    {
        FUN3(VAR7, ""%VAR5\"", FUN2(VAR3));
        goto VAR13;
    }
    for (VAR12 = VAR14; VAR12; VAR12 = VAR12->VAR15)
    {
        VAR9 = VAR12->VAR16;
        if (strcmp(VAR9->VAR17, FUN4(VAR3, "")) == 0)
        {
            break;
        }
    }
    if (VAR12 == NULL)
    {
        FUN3(VAR7, ""%VAR5\"", FUN4(VAR3, ""));
        goto VAR13;
    }
    if (!VAR9->open)
    {
        VAR18 *VAR19 = FUN5(VAR18, 1);
        VAR20 *VAR21 = NULL;
        const char *VAR22 = FUN2(VAR3);
        const char *VAR23 = NULL;
        if (FUN6(VAR3, "", 0))
        {
            VAR23 = FUN7("", VAR22);
        }
        VAR10 = NULL;
        VAR19->VAR24 = VAR9->VAR24;
        if (VAR9->VAR25)
        {
            VAR9->FUN8(VAR3, VAR19, VAR7);
            if (FUN9(VAR7))
            {
                goto VAR26;
            }
        }
        VAR21 = FUN10(VAR23 ? VAR23 : VAR22, VAR19, VAR7);
        if (FUN9(VAR7))
        {
            goto VAR26;
        }
        if (VAR23)
        {
            FUN11(VAR19);
            FUN12(VAR21);
            VAR19 = FUN5(VAR18, 1);
            VAR19->VAR27 = FUN5(VAR28, 1);
            VAR19->VAR24 = VAR29;
            VAR19->VAR27->VAR30 = FUN13(VAR23);
            VAR21 = FUN10(VAR22, VAR19, VAR7);
            if (FUN9(VAR7))
            {
                goto VAR26;
            }
        }
        VAR10 = FUN14(VAR22);
    VAR26:
        FUN11(VAR19);
        FUN12(VAR21);
        return VAR10;
    }
    VAR10 = VAR9->open(VAR3);
    if (!VAR10)
    {
        FUN3(VAR7, ""%VAR5\"", FUN4(VAR3, ""));
        goto VAR13;
    }
    if (!VAR10->VAR31)
        VAR10->VAR31 = FUN13(FUN4(VAR3, ""));
    VAR10->VAR4 = VAR4;
    if (!VAR10->VAR32)
    {
        FUN15(VAR10, VAR33);
    }
    FUN16(&VAR34, VAR10, VAR15);
    if (FUN6(VAR3, "", 0))
    {
        VAR1 *VAR35 = VAR10;
        int VAR36 = strlen(FUN2(VAR3)) + 6;
        VAR35->VAR37 = FUN17(VAR36);
        snprintf(VAR35->VAR37, VAR36, "", FUN2(VAR3));
        VAR10 = FUN18(VAR35);
        VAR10->VAR31 = VAR35->VAR31;
        VAR10->VAR38 = VAR39;
        FUN16(&VAR34, VAR10, VAR15);
    }
    else
    {
        VAR10->VAR38 = 1;
    }
    VAR10->VAR37 = FUN13(FUN2(VAR3));
    VAR10->VAR3 = VAR3;
    return VAR10;
VAR13:
    FUN19(VAR3);
    return NULL;
}