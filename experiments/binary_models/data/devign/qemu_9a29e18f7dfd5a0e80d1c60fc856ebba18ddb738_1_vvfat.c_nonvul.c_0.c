static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    int VAR9;
    int VAR10 = FUN2(VAR2, VAR2->VAR11);
    VAR2->VAR12 = calloc(VAR10, 1);
    FUN3(&(VAR2->VAR13), sizeof(VAR14));
    VAR2->VAR15 = FUN4(VAR16);
    VAR9 = FUN5(VAR2->VAR15, VAR16);
    if (VAR9 < 0)
    {
        FUN6(VAR4, -VAR9, "");
        goto VAR17;
    }
    VAR6 = FUN7("");
    if (!VAR6)
    {
        FUN8(VAR4, "");
        VAR9 = -VAR18;
        goto VAR17;
    }
    VAR8 = FUN9(VAR6->VAR19, NULL, 0, &VAR20);
    FUN10(VAR8, VAR21, VAR2->VAR11 * 512);
    FUN11(VAR8, VAR22, "");
    VAR9 = FUN12(VAR6, VAR2->VAR15, VAR8, VAR4);
    FUN13(VAR8);
    if (VAR9 < 0)
    {
        goto VAR17;
    }
    VAR2->VAR23 = NULL;
    VAR9 = FUN14(&VAR2->VAR23, VAR2->VAR15, NULL, NULL, VAR24 | VAR25 | VAR26, VAR6, VAR4);
    if (VAR9 < 0)
    {
        goto VAR17;
    }
    unlink(VAR2->VAR15);
    FUN15(VAR2->VAR27, FUN16());
    VAR2->VAR27->VAR28->VAR29 = &VAR30;
    VAR2->VAR27->VAR28->VAR31 = FUN17(void *, 1);
    *(void **)VAR2->VAR27->VAR28->VAR31 = VAR2;
    return 0;
VAR17:
    FUN18(VAR2->VAR15);
    VAR2->VAR15 = NULL;
    return VAR9;
}