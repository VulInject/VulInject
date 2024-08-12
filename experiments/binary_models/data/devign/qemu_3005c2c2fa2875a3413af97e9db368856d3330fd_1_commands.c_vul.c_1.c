VAR1 *FUN1(const char *VAR2, bool VAR3, VAR4 *VAR5, bool VAR6, VAR4 *VAR7, bool VAR8, const char *VAR9, bool VAR10, bool VAR11, VAR12 **VAR13)
{
    GPid VAR14;
    VAR1 *VAR15 = NULL;
    VAR16 *VAR17;
    char **argv, **VAR18;
    strList VAR19;
    gboolean VAR20;
    VAR21 *VAR22 = NULL;
    gint VAR23, VAR24, VAR25;
    VAR26 *VAR27, *VAR28, *VAR29;
    GSpawnFlags VAR30;
    bool VAR31 = (VAR10 && VAR11);
    VAR32 *VAR33 = NULL;
    size_t VAR34 = 0;
    VAR19.VAR35 = (char *)VAR2;
    VAR19.VAR36 = VAR3 ? VAR5 : NULL;
    if (VAR8)
    {
        VAR33 = FUN2(VAR9, -1, &VAR34, VAR13);
        if (!VAR33)
        {
            return NULL;
        }
    }
    argv = FUN3(&VAR19, true);
    VAR18 = VAR6 ? FUN3(VAR7, false) : NULL;
    VAR30 = VAR37 | VAR38;
    VAR30 |= VAR39;
    if (!VAR31)
    {
        VAR30 |= VAR40 | VAR41;
    }
    VAR20 = FUN4(NULL, argv, VAR18, VAR30, VAR42, NULL, &VAR14, VAR8 ? &VAR23 : NULL, VAR31 ? &VAR24 : NULL, VAR31 ? &VAR25 : NULL, &VAR22);
    if (!VAR20)
    {
        FUN5(VAR13, VAR43, VAR22->VAR44);
        FUN6(VAR22);
        goto VAR45;
    }
    VAR15 = FUN7(VAR1, 1);
    VAR15->VAR14 = FUN8(VAR14);
    VAR17 = FUN9(VAR14);
    VAR17->VAR31 = VAR31;
    FUN10(VAR14, VAR46, VAR17);
    if (VAR8)
    {
        VAR17->VAR47.VAR48 = VAR33;
        VAR17->VAR47.VAR49 = VAR34;
        VAR27 = FUN11(VAR23);
        VAR27 = FUN12(VAR23);
        FUN13(VAR27, NULL, NULL);
        FUN14(VAR27, false);
        FUN15(VAR27, VAR50, NULL);
        FUN16(VAR27, VAR51, VAR52, &VAR17->VAR47);
    }
    if (VAR31)
    {
        VAR28 = FUN11(VAR24);
        VAR29 = FUN11(VAR25);
        VAR28 = FUN12(VAR24);
        VAR29 = FUN12(VAR25);
        FUN13(VAR28, NULL, NULL);
        FUN13(VAR29, NULL, NULL);
        FUN14(VAR28, false);
        FUN14(VAR29, false);
        FUN17(VAR28, true);
        FUN17(VAR29, true);
        FUN16(VAR28, VAR53 | VAR54, VAR55, &VAR17->VAR56);
        FUN16(VAR29, VAR53 | VAR54, VAR55, &VAR17->VAR13);
    }
VAR45:
    FUN18(argv);
    FUN18(VAR18);
    return VAR15;