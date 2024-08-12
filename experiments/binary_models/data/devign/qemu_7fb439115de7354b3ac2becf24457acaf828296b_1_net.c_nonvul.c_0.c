void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN3(VAR4, "");
    VAR6 = FUN4(VAR7, VAR8);
    if (!VAR6)
    {
        FUN5("", VAR8, VAR7);
        return;
    }
    if (VAR6->VAR9->VAR10 == VAR11)
    {
        FUN5("", VAR8);
        return;
    }
    FUN6(VAR6->VAR12);
    FUN6(VAR6);
}