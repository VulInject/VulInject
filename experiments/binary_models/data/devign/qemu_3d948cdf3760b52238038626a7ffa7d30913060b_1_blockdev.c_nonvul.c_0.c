void FUN1(const char *VAR1, bool VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR1, &VAR7);
    if (!VAR9)
    {
        FUN3(VAR5, VAR10, VAR1);
        return;
    }
    if (!VAR2)
    {
        VAR3 = false;
    }
    if (VAR9->VAR11 && !VAR3)
    {
        FUN4(VAR5, "", VAR1);
        goto VAR12;
    }
    FUN5(VAR9);
    FUN6(VAR9);
VAR12:
    FUN7(VAR7);
}