int FUN1(VAR1 *VAR2)
{
    struct nbd_request VAR3;
    struct nbd_reply VAR4;
    ssize_t VAR5;
    if (!(VAR2->VAR6 & VAR7))
    {
        return 0;
    }
    VAR3.VAR8 = VAR9;
    if (VAR2->VAR6 & VAR10)
    {
        VAR3.VAR8 |= VAR11;
    }
    VAR3.VAR12 = 0;
    VAR3.VAR13 = 0;
    FUN2(VAR2, &VAR3);
    VAR5 = FUN3(VAR2, &VAR3, NULL, 0);
    if (VAR5 < 0)
    {
        VAR4.VAR14 = -VAR5;
    }
    else
    {
        FUN4(VAR2, &VAR3, &VAR4, NULL, 0);
    }
    FUN5(VAR2, &VAR3);
    return -VAR4.VAR14;
}