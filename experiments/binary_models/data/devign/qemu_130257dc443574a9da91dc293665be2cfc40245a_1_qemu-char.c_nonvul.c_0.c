VAR1 *FUN1(VAR2 *VAR3, void (*VAR4)(struct VAR1 *VAR5), VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    VAR16 *VAR17;
    const char *VAR18 = FUN2(VAR3);
    char *VAR19 = NULL;
    if (VAR18 == NULL)
    {
        FUN3(VAR7, "");
        goto VAR20;
    }
    if (FUN4(VAR3, "") == NULL)
    {
        FUN3(VAR7, ""%VAR5\"", FUN2(VAR3));
        goto VAR20;
    }
    for (VAR13 = VAR21; VAR13; VAR13 = VAR13->VAR22)
    {
        VAR10 = VAR13->VAR23;
        if (strcmp(VAR10->VAR24, FUN4(VAR3, "")) == 0)
        {
            break;
        }
    }
    if (VAR13 == NULL)
    {
        FUN3(VAR7, ""%VAR5\"", FUN4(VAR3, ""));
        goto VAR20;
    }
    VAR17 = FUN5(VAR16, 1);
    if (FUN6(VAR3, "", 0))
    {
        VAR19 = FUN7("", VAR18);
    }
    VAR11 = NULL;
    VAR17->VAR25 = VAR10->VAR26;
    if (VAR10->VAR27)
    {
        VAR10->FUN8(VAR3, VAR17, &VAR8);
        if (VAR8)
        {
            FUN9(VAR7, VAR8);
            goto VAR28;
        }
    }
    VAR15 = FUN10(VAR19 ? VAR19 : VAR18, VAR17, VAR7);
    if (!VAR15)
    {
        goto VAR28;
    }
    if (VAR19)
    {
        FUN11(VAR17);
        FUN12(VAR15);
        VAR17 = FUN5(VAR16, 1);
        VAR17->VAR29.VAR30 = FUN5(VAR31, 1);
        VAR17->VAR25 = VAR32;
        VAR17->VAR29.VAR30->VAR33 = FUN13(VAR19);
        VAR15 = FUN10(VAR18, VAR17, VAR7);
        if (!VAR15)
        {
            VAR11 = FUN14(VAR19);
            FUN15(VAR11);
            VAR11 = NULL;
            goto VAR28;
        }
    }
    VAR11 = FUN14(VAR18);
    VAR11->VAR3 = VAR3;
VAR28:
    FUN11(VAR17);
    FUN12(VAR15);
    FUN16(VAR19);
    return VAR11;
VAR20:
    FUN17(VAR3);
    return NULL;
}