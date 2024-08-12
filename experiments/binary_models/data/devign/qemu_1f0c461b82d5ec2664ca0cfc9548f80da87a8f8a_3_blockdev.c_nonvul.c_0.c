void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2);
    if (!VAR6)
    {
        FUN3(VAR4, "", VAR2);
        return;
    }
    if (FUN4(VAR6))
    {
        FUN3(VAR4, "", VAR2, FUN5(VAR6));
        return;
    }
    FUN6(VAR1, VAR6, VAR4);
}