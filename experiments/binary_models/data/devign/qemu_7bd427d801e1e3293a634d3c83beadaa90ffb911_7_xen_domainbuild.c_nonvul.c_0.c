static void FUN1(void *VAR1)
{
    struct xc_dominfo VAR2;
    int VAR3;
    VAR3 = FUN2(VAR4, VAR5, 1, &VAR2);
    if ((VAR3 != 1) || (VAR2.VAR6 != VAR5))
    {
        FUN3("", VAR5);
        goto VAR7;
    }
    if (VAR2.VAR8)
    {
        FUN3("", VAR5, VAR2.VAR9 ? "" : "", VAR2.VAR10 ? "" : "");
        goto VAR7;
    }
    FUN4(VAR11, FUN5(VAR12) + 1000);
    return;
VAR7:
    FUN6();
    return;
}