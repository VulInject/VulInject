void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN2(&VAR8);
    VAR11 *VAR12;
    VAR3 *VAR13 = NULL;
    FUN3(VAR10, NULL, &VAR2, &VAR13);
    if (VAR13)
    {
        FUN4(VAR4, VAR13);
        goto VAR14;
    }
    FUN5(VAR10, &VAR8);
    VAR12 = FUN6(VAR8);
    FUN7(VAR12);
    if (!FUN8(VAR12, ""))
    {
        FUN9(VAR4, "");
        goto VAR14;
    }
    VAR6 = FUN10(VAR12, VAR4);
    if (!VAR6)
    {
        goto VAR14;
    }
    FUN11(&VAR15, VAR6, VAR16);
    if (VAR6 && FUN12(VAR6))
    {
        FUN13(&VAR15, VAR6, VAR16);
        FUN14(VAR6);
        FUN9(VAR4, "");
        goto VAR14;
    }
VAR14:
    FUN15(VAR10);
}