static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    VAR8 *VAR9;
    if (!VAR7->VAR10 || !VAR7->VAR11)
    {
        return NULL;
    }
    VAR9 = VAR7->VAR11->VAR12;
    if (!VAR9)
    {
        return NULL;
    }
    if (!FUN3(VAR9, VAR7->VAR13))
    {
        VAR7->VAR11 = FUN4(VAR7->VAR11);
        if (!VAR7->VAR11)
        {
            return NULL;
        }
        VAR9 = VAR7->VAR11->VAR12;
        if (!VAR9)
        {
            return NULL;
        }
        VAR7->VAR13 = FUN5(VAR9);
    }
    VAR4->VAR14 = FUN6(VAR5);
    return VAR4->VAR14;
}