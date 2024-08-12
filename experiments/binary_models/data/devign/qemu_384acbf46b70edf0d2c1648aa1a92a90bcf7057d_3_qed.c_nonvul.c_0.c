static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint64_t VAR9 = (VAR10)VAR3 * VAR11;
    size_t VAR12 = (VAR13)VAR4 * VAR11;
    QEDIsAllocatedCB VAR14 = {
        .VAR15 = -1,
        .VAR5 = VAR5,
    };
    QEDRequest VAR16 = {.VAR17 = NULL};
    FUN2(VAR7, &VAR16, VAR9, VAR12, VAR18, &VAR14);
    while (VAR14.VAR15 == -1)
    {
        FUN3();
    }
    FUN4(VAR16.VAR17);
    return VAR14.VAR15;
}