VAR1 FUN1(struct in_addr VAR2, int VAR3)
{
    struct iovec VAR4[2];
    struct socket *VAR5;
    VAR5 = FUN2(VAR2, VAR3);
    if (!VAR5 || VAR5->VAR6 & VAR7)
        return 0;
    if (!FUN3(VAR5) || VAR5->VAR8.VAR9 >= (VAR5->VAR8.VAR10 / 2))
        return 0;
    return FUN4(VAR5, VAR4, NULL);
}