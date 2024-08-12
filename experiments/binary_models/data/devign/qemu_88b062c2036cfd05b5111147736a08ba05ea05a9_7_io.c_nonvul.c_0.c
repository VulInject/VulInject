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
        VAR6 = FUN4(VAR10, &VAR7);
        FUN5(VAR6);
        FUN6(VAR2, VAR7.VAR8 == VAR9);
    }
    return VAR7.VAR8;
}