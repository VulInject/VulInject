int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    int VAR6;
    if (!VAR5)
        return -VAR7;
    if (!VAR5->VAR8)
        return -VAR9;
    if (VAR2->VAR10)
        return -VAR11;
    VAR6 = VAR5->FUN1(VAR2, VAR3);
    if (VAR6 == 0)
    {
        VAR6 = FUN2(VAR2, VAR3 >> VAR12);
        FUN3(VAR2);
        FUN4(VAR2);
    }
    return VAR6;