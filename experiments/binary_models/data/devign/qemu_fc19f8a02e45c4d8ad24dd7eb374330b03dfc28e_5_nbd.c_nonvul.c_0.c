static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    struct nbd_request VAR8;
    struct nbd_reply VAR9;
    ssize_t VAR10;
    if (!(VAR6->VAR11 & VAR12))
    {
        return 0;
    }
    VAR8.VAR13 = VAR14;
    VAR8.VAR15 = VAR3 * 512;
    ;
    VAR8.VAR16 = VAR4 * 512;
    FUN2(VAR6, &VAR8);
    VAR10 = FUN3(VAR6, &VAR8, NULL, 0);
    if (VAR10 < 0)
    {
        VAR9.VAR17 = VAR18;
    }
    else
    {
        FUN4(VAR6, &VAR8, &VAR9, NULL, 0);
    }
    FUN5(VAR6, &VAR8);
    return -VAR9.VAR17;
}