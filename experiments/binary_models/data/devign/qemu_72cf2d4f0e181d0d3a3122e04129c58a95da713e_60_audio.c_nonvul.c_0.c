VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = &VAR9;
    VAR1 *VAR10;
    struct VAR11 *VAR12;
    if (FUN2(VAR3))
    {
        FUN3("");
        FUN4(VAR3);
        goto VAR13;
    }
    VAR12 = FUN5(VAR14, 1, sizeof(*VAR12));
    if (!VAR12)
    {
        FUN3("", sizeof(*VAR12));
        goto VAR13;
    }
    VAR12->VAR5 = *VAR5;
    VAR12->VAR15 = VAR6;
    VAR10 = FUN6(VAR3);
    if (VAR10)
    {
        FUN7(&VAR10->VAR16, VAR12, VAR17);
        return VAR10;
    }
    else
    {
        VAR18 *VAR19;
        VAR1 *VAR10;
        VAR10 = FUN5(VAR14, 1, sizeof(*VAR10));
        if (!VAR10)
        {
            FUN3("", sizeof(*VAR10));
            goto VAR20;
        }
        VAR19 = &VAR10->VAR19;
        FUN8(&VAR19->VAR21);
        FUN8(&VAR10->VAR16);
        VAR19->VAR22 = 4096 * 4;
        VAR19->VAR23 = FUN5(VAR14, VAR19->VAR22, sizeof(struct VAR24));
        if (!VAR19->VAR23)
        {
            FUN3("", VAR19->VAR22);
            goto VAR25;
        }
        FUN9(&VAR19->VAR26, VAR3);
        VAR10->VAR27 = FUN5(VAR14, VAR19->VAR22, 1 << VAR19->VAR26.VAR28);
        if (!VAR10->VAR27)
        {
            FUN3(""
                  "",
                  VAR19->VAR22, 1 << VAR19->VAR26.VAR28);
            goto VAR29;
        }
        VAR19->VAR30 = VAR31[VAR19->VAR26.VAR32 == 2][VAR19->VAR26.VAR33][VAR19->VAR26.VAR34][FUN10(VAR19->VAR26.VAR35)];
        FUN7(&VAR8->VAR36, VAR10, VAR17);
        FUN7(&VAR10->VAR16, VAR12, VAR17);
        VAR19 = NULL;
        while ((VAR19 = FUN11(VAR19)))
        {
            FUN12(VAR19);
        }
        return VAR10;
    VAR29:
        FUN13(VAR10->VAR19.VAR23);
    VAR25:
        FUN13(VAR10);
    VAR20:
        FUN13(VAR12);
    VAR13:
        return NULL;
    }
}