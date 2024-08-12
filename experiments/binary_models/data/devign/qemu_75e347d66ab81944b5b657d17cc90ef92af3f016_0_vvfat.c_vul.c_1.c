static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    int VAR10 = FUN2(VAR2, VAR2->VAR11);
    VAR2->VAR12 = calloc(VAR10, 1);
    FUN3(&(VAR2->VAR13), sizeof(VAR14));
    VAR2->VAR15 = FUN4(1024);
    VAR9 = FUN5(VAR2->VAR15, 1024);
    if (VAR9 < 0)
    {
        FUN6(VAR4, -VAR9, "");
        goto VAR16;
    }
    VAR6 = FUN7("");
    VAR8 = FUN8("", VAR6->VAR17, NULL);
    FUN9(VAR8, VAR18, VAR2->VAR11 * 512);
    FUN10(VAR8, VAR19, "");
    VAR9 = FUN11(VAR6, VAR2->VAR15, VAR8, VAR4);
    if (VAR9 < 0)
    {
        goto VAR16;
    }
    VAR2->VAR20 = NULL;
    VAR9 = FUN12(&VAR2->VAR20, VAR2->VAR15, NULL, NULL, VAR21 | VAR22 | VAR23, VAR6, VAR4);
    if (VAR9 < 0)
    {
        goto VAR16;
    }
    unlink(VAR2->VAR15);
    FUN13(VAR2->VAR24, FUN14("", &VAR25));
    VAR2->VAR24->VAR26->VAR27 = &VAR28;
    VAR2->VAR24->VAR26->VAR29 = FUN4(sizeof(void *));
    *(void **)VAR2->VAR24->VAR26->VAR29 = VAR2;
    return 0;
VAR16:
    FUN15(VAR2->VAR15);
    VAR2->VAR15 = NULL;
    return VAR9;