static VAR1 FUN1(VAR2 *VAR3, size_t VAR4, void *VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9 = VAR5;
    int VAR10;
    VAR9->VAR11 += VAR4;
    FUN2(VAR9->VAR12, VAR13, VAR9->VAR11, &VAR14);
    VAR10 = FUN3(VAR9->VAR15, VAR9->VAR12, VAR7);
    if (VAR10 < 0)
    {
        return -1;
    }
    VAR9->VAR16 = FUN4(VAR9->VAR15, NULL, NULL, VAR17 | VAR18, VAR7);
    if (!VAR9->VAR16)
    {
        return -1;
    }
    return 0;
}