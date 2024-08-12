char *FUN1(VAR1 *VAR2, const char *VAR3, bool VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    char *VAR9 = NULL;
    VAR5 *VAR10 = NULL;
    VAR8 = FUN2(VAR4, &VAR9);
    FUN3(VAR2, VAR8, VAR3, &VAR10);
    if (VAR10)
    {
        FUN4(VAR6, VAR10);
        goto VAR11;
    }
    FUN5(VAR8, &VAR9);
VAR11:
    FUN6(VAR8);
    return VAR9;
}