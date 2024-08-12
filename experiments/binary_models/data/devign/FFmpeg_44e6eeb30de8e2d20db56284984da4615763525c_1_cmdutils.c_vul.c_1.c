static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    VAR3 *VAR11 = NULL;
    if (!VAR2 || !VAR2->VAR12 || !FUN2(VAR2->VAR12->VAR13))
        return FUN3(VAR14);
    FUN4("", VAR2->VAR15);
    if (!VAR2->VAR16)
    {
        VAR5 = FUN3(VAR17);
        FUN4("");
        goto VAR18;
    }
    if ((VAR5 = FUN5(&VAR8, VAR2, NULL, NULL)) < 0)
    {
        FUN4("", VAR2->VAR15);
        goto VAR18;
    }
    FUN6(&VAR11, VAR4, 0);
    FUN7(VAR8, &VAR11, VAR19);
    if ((VAR5 = FUN8(VAR8, &VAR10)) < 0)
    {
        FUN4("");
        goto VAR18;
    }
    for (VAR6 = 0; VAR6 < VAR10->VAR20; VAR6++)
    {
        FUN4("", VAR10->VAR21 == VAR6 ? "" : "", VAR10->VAR22[VAR6]->VAR23, VAR10->VAR22[VAR6]->VAR24);
    }
VAR18:
    FUN9(&VAR11);
    FUN10(&VAR10);
    FUN11(VAR8);
    return VAR5;
}