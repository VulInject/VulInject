static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    char VAR8[256], VAR9[256], VAR10[128], VAR11[1024];
    char *VAR12;
    char VAR13[1024];
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR15 = VAR2->VAR18 = FUN2(sizeof(VAR14));
    if (!VAR2->VAR18)
        return FUN3(VAR19);
    VAR15->VAR20 = VAR2->VAR21 = 1;
    VAR17 = &VAR15->VAR17;
    FUN4(VAR11, VAR3, sizeof(VAR11));
    FUN5(NULL, 0, NULL, 0, VAR10, sizeof(VAR10), &VAR6, VAR9, sizeof(VAR9), VAR11);
    if (VAR6 < 0)
        VAR6 = 80;
    FUN6(VAR8, sizeof(VAR8), "", NULL, VAR10, VAR6, VAR9);
    if (FUN7(&VAR17->VAR22, VAR8, VAR23) < 0)
    {
        return FUN3(VAR24);
    }
    snprintf(VAR13, sizeof(VAR13), "" VAR25 ""
                                       ""
                                       "" VAR26 "",
             VAR10, VAR6, VAR15->VAR20++);
    FUN8(VAR17->VAR22, VAR13);
    VAR7 = FUN9(VAR17->VAR22);
    if (VAR7)
    {
        goto VAR27;
    }
    VAR7 = FUN10(VAR15);
    if (VAR7)
    {
        FUN11(NULL, VAR28, "");
        goto VAR27;
    }
    FUN12(VAR17->VAR22);
    memset(VAR13, 0, sizeof(VAR13));
    if (FUN7(&VAR17->VAR22, VAR8, VAR23) < 0)
    {
        return FUN3(VAR24);
    }
    VAR12 = FUN2(VAR17->VAR29 * 19 + 1);
    if (!VAR12)
        return FUN3(VAR19);
    for (VAR5 = 0; VAR5 < VAR17->VAR29; VAR5++)
    {
        char VAR30[20];
        VAR7 = snprintf(VAR30, sizeof(VAR30), "", VAR17->VAR31[VAR5].VAR32);
        if (VAR7 < 0)
            goto VAR27;
        FUN13(VAR12, VAR30, VAR17->VAR29 * 19 + 1);
    }
    VAR7 = snprintf(VAR13, sizeof(VAR13), "" VAR25 ""
                                             ""
                                             "" VAR26 ""
                                             ""
                                             "",
                   VAR10, VAR6, VAR15->VAR20++, VAR17->VAR29, VAR12);
    FUN14(&VAR12);
    if (VAR7 < 0)
    {
        FUN11(NULL, VAR28, "");
        goto VAR27;
    }
    FUN15(NULL, "", VAR13);
    FUN8(VAR17->VAR22, VAR13);
    VAR7 = FUN9(VAR17->VAR22);
    if (VAR7)
    {
        goto VAR27;
    }
    VAR7 = FUN10(VAR15);
    if (VAR7)
    {
        FUN11(NULL, VAR28, "");
        goto VAR27;
    }
    FUN15(NULL, "");
    return 0;
VAR27:
    FUN14(&VAR12);
    FUN16(VAR2);
    FUN15(NULL, "", VAR7);
    return VAR7;
}