int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    int VAR6;
    VAR7 *VAR8;
    CreateCo VAR9 = {
        .VAR2 = VAR2,
        .VAR3 = FUN2(VAR3),
        .VAR5 = VAR5,
        .VAR6 = VAR10,
    };
    if (!VAR2->VAR11)
    {
        return -VAR12;
    }
    if (FUN3())
    {
        FUN4(&VAR9);
    }
    else
    {
        VAR8 = FUN5(VAR13);
        FUN6(VAR8, &VAR9);
        while (VAR9.VAR6 == VAR10)
        {
            FUN7();
        }
    }
    VAR6 = VAR9.VAR6;
    FUN8(VAR9.VAR3);
    return VAR6;
}