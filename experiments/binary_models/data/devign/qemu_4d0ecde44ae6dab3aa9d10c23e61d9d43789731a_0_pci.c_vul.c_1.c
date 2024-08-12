VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7)
{
    VAR8 *VAR9 = NULL;
    VAR1 *VAR10;
    if (FUN2(VAR3->VAR11, VAR12))
        FUN3(0);
    VAR10 = FUN4(VAR3, VAR5, VAR6, VAR7, &VAR9);
    if (!VAR10)
    {
        FUN5(VAR9);
        FUN3(1);
    }
    return VAR10;
}