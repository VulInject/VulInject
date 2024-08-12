void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2(VAR1, VAR2, &VAR6, VAR4);
    if (!VAR8 || !VAR6)
    {
        return;
    }
    if (FUN3(VAR8))
    {
        FUN4(VAR4, "", VAR2);
        return;
    }
    FUN5(VAR8);
    FUN6(VAR6, VAR8);
}