int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    NBDRequest VAR10 = {
        .VAR11 = VAR12,
        .VAR13 = VAR3,
        .VAR14 = VAR4,
    };
    if (VAR7 & VAR15)
    {
        assert(VAR9->VAR16.VAR7 & VAR17);
        VAR10.VAR7 |= VAR18;
    }
    assert(VAR4 <= VAR19);
    return FUN3(VAR2, &VAR10, VAR6);