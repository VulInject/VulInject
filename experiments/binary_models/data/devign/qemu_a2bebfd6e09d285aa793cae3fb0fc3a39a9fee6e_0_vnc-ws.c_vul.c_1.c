long FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    size_t VAR7, VAR8;
    FUN2("", VAR2->VAR9.VAR10, VAR2->VAR9.VAR11, VAR2->VAR9.VAR12);
    FUN3(&VAR2->VAR9, 4096);
    VAR3 = FUN4(VAR2, FUN5(&VAR2->VAR9), 4096);
    if (!VAR3)
    {
        return 0;
    }
    VAR2->VAR9.VAR12 += VAR3;
    do
    {
        VAR4 = FUN6(&VAR2->VAR9, &VAR6, &VAR7, &VAR8);
        if (VAR4 <= 0)
        {
            return VAR4;
        }
        FUN3(&VAR2->VAR13, VAR7);
        FUN7(&VAR2->VAR13, VAR6, VAR7);
        FUN8(&VAR2->VAR9, VAR8);
    } while (VAR2->VAR9.VAR12 > 0);
    return VAR3;
}