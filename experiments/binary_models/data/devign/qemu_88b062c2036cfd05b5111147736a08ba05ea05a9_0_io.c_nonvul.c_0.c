VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4, int64_t VAR5, int VAR6, int *VAR7, VAR2 **VAR8)
{
    VAR9 *VAR10;
    BdrvCoGetBlockStatusData VAR11 = {
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR8 = VAR8,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
        .VAR12 = false,
    };
    if (FUN2())
    {
        FUN3(&VAR11);
    }
    else
    {
        VAR10 = FUN4(VAR13, &VAR11);
        FUN5(VAR10);
        FUN6(VAR3, !VAR11.VAR12);
    }
    return VAR11.VAR14;
}