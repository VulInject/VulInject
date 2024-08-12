VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8;
    BdrvCoGetBlockStatusData VAR9 = {
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR10 = false,
    };
    if (FUN2())
    {
        FUN3(&VAR9);
    }
    else
    {
        VAR11 *VAR12 = FUN4(VAR3);
        VAR8 = FUN5(VAR13);
        FUN6(VAR8, &VAR9);
        while (!VAR9.VAR10)
        {
            FUN7(VAR12, true);
        }
    }
    return VAR9.VAR14;
}