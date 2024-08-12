static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6)
{
    VAR1 *VAR7;
    VAR7 = FUN2(sizeof(VAR1));
    VAR7->VAR6 = VAR6;
    VAR7->VAR8 = FUN3(VAR3, VAR4, VAR5, VAR9, NULL, VAR7);
    VAR7->VAR8->VAR10 = VAR11;
    FUN4(VAR7->VAR6, VAR12, NULL, VAR7);
    snprintf(VAR7->VAR8->VAR13, sizeof(VAR7->VAR8->VAR13), "", VAR6);
    return VAR7;
}