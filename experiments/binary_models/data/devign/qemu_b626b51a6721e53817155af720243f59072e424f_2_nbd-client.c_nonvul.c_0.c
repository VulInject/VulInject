int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    struct nbd_request VAR10 = {
        .VAR11 = VAR12,
        .VAR13 = VAR3,
        .VAR14 = VAR4,
    };
    struct nbd_reply VAR15;
    ssize_t VAR16;
    if (VAR7 & VAR17)
    {
        assert(VAR9->VAR18 & VAR19);
        VAR10.VAR7 |= VAR20;
    }
    assert(VAR4 <= VAR21);
    FUN3(VAR9, &VAR10);
    VAR16 = FUN4(VAR2, &VAR10, VAR6);
    if (VAR16 < 0)
    {
        VAR15.VAR22 = -VAR16;
    }
    else
    {
        FUN5(VAR9, &VAR10, &VAR15, NULL);
    }
    FUN6(VAR9, &VAR10);
    return -VAR15.VAR22;
}