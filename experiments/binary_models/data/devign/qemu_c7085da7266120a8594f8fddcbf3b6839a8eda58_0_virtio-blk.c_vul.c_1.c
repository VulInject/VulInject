static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_blk_config VAR7;
    uint64_t VAR8;
    int VAR9, VAR10, VAR11;
    FUN3(VAR6->VAR12, &VAR8);
    FUN4(VAR6->VAR12, &VAR9, &VAR10, &VAR11);
    FUN5(&VAR7.VAR8, VAR8);
    FUN6(&VAR7.VAR13, 128 - 2);
    FUN7(&VAR7.VAR9, VAR9);
    VAR7.VAR10 = VAR10;
    VAR7.VAR14 = VAR11;
    memcpy(VAR4, &VAR7, sizeof(VAR7));