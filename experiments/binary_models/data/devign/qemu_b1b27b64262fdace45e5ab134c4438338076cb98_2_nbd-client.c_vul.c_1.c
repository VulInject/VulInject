static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    struct nbd_request VAR8;
    struct nbd_reply VAR9;
    ssize_t VAR10;
    VAR8.VAR11 = VAR12;
    VAR8.VAR13 = VAR3 * 512;
    VAR8.VAR14 = VAR4 * 512;
    FUN2(VAR2, &VAR8);
    VAR10 = FUN3(VAR2, &VAR8, NULL, 0);
    if (VAR10 < 0)
    {
        VAR9.VAR15 = -VAR10;
    }
    else
    {
        FUN4(VAR2, &VAR8, &VAR9, VAR6, VAR7);
    }
    FUN5(VAR2, &VAR8);
    return -VAR9.VAR15;
}