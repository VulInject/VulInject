void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR5 = FUN2(&VAR10, VAR3, false);
    if (!VAR5)
    {
        return;
    }
    VAR7 = FUN3(VAR5, NULL);
    if (!FUN4(VAR7, ""))
    {
        FUN5("");
        goto VAR11;
    }
    VAR12 *VAR13 = FUN6(VAR7, &VAR9);
    if (!VAR13)
    {
        FUN7(VAR9);
        goto VAR11;
    }
    FUN8(&VAR14, VAR13, VAR15);
VAR11:
    FUN9(VAR5);