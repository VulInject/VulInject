int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, BdrvRequestFlags VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    NBDRequest VAR8 = {
        .VAR9 = VAR10,
        .VAR11 = VAR3,
        .VAR12 = VAR4,
    };
    if (!(VAR7->VAR13.VAR5 & VAR14))
    {
        return -VAR15;
    }
    if (VAR5 & VAR16)
    {
        assert(VAR7->VAR13.VAR5 & VAR17);
        VAR8.VAR5 |= VAR18;
    }
    if (!(VAR5 & VAR19))
    {
        VAR8.VAR5 |= VAR20;
    }
    return FUN3(VAR2, &VAR8, NULL);