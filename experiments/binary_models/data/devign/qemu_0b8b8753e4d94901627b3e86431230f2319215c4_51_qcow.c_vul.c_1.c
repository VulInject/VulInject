static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    QcowWriteCo VAR11 = {
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR12 = -VAR13,
    };
    VAR8 = FUN3(VAR14);
    FUN4(VAR8, &VAR11);
    while (VAR11.VAR12 == -VAR13)
    {
        FUN5(VAR10, true);
    }
    return VAR11.VAR12;
}