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
    FUN5(&VAR11, VAR4, 0);
    if ((VAR5 = FUN6(&VAR8, NULL, VAR2, &VAR11)) < 0)
    {
        FUN4("", VAR2->VAR15);
        goto VAR18;
    }
    if ((VAR5 = FUN7(VAR8, &VAR10)) < 0)
    {
        FUN4("");
        goto VAR18;
    }
    for (VAR6 = 0; VAR6 < VAR10->VAR19; VAR6++)
    {
        FUN4("", VAR10->VAR20 == VAR6 ? "" : "", VAR10->VAR21[VAR6]->VAR22, VAR10->VAR21[VAR6]->VAR23);
    }
VAR18:
    FUN8(&VAR11);
    FUN9(&VAR10);
    FUN10(&VAR8);
    return VAR5;
}