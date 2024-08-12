void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    VAR7 *VAR8 = FUN2(VAR3, &VAR6);
    if (!VAR6)
    {
        FUN3(VAR2, VAR8, &VAR6);
    }
    FUN4(VAR5, VAR6);
}