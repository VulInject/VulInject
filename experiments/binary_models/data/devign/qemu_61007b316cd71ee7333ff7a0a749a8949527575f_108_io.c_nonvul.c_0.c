int FUN1(VAR1 *VAR2, int64_t VAR3, void *VAR4, int VAR5)
{
    QEMUIOVector VAR6;
    struct iovec VAR7 = {
        .VAR8 = (void *)VAR4,
        .VAR9 = VAR5,
    };
    int VAR10;
    if (VAR5 < 0)
    {
        return -VAR11;
    }
    FUN2(&VAR6, &VAR7, 1);
    VAR10 = FUN3(VAR2, VAR3, &VAR6, false, 0);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    return VAR5;
}