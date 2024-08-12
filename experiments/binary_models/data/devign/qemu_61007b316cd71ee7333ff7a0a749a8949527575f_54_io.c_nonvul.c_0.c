int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int64_t VAR5, int VAR6)
{
    QEMUIOVector VAR7;
    struct iovec VAR8 = {
        .VAR9 = (void *)VAR4,
        .VAR10 = VAR6,
    };
    FUN2(&VAR7, &VAR8, 1);
    return FUN3(VAR2, &VAR7, VAR5);
}