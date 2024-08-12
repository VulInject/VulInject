static int FUN1(const VAR1 *VAR2)
{
    uint64_t VAR3 = VAR2[0];
    uint64_t VAR4 = VAR2[1];
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    if (FUN2(VAR3, &VAR10, &VAR7, &VAR8, &VAR9))
    {
        return -VAR11;
    }
    VAR6 = FUN3(VAR10, VAR7, VAR8, VAR9);
    if (!VAR6 || !FUN4(VAR6))
    {
        return -VAR11;
    }
    if (VAR4 >= VAR12)
    {
        return -VAR11;
    }
    FUN5(FUN6(VAR6), VAR4);
    return 0;
}