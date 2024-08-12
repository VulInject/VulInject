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
        VAR13 *VAR14 = FUN4(VAR3);
        VAR10 = FUN5(VAR15);
        FUN6(VAR10, &VAR11);
        while (!VAR11.VAR12)
        {
            FUN7(VAR14, true);
        }
    }
    return VAR11.VAR16;
}