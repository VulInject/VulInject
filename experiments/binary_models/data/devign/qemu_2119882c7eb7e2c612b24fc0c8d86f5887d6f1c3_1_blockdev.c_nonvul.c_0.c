void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(VAR1, VAR2, &VAR8, VAR4);
    if (!VAR6 || !VAR8)
    {
        return;
    }
    if (FUN3(VAR6))
    {
        FUN4(VAR4, "", VAR2);
        return;
    }
    else if (!FUN5(VAR6))
    {
        FUN4(VAR4, "", VAR2);
        return;
    }
    FUN6(VAR6, NULL);
}