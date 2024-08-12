VAR1 *FUN1(const char *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5 = FUN2(sizeof(*VAR5));
    VAR6 *VAR7;
    VAR7 = FUN3(VAR2);
    if (!VAR7)
    {
        FUN4(VAR4, VAR8, "", VAR2);
        return NULL;
    }
    VAR5->VAR2 = FUN5(VAR7->VAR2);
    VAR5->VAR9 = VAR7->VAR10;
    VAR5->VAR11 = VAR7->VAR12;
    return VAR5;
}