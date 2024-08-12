int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FlushCo VAR5 = {
        .VAR2 = VAR2,
        .VAR6 = VAR7,
    };
    if (FUN2())
    {
        FUN3(&VAR5);
    }
    else
    {
        VAR4 = FUN4(VAR8, &VAR5);
        FUN5(VAR4);
        FUN6(VAR2, VAR5.VAR6 == VAR7);
    }
    return VAR5.VAR6;
}