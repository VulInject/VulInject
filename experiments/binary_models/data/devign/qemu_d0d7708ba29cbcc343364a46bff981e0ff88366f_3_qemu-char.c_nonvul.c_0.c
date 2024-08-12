static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR4, VAR6);
    if (!VAR7)
    {
        return NULL;
    }
    VAR9 = FUN3(VAR8, 1);
    VAR7->VAR10 = VAR9;
    VAR7->VAR11 = VAR12;
    VAR7->VAR13 = VAR14;
    if (FUN4(VAR7, VAR2, VAR6) < 0)
    {
        FUN5(VAR9);
        FUN6(VAR7);
        return NULL;
    }
    return VAR7;
}