static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    VAR6 *VAR7 = FUN2(VAR2);
    char *VAR8, *VAR9;
    VAR7->VAR10 = false;
    VAR7->VAR11 = -1;
    VAR7->VAR12 = FUN3(&VAR5);
    if (!VAR7->VAR12)
    {
        FUN4(VAR4, VAR5);
        return;
    }
    FUN5(&VAR7->VAR13);
    FUN6(&VAR7->VAR14);
    VAR8 = FUN7(FUN8(VAR2));
    VAR9 = FUN9("", VAR8);
    FUN10(&VAR7->VAR15, VAR9, VAR16, VAR7, VAR17);
    FUN11(VAR9);
    FUN11(VAR8);
    FUN12(&VAR7->VAR13);
    while (VAR7->VAR11 == -1)
    {
        FUN13(&VAR7->VAR14, &VAR7->VAR13);
    }
    FUN14(&VAR7->VAR13);
}