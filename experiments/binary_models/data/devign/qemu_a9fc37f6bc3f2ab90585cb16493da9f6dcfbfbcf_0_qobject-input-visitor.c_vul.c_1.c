static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = FUN3(VAR9, VAR3, true, VAR7);
    VAR12 *VAR13;
    if (!VAR11)
    {
        return;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13)
    {
        FUN5(VAR7, VAR14, VAR3 ? VAR3 : "", "");
        return;
    }
    *VAR5 = FUN6(VAR13);
}