static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct virtio_gpu_get_capset VAR5;
    struct VAR6 *VAR7;
    uint32_t VAR8, VAR9;
    FUN2(VAR5);
    FUN3(VAR5.VAR10, &VAR8, &VAR9);
    if (!VAR9)
    {
        VAR4->VAR11 = VAR12;
        return;
    }
    VAR7 = FUN4(sizeof(*VAR7) + VAR9);
    VAR7->VAR13.VAR14 = VAR15;
    FUN5(VAR5.VAR10, VAR5.VAR16, (void *)VAR7->VAR17);
    FUN6(VAR2, VAR4, &VAR7->VAR13, sizeof(*VAR7) + VAR9);
    FUN7(VAR7);
}