int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, BdrvRequestFlags VAR5)
{
    ssize_t VAR6;
    VAR7 *VAR8 = FUN2(VAR2);
    NBDRequest VAR9 = {
        .VAR10 = VAR11,
        .VAR12 = VAR3,
        .VAR13 = VAR4,
    };
    NBDReply VAR14;
    if (!(VAR8->VAR15 & VAR16))
    {
        return -VAR17;
    }
    if (VAR5 & VAR18)
    {
        assert(VAR8->VAR15 & VAR19);
        VAR9.VAR5 |= VAR20;
    }
    if (!(VAR5 & VAR21))
    {
        VAR9.VAR5 |= VAR22;
    }
    FUN3(VAR8, &VAR9);
    VAR6 = FUN4(VAR2, &VAR9, NULL);
    if (VAR6 < 0)
    {
        VAR14.VAR23 = -VAR6;
    }
    else
    {
        FUN5(VAR8, &VAR9, &VAR14, NULL);
    }
    FUN6(VAR2, &VAR9);
    return -VAR14.VAR23;
}