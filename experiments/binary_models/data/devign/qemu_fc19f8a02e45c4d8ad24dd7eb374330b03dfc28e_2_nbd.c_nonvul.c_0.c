static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct nbd_request VAR11;
    struct nbd_reply VAR12;
    ssize_t VAR13;
    VAR11.VAR14 = VAR15;
    VAR11.VAR16 = VAR3 * 512;
    VAR11.VAR17 = VAR4 * 512;
    FUN2(VAR9, &VAR11);
    VAR13 = FUN3(VAR9, &VAR11, NULL, 0);
    if (VAR13 < 0)
    {
        VAR12.VAR18 = VAR19;
    }
    else
    {
        FUN4(VAR9, &VAR11, &VAR12, VAR6->VAR20, VAR7);
    }
    FUN5(VAR9, &VAR11);
    return -VAR12.VAR18;
}