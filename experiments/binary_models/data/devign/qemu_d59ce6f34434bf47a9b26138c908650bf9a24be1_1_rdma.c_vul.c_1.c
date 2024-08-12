void FUN1(void *VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR3 *VAR7 = NULL, **VAR8 = &VAR7;
    VAR9 *VAR10 = FUN2(VAR2, &VAR7);
    int VAR11 = 0;
    if (VAR10 == NULL)
    {
        FUN3(VAR8, "", VAR11);
        goto VAR12;
    }
    VAR11 = FUN4(VAR10, &VAR7, VAR6->VAR13[VAR14]);
    if (VAR11)
    {
        goto VAR12;
    }
    FUN5();
    VAR11 = FUN6(VAR10, &VAR7);
    if (VAR11)
    {
        goto VAR12;
    }
    FUN7();
    VAR6->VAR15 = FUN8(VAR10, "");
    FUN9(VAR6);
    return;
VAR12:
    FUN10(VAR4, VAR7);
    FUN11(VAR10);
    FUN12(VAR6);
}