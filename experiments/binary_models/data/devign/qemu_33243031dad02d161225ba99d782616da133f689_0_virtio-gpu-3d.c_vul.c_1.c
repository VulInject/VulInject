static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct virtio_gpu_resource_attach_backing VAR5;
    struct VAR6 *VAR7;
    int VAR8;
    FUN2(VAR5);
    FUN3(VAR5.VAR9);
    VAR8 = FUN4(&VAR5, VAR4, NULL, &VAR7);
    if (VAR8 != 0)
    {
        VAR4->VAR10 = VAR11;
        return;
    }
    FUN5(VAR5.VAR9, VAR7, VAR5.VAR12);
}