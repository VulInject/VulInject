VAR1 *FUN1(VAR2 *VAR3, struct VAR4 *VAR5, struct VAR6 *VAR7, void *VAR8)
{
    VAR1 *VAR9;
    struct VAR10 *VAR11;
    if (!VAR3)
    {
        VAR3 = &VAR12;
    }
    if (FUN2(VAR5))
    {
        FUN3("");
        FUN4(VAR5);
        goto VAR13;
    }
    VAR11 = FUN5(VAR14, 1, sizeof(*VAR11));
    if (!VAR11)
    {
        FUN3("", sizeof(*VAR11));
        goto VAR13;
    }
    VAR11->VAR7 = *VAR7;
    VAR11->VAR15 = VAR8;
    VAR9 = FUN6(VAR3, VAR5);
    if (VAR9)
    {
        FUN7(&VAR9->VAR16, VAR11, VAR17);
        return VAR9;
    }
    else
    {
        VAR18 *VAR19;
        VAR1 *VAR9;
        VAR9 = FUN5(VAR14, 1, sizeof(*VAR9));
        if (!VAR9)
        {
            FUN3("", sizeof(*VAR9));
            goto VAR20;
        }
        VAR19 = &VAR9->VAR19;
        FUN8(&VAR19->VAR21);
        FUN8(&VAR9->VAR16);
        VAR19->VAR22 = 4096 * 4;
        VAR19->VAR23 = FUN5(VAR14, VAR19->VAR22, sizeof(struct VAR24));
        if (!VAR19->VAR23)
        {
            FUN3("", VAR19->VAR22);
            goto VAR25;
        }
        FUN9(&VAR19->VAR26, VAR5);
        VAR9->VAR27 = FUN5(VAR14, VAR19->VAR22, 1 << VAR19->VAR26.VAR28);
        if (!VAR9->VAR27)
        {
            FUN3(""
                  "",
                  VAR19->VAR22, 1 << VAR19->VAR26.VAR28);
            goto VAR29;
        }
        VAR19->VAR30 = VAR31[VAR19->VAR26.VAR32 == 2][VAR19->VAR26.VAR33][VAR19->VAR26.VAR34][FUN10(VAR19->VAR26.VAR35)];
        FUN7(&VAR3->VAR36, VAR9, VAR17);
        FUN7(&VAR9->VAR16, VAR11, VAR17);
        VAR19 = NULL;
        while ((VAR19 = FUN11(VAR3, VAR19)))
        {
            FUN12(VAR3, VAR19);
        }
        return VAR9;
    VAR29:
        FUN13(VAR9->VAR19.VAR23);
    VAR25:
        FUN13(VAR9);
    VAR20:
        FUN13(VAR11);
    VAR13:
        return NULL;
    }
}