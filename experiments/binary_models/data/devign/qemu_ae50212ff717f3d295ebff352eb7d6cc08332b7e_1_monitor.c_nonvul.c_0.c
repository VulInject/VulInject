static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    const VAR6 *VAR7;
    VAR7 = FUN2(VAR2, &VAR3, VAR2->VAR8);
    if (!VAR7)
    {
        return;
    }
    VAR5 = FUN3(VAR2, &VAR3, VAR7);
    if (!VAR5)
    {
        return;
    }
    VAR7->VAR9.FUN4(VAR2, VAR5);
    FUN5(VAR5);
}