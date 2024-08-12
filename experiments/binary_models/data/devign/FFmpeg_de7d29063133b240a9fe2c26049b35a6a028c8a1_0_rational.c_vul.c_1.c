VAR1 FUN1(double VAR2, int VAR3)
{
    AVRational VAR4;
    int VAR5;
    int64_t VAR6;
    if (FUN2(VAR2))
        return (VAR1){0, 0};
    if (FUN3(VAR2))
        return (VAR1){VAR2 < 0 ? -1 : 1, 0};
    VAR5 = FUN4((int)(FUN5(FUN6(VAR2) + 1e-20) / VAR7), 0);
    VAR6 = 1LL << (61 - VAR5);
    FUN7(&VAR4.VAR8, &VAR4.VAR6, (VAR9)(VAR2 * VAR6 + 0.5), VAR6, VAR3);
    return VAR4;
}