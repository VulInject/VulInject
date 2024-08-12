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
    if (VAR2->VAR13)
    {
        fprintf(VAR14, ""
                        "",
                FUN2(VAR2));
        FUN3(VAR2);
    }
    if (FUN4())
    {
        FUN5(&VAR10);
    }
    else
    {
        VAR15 *VAR16 = FUN6(VAR2);
        VAR9 = FUN7(VAR17);
        FUN8(VAR9, &VAR10);
        while (VAR10.VAR11 == VAR12)
        {
            FUN9(VAR16, true);
        }
    }
    return VAR10.VAR11;
}