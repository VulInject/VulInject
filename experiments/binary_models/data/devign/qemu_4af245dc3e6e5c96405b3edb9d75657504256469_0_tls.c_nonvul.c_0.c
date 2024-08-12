void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = FUN2(VAR2, VAR12, VAR7);
    if (!VAR9)
    {
        return;
    }
    if (VAR2->VAR13.VAR14 && *VAR2->VAR13.VAR14)
    {
        VAR5 = VAR2->VAR13.VAR14;
    }
    if (!VAR5)
    {
        FUN3(VAR7, "");
        return;
    }
    VAR11 = FUN4(VAR4, VAR9, VAR5, VAR7);
    if (!VAR11)
    {
        return;
    }
    FUN5(VAR5);
    FUN6(FUN7(VAR11), "");
    FUN8(VAR11, VAR15, VAR2, NULL);
}