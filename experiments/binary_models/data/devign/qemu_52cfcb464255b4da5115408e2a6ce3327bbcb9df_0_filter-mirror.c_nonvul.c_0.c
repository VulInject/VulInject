FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    FUN3(VAR7->VAR8);
    VAR7->VAR8 = FUN4(VAR3);
    if (!VAR7->VAR8)
    {
        FUN5(VAR5, ""
                         "");
        return;
    }
}