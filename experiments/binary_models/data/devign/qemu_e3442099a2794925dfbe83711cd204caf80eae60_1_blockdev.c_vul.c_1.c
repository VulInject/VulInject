void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10;
    int VAR11;
    VAR10 = FUN2(VAR1 ? VAR2 : NULL, VAR3 ? VAR4 : NULL, &VAR8);
    if (VAR8)
    {
        FUN3(VAR7, VAR8);
        return;
    }
    VAR11 = FUN4(VAR10, VAR5);
    if (VAR11 == -VAR12)
    {
        FUN5(VAR7, VAR13, FUN6(VAR10));
        return;
    }
    else if (VAR11 < 0)
    {
        FUN5(VAR7, VAR14);
        return;
    }
}