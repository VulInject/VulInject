int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2(sizeof(VAR6));
    if (!VAR7)
        return -1;
    if (FUN3(&VAR7->VAR8, VAR5) < 0)
    {
        FUN4("", VAR5);
        return -1;
    }
    VAR7->VAR9 = FUN5(VAR2, VAR3, VAR4, VAR10, NULL, VAR7);
    snprintf(VAR7->VAR9->VAR11, sizeof(VAR7->VAR9->VAR11), "", VAR5);
    FUN6(VAR7->VAR8->VAR12, VAR13, VAR7);
    return 0;
}