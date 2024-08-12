int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    VAR8 *VAR9;
    VAR9 = FUN3(VAR7);
    if (!VAR9 || VAR9->VAR10->VAR11 == VAR12)
    {
        FUN4(VAR13, VAR7);
        return -1;
    }
    FUN5(VAR9);
    FUN6(FUN7(&VAR14, VAR7));
    return 0;
}