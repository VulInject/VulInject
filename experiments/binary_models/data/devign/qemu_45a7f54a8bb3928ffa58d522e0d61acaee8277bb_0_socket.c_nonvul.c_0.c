static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR3, VAR3);
    uint32_t VAR9 = FUN3(VAR6);
    struct iovec VAR10[] = {
        {
            .VAR11 = &VAR9,
            .VAR12 = sizeof(VAR9),
        },
        {
            .VAR11 = (void *)VAR5,
            .VAR12 = VAR6,
        },
    };
    size_t VAR13;
    ssize_t VAR14;
    VAR13 = FUN4(VAR10, 2) - VAR8->VAR15;
    VAR14 = FUN5(VAR8->VAR16, VAR10, 2, VAR8->VAR15, VAR13);
    if (VAR14 == -1 && VAR17 == VAR18)
    {
        VAR14 = 0;
    }
    if (VAR14 == -1)
    {
        VAR8->VAR15 = 0;
        return -VAR17;
    }
    if (VAR14 < (VAR1)VAR13)
    {
        VAR8->VAR15 += VAR14;
        FUN6(VAR8, true);
        return 0;
    }
    VAR8->VAR15 = 0;
    return VAR6;
}