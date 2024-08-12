VAR1 FUN1(double VAR2, int VAR3)
{
    AVRational VAR4;
    int VAR5;
    int64_t VAR6;
    if (FUN2(VAR2))
        return (VAR1){0, 0};
    if (FUN3(VAR2) > VAR7 + 3LL)
        return (VAR1){VAR2 < 0 ? -1 : 1, 0};
    FUN4(VAR2, &VAR5);
    VAR5 = FUN5(VAR5 - 1, 0);
    VAR6 = 1LL << (61 - VAR5);
    FUN6(&VAR4.VAR8, &VAR4.VAR6, FUN7(VAR2 * VAR6 + 0.5), VAR6, VAR3);
    if ((!VAR4.VAR8 || !VAR4.VAR6) && VAR2 && VAR3 > 0 && VAR3 < VAR7)
        FUN6(&VAR4.VAR8, &VAR4.VAR6, FUN7(VAR2 * VAR6 + 0.5), VAR6, VAR7);
    return VAR4;
}