static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = NULL;
    if (!VAR2)
    {
        FUN2(VAR6, "");
        return;
    }
    VAR8 = FUN3(VAR2, VAR6);
    if (!VAR8)
    {
        return;
    }
    FUN4(VAR8, VAR4, VAR6);
    FUN5(VAR8);
}