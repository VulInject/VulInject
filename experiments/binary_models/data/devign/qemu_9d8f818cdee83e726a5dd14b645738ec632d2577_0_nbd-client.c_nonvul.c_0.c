int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    NBDRequest VAR7 = {
        .VAR8 = VAR9,
        .VAR10 = VAR3,
        .VAR11 = VAR4,
    };
    assert(!(VAR6->VAR12.VAR13 & VAR14));
    if (!(VAR6->VAR12.VAR13 & VAR15) || !VAR4)
    {
        return 0;
    }
    return FUN3(VAR2, &VAR7, NULL);
}