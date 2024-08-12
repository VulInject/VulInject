int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    int64_t VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR4, "");
    if (VAR7 < 0)
    {
        VAR7 = 0;
    }
    VAR10 = VAR7;
    VAR9 = FUN3(VAR11);
    if (VAR9 && VAR9->VAR12)
    {
        FUN4(VAR9->VAR12, VAR10);
    }
    return 0;
}