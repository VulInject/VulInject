static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    VAR10 = FUN2(VAR2);
    if (VAR10 < 0)
        return -VAR11;
    VAR10 = FUN3(VAR8->VAR12, VAR5, VAR6, VAR3);
    if (VAR10 == VAR6)
        return VAR10;
    FUN4("" VAR13 "" VAR13 "", VAR8->VAR12, VAR2->VAR14, VAR3, VAR5, VAR6, VAR2->VAR15, VAR10, VAR11, strerror(VAR11));
    return (VAR10 < 0) ? -VAR11 : VAR10;
}