static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR2);
    VAR5 *VAR11 = NULL;
    VAR12 *VAR13 = FUN5(VAR4);
    VAR14 *VAR15 = FUN6(VAR4);
    char *VAR16 = FUN7(VAR8->VAR17);
    const char *VAR18 = FUN8(FUN3(VAR4));
    VAR19 *VAR20;
    int VAR21;
    int VAR22;
    if (VAR4->VAR23 && !VAR10->VAR24)
    {
        FUN9(&VAR11, "");
        goto VAR25;
    }
    if (strcmp(VAR16, VAR18))
    {
        FUN9(&VAR11, "", VAR16);
        goto VAR25;
    }
    if (VAR13->VAR26 % VAR27)
    {
        FUN9(&VAR11, "", VAR13->VAR26);
        goto VAR25;
    }
    if (VAR13->VAR28 != VAR27)
    {
        FUN9(VAR6, "", VAR13->VAR28, VAR27);
        return;
    }
    VAR20 = FUN10(FUN2(VAR2), VAR13->VAR26, &VAR22);
    if (!VAR20)
    {
        FUN9(&VAR11, "", VAR13->VAR26);
        goto VAR25;
    }
    if (VAR20->VAR29)
    {
        FUN9(&VAR11, "", VAR13->VAR26);
        goto VAR25;
    }
    VAR21 = VAR20->VAR30.VAR21;
    if (!VAR20->VAR30.VAR31)
    {
        VAR21 = 0;
    }
    if (VAR15->VAR21 == VAR32)
    {
        VAR15->VAR21 = VAR21;
    }
    else if (VAR15->VAR21 != VAR21)
    {
        FUN9(&VAR11, ""
                               "",
                   VAR15->VAR21, VAR13->VAR26);
        goto VAR25;
    }
VAR25:
    FUN11(VAR16);
    FUN12(VAR6, VAR11);
}