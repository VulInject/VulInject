FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    FUN3(VAR7, VAR5);
    VAR7->VAR8 = FUN4(VAR7->VAR9);
    if (VAR7->VAR8)
    {
        VAR10 *VAR11 = VAR7->VAR8->VAR12;
        if (VAR11)
        {
            VAR7->VAR13 = VAR11->VAR14;
        }
    }
}