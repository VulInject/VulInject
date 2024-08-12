static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_blk_config VAR7;
    memcpy(&VAR7, VAR4, sizeof(VAR7));
    FUN3(FUN4(VAR6->VAR8));
    FUN5(VAR6->VAR8, VAR7.VAR9 != 0);
    FUN6(FUN4(VAR6->VAR8));
}