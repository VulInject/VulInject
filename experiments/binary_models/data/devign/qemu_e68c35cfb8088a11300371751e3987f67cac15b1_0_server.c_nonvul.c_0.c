static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    struct NBDTLSHandshakeData VAR9 = {0};
    FUN2();
    VAR6 = VAR3->VAR6;
    if (FUN3(VAR3->VAR6, VAR10, VAR11, VAR5) < 0)
    {
        return NULL;
    }
    VAR8 = FUN4(VAR6, VAR3->VAR12, VAR3->VAR13, VAR5);
    if (!VAR8)
    {
        return NULL;
    }
    FUN5(FUN6(VAR8), "");
    FUN7();
    VAR9.VAR14 = FUN8(FUN9(), VAR15);
    FUN10(VAR8, VAR16, &VAR9, NULL);
    if (!VAR9.VAR17)
    {
        FUN11(VAR9.VAR14);
    }
    FUN12(VAR9.VAR14);
    if (VAR9.VAR18)
    {
        FUN13(FUN14(VAR8));
        FUN15(VAR5, VAR9.VAR18);
        return NULL;
    }
    return FUN6(VAR8);
}