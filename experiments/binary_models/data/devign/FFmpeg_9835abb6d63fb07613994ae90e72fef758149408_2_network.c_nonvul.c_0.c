int FUN1(int VAR1, const struct VAR2 *VAR3, socklen_t VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    int VAR9 = 1;
    struct pollfd VAR10 = {VAR1, VAR11, 0};
    FUN2(VAR1, VAR12, VAR13, &VAR9, sizeof(VAR9));
    VAR8 = FUN3(VAR1, VAR3, VAR4);
    if (VAR8)
        return FUN4();
    VAR8 = FUN5(VAR1, 1);
    if (VAR8)
        return FUN4();
    VAR8 = FUN6(&VAR10, 1, VAR5, &VAR7->VAR14);
    if (VAR8 < 0)
        return VAR8;
    VAR8 = FUN7(VAR1, NULL, NULL);
    if (VAR8 < 0)
        return FUN4();
    FUN8(VAR1);
    FUN9(VAR8, 1);
    return VAR8;
}