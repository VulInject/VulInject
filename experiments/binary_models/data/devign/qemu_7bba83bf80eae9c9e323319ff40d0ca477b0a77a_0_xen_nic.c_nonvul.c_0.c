static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    struct VAR7 *VAR8 = FUN2(VAR3);
    netif_rx_request_t VAR9;
    RING_IDX VAR10, VAR11;
    void *VAR12;
    if (VAR8->VAR13.VAR14 != VAR15)
    {
        return -1;
    }
    VAR10 = VAR8->VAR16.VAR17;
    VAR11 = VAR8->VAR16.VAR18->VAR19;
    FUN3();
    if (VAR10 == VAR11 || FUN4(&VAR8->VAR16, VAR10))
    {
        return 0;
    }
    if (VAR6 > VAR20 - VAR21)
    {
        FUN5(&VAR8->VAR13, 0, "", (unsigned long)VAR6, VAR20 - VAR21);
        return -1;
    }
    memcpy(&VAR9, FUN6(&VAR8->VAR16, VAR10), sizeof(VAR9));
    VAR8->VAR16.VAR17 = ++VAR10;
    VAR12 = FUN7(VAR8->VAR13.VAR22, VAR8->VAR13.VAR23, VAR9.VAR24, VAR25);
    if (VAR12 == NULL)
    {
        FUN5(&VAR8->VAR13, 0, "", VAR9.VAR24);
        FUN8(VAR8, &VAR9, VAR26, 0, 0, 0);
        return -1;
    }
    memcpy(VAR12 + VAR21, VAR5, VAR6);
    FUN9(VAR8->VAR13.VAR22, VAR12, 1);
    FUN8(VAR8, &VAR9, VAR27, VAR21, VAR6, 0);
    return VAR6;
}