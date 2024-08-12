void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    const char *VAR6 = FUN2(VAR4, "");
    const char *VAR7 = FUN3(VAR4, "");
    VAR8 *VAR9 = NULL;
    if (strcmp(VAR5, "") == 0 && (strcmp(VAR6, "") == 0 || strcmp(VAR6, "") == 0))
    {
        if (!VAR7)
        {
            FUN4(VAR2, VAR10, NULL);
            return;
        }
    }
    FUN5(VAR5, VAR6, !!VAR7, VAR7, &VAR9);
    if (FUN6(VAR9, VAR11))
    {
        FUN7(VAR9);
        FUN8(VAR2, VAR5, NULL, NULL);
        return;
    }
    FUN9(VAR2, &VAR9);
}