FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    struct virtio_gpu_resource_attach_backing VAR7;
    int VAR8;
    FUN2(VAR7);
    FUN3(VAR7.VAR9);
    VAR6 = FUN4(VAR2, VAR7.VAR9);
    if (!VAR6)
    {
        FUN5(VAR10, "", VAR11, VAR7.VAR9);
        VAR4->VAR12 = VAR13;
        VAR8 = FUN6(&VAR7, VAR4, &VAR6->VAR14, &VAR6->VAR15);
        if (VAR8 != 0)
        {
            VAR6->VAR16 = VAR7.VAR17