int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    RwCo VAR5 = {
        .VAR2 = VAR2,
        .VAR6 = VAR7,
    };
    if (FUN2())
    {
        FUN3(&VAR5);
    }
    else
    {
        VAR8 *VAR9 = FUN4(VAR2);
        VAR4 = FUN5(VAR10);
        FUN6(VAR4, &VAR5);
        while (VAR5.VAR6 == VAR7)
        {
            FUN7(VAR9, true);
        }
    }
    return VAR5.VAR6;
}