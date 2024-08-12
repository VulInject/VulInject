VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR1 *VAR7 = NULL;
    VAR5 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR10 = FUN2(&VAR7);
    FUN3(VAR3, VAR10, VAR4, &VAR8);
    if (!VAR8)
    {
        FUN4(VAR10, &VAR7);
    }
    FUN5(VAR6, VAR8);
    FUN6(VAR10);
    return VAR7;
}