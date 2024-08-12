static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR2);
    VAR5 *VAR11 = NULL;
    VAR12 *VAR13 = FUN5(VAR4);
    char *VAR14 = FUN6(VAR8->VAR15);
    const char *VAR16 = FUN7(FUN3(VAR4));
    VAR17 *VAR18;
    int VAR19;
    if (VAR4->VAR20 && !VAR10->VAR21)
    {
        FUN8(&VAR11, "");
        goto VAR22;
    }
    if (strcmp(VAR14, VAR16))
    {
        FUN8(&VAR11, "", VAR14);
        goto VAR22;
    }
    if (VAR13->VAR23 % VAR24)
    {
        FUN8(&VAR11, "", VAR13->VAR23);
        goto VAR22;
    }
    if (VAR10->VAR21 && (VAR13->VAR25 != VAR24))
    {
        FUN8(VAR6, "", VAR13->VAR25, VAR24);
        return;
    }
    VAR18 = FUN9(FUN2(VAR2), VAR13->VAR23, &VAR19);
    if (!VAR18)
    {
        FUN8(&VAR11, "", VAR13->VAR23);
        goto VAR22;
    }
    if (VAR18->VAR26)
    {
        FUN8(&VAR11, "", VAR13->VAR23);
        goto VAR22;
    }
    FUN10(VAR18, VAR4, &VAR11);
VAR22:
    FUN11(VAR14);
    FUN12(VAR6, VAR11);
}