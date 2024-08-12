int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    struct nbd_request VAR5;
    struct nbd_reply VAR6;
    ssize_t VAR7;
    if (!(VAR2->VAR8 & VAR9))
    {
        return 0;
    }
    VAR5.VAR10 = VAR11;
    VAR5.VAR12 = VAR3 * 512;
    VAR5.VAR13 = VAR4 * 512;
    FUN2(VAR2, &VAR5);
    VAR7 = FUN3(VAR2, &VAR5, NULL, 0);
    if (VAR7 < 0)
    {
        VAR6.VAR14 = -VAR7;
    }
    else
    {
        FUN4(VAR2, &VAR5, &VAR6, NULL, 0);
    }
    FUN5(VAR2, &VAR5);
    return -VAR6.VAR14;
}