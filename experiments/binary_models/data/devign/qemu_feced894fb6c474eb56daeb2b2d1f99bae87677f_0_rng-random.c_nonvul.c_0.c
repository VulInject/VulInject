static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR2);
    if (VAR7->VAR10)
    {
        FUN4(VAR5, VAR11);
        return;
    }
    FUN5(VAR9->VAR3);
    VAR9->VAR3 = FUN6(VAR3);
}