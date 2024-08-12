VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(sizeof(VAR4));
    if (!VAR5)
        return NULL;
    VAR5->VAR6 = fopen(VAR2, VAR3);
    if (!VAR5->VAR6)
        goto VAR7;
    if (!strcmp(VAR3, ""))
        return FUN3(VAR5, VAR8, NULL, VAR9, NULL);
    else if (!strcmp(VAR3, ""))
        return FUN3(VAR5, NULL, VAR10, VAR9, NULL);
VAR7:
    if (VAR5->VAR6)
        fclose(VAR5->VAR6);
    FUN4(VAR5);
    return NULL;
}