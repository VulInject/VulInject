static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_net_config VAR7 = {};
    memcpy(&VAR7, VAR4, VAR6->VAR8);
    if (!FUN3(VAR2, VAR9) && memcmp(VAR7.VAR10, VAR6->VAR10, VAR11))
    {
        memcpy(VAR6->VAR10, VAR7.VAR10, VAR11);
        FUN4(FUN5(VAR6->VAR12), VAR6->VAR10);
    }
}