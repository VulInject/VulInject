static int FUN1(ulong VAR1, void *VAR2, int VAR3)
{
    struct virtio_blk_outhdr VAR4;
    u8 VAR5;
    int VAR6;
    VAR4.VAR7 = VAR8;
    VAR4.VAR9 = 99;
    VAR4.VAR1 = VAR1;
    FUN2(&VAR10, &VAR4, sizeof(VAR4), VAR11);
    FUN2(&VAR10, VAR2, VAR12 * VAR3, VAR13 | VAR14 | VAR11);
    FUN2(&VAR10, &VAR5, sizeof(VAR15), VAR13 | VAR14);
    FUN3(&VAR10, 0);
    VAR6 = FUN4(VAR10.VAR16);
    if (VAR6)
    {
        VAR5 = 1;
    }
    return VAR5;
}