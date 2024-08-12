int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6;
    DiscardCo VAR7 = {
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR8 = VAR9,
    };
    if (FUN2())
    {
        FUN3(&VAR7);
    }
    else
    {
        VAR10 *VAR11 = FUN4(VAR2);
        VAR6 = FUN5(VAR12);
        FUN6(VAR6, &VAR7);
        while (VAR7.VAR8 == VAR9)
        {
            FUN7(VAR11, true);
        }
    }
    return VAR7.VAR8;
}