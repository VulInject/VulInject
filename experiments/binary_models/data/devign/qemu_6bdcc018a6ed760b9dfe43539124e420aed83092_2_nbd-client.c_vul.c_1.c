int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    NBDRequest VAR7 = {
        .VAR8 = VAR9,
        .VAR10 = VAR3,
        .VAR11 = VAR4,
    };
    NBDReply VAR12;
    ssize_t VAR13;
    if (!(VAR6->VAR14 & VAR15))
    {
        return 0;
    }
    FUN3(VAR6, &VAR7);
    VAR13 = FUN4(VAR2, &VAR7, NULL);
    if (VAR13 < 0)
    {
        VAR12.VAR16 = -VAR13;
    }
    else
    {
        FUN5(VAR6, &VAR7, &VAR12, NULL);
    }
    FUN6(VAR2, &VAR7);
    return -VAR12.VAR16;
}