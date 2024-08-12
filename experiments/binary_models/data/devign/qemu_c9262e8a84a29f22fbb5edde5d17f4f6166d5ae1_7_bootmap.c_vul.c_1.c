void FUN1(void)
{
    VAR1 *VAR2 = (void *)VAR3;
    VAR4 *VAR5 = (void *)VAR3;
    memset(VAR3, VAR6, sizeof(VAR3));
    FUN2(0, VAR2, "");
    FUN3("");
    if (FUN4(VAR2->VAR7, VAR8))
    {
        FUN5();
    }
    if (FUN6())
    {
        FUN7();
    }
    FUN8();
    if (FUN6())
    {
        FUN9("");
        FUN10();
    }
    FUN11();
    if (FUN4(VAR2->VAR7, VAR9))
    {
        FUN12();
    }
    memset(VAR3, VAR6, sizeof(VAR3));
    FUN2(2, VAR5, "");
    if (FUN4(VAR5->VAR7, VAR10))
    {
        FUN13(VAR11);
    }
    if (FUN4(VAR5->VAR7, VAR12))
    {
        FUN13(VAR13);
    }
    FUN13(VAR14);
    FUN12();
    FUN14("");
}