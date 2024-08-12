static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, bool VAR6, BdrvRequestFlags VAR7)
{
    VAR8 *VAR9;
    RwCo VAR10 = {
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR11 = VAR12,
        .VAR7 = VAR7,
    };
    if (FUN2())
    {
        FUN3(&VAR10);
    }
    else
    {
        VAR13 *VAR14 = FUN4(VAR2->VAR15);
        VAR9 = FUN5(VAR16);
        FUN6(VAR9, &VAR10);
        while (VAR10.VAR11 == VAR12)
        {
            FUN7(VAR14, true);
        }
    }
    return VAR10.VAR11;
}