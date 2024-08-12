FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    char *VAR8;
    if (VAR3)
    {
        VAR7 = FUN2(VAR2, VAR5);
    }
    else
    {
        VAR7 = FUN3(VAR2, VAR5);
    }
    if (!VAR7)
    {
        return NULL;
    }
    if (VAR7->VAR9 != VAR10)
    {
        FUN4(VAR5, "");
        return NULL;
    }
    VAR8 = FUN5("", VAR7->VAR11.VAR12.VAR13->VAR14, VAR7->VAR11.VAR12.VAR13->VAR15);
    FUN6(VAR7);
    return VAR8;
}