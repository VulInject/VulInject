static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6, bool VAR7, BdrvRequestFlags VAR8)
{
    QEMUIOVector VAR9;
    struct iovec VAR10 = {
        .VAR11 = (void *)VAR5,
        .VAR12 = VAR6 * VAR13,
    };
    FUN2(&VAR9, &VAR10, 1);
    return FUN3(VAR2, VAR3 << VAR14, &VAR9, VAR7, VAR8)