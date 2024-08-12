VAR1 FUN1(VAR2 *VAR3, struct in_addr VAR4, int VAR5)
{
    struct iovec VAR6[2];
    struct socket *VAR7;
    VAR7 = FUN2(VAR3, VAR4, VAR5);
    if (!VAR7 || VAR7->VAR8 & VAR9)
    {
        return 0;
    }
    if (!FUN3(VAR7) || VAR7->VAR10.VAR11 >= (VAR7->VAR10.VAR12 / 2))
    {
        return 0;
    }
    return FUN4(VAR7, VAR6, NULL);
}