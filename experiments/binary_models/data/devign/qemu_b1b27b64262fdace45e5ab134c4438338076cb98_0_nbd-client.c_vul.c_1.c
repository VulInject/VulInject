static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    struct nbd_request VAR8;
    struct nbd_reply VAR9;
    ssize_t VAR10;
    VAR8.VAR11 = VAR12;
    if (!FUN2(VAR2->VAR13) && (VAR2->VAR14 & VAR15))
    {
        VAR8.VAR11 |= VAR16;
    }
    VAR8.VAR17 = VAR3 * 512;
    VAR8.VAR18 = VAR4 * 512;
    FUN3(VAR2, &VAR8);
    VAR10 = FUN4(VAR2, &VAR8, VAR6, VAR7);
    if (VAR10 < 0)
    {
        VAR9.VAR19 = -VAR10;
    }
    else
    {
        FUN5(VAR2, &VAR8, &VAR9, NULL, 0);
    }
    FUN6(VAR2, &VAR8);
    return -VAR9.VAR19;
}