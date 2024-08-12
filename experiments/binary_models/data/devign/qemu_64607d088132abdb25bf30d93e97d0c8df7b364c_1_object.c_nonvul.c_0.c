void FUN1(VAR1 *VAR2, const char *VAR3, VAR1 *VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = FUN2("", FUN3(FUN4(VAR4)));
    VAR11 = FUN5(VAR2, VAR3, VAR9, VAR12, NULL, VAR13, VAR4, &VAR7);
    if (VAR7)
    {
        FUN6(VAR6, VAR7);
        goto VAR14;
    }
    VAR11->VAR15 = VAR16;
    FUN7(VAR4);
    FUN8(VAR4->VAR17 == NULL);
    VAR4->VAR17 = VAR2;
VAR14:
    FUN9(VAR9);
}