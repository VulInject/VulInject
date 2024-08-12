static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    int VAR8;
    if (!VAR7->VAR9)
    {
        VAR7->VAR10 = 0;
        return VAR11;
    }
    if (!VAR7->VAR10)
    {
        return VAR11;
    }
    VAR8 = FUN2(VAR7->VAR9, VAR7->VAR12, VAR7->VAR10);
    VAR7->VAR10 -= VAR8;
    memmove(VAR7->VAR12, VAR7->VAR12 + VAR8, VAR7->VAR10);
    if (VAR7->VAR10)
    {
        guint VAR13 = FUN3(VAR7->VAR9, VAR14 | VAR15, VAR16, VAR7);
        if (!VAR13)
        {
            VAR7->VAR10 = 0;
            return VAR11;
        }
    }
    FUN4(VAR7);
    return VAR11;
}