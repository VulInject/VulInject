void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR11 *VAR12;
    char *VAR13;
    VAR10 = FUN2(false);
    FUN3(VAR2, FUN4(VAR10), VAR3, &VAR8);
    if (VAR8)
    {
        FUN5(VAR7, VAR8);
        goto VAR14;
    }
    VAR13 = FUN6(VAR10);
    VAR12 = FUN7(VAR13);
    FUN8(VAR12, NULL, VAR5, VAR7);
    FUN9(VAR13);
    FUN10(VAR12);
VAR14:
    FUN10(FUN4(VAR10));
}