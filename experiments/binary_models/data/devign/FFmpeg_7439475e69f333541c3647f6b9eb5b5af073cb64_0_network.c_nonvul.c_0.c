int FUN1(int VAR1, const struct VAR2 *VAR3, socklen_t VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    int VAR9 = 1;
    struct pollfd VAR10 = {VAR1, VAR11, 0};
    if (FUN2(VAR1, VAR12, VAR13, &VAR9, sizeof(VAR9)))
    {
        FUN3(NULL, VAR14, "");
    }
    VAR8 = FUN4(VAR1, VAR3, VAR4);
    if (VAR8)
        return FUN5();
    VAR8 = FUN6(VAR1, 1);
    if (VAR8)
        return FUN5();
    VAR8 = FUN7(&VAR10, 1, VAR5, &VAR7->VAR15);
    if (VAR8 < 0)
        return VAR8;
    VAR8 = FUN8(VAR1, NULL, NULL);
    if (VAR8 < 0)
        return FUN5();
    FUN9(VAR1);
    if (FUN10(VAR8, 1) < 0)
        FUN3(NULL, VAR16, "");
    return VAR8;
}