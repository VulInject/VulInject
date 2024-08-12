static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct virtio_gpu_get_capset_info VAR5;
    struct virtio_gpu_resp_capset_info VAR6;
    FUN2(VAR5);
    if (VAR5.VAR7 == 0)
    {
        VAR6.VAR8 = VAR9;
        FUN3(VAR6.VAR8, &VAR6.VAR10, &VAR6.VAR11);
    }
    else
    {
        VAR6.VAR10 = 0;
        VAR6.VAR11 = 0;
    }
    VAR6.VAR12.VAR13 = VAR14;
    FUN4(VAR2, VAR4, &VAR6.VAR12, sizeof(VAR6));