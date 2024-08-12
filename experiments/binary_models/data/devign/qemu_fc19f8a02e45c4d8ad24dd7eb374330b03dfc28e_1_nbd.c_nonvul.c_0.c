static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct nbd_request VAR11;
    struct nbd_reply VAR12;
    ssize_t VAR13;
    VAR11.VAR14 = VAR15;
    if (!FUN2(VAR2) && (VAR9->VAR16 & VAR17))
    {
        VAR11.VAR14 |= VAR18;
    }
    VAR11.VAR19 = VAR3 * 512;
    VAR11.VAR20 = VAR4 * 512;
    FUN3(VAR9, &VAR11);
    VAR13 = FUN4(VAR9, &VAR11, VAR6->VAR21, VAR7);
    if (VAR13 < 0)
    {
        VAR12.VAR22 = VAR23;
    }
    else
    {
        FUN5(VAR9, &VAR11, &VAR12, NULL, 0);
    }
    FUN6(VAR9, &VAR11);
    return -VAR12.VAR22;
}