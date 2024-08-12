static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    size_t VAR9;
    struct virtio_gpu_update_cursor VAR10;
    if (!FUN3(VAR4))
    {
        return;
    }
    for (;;)
    {
        VAR8 = FUN4(VAR4, sizeof(VAR7));
        if (!VAR8)
        {
            break;
        }
        VAR9 = FUN5(VAR8->VAR11, VAR8->VAR12, 0, &VAR10, sizeof(VAR10));
        if (VAR9 != sizeof(VAR10))
        {
            FUN6(VAR13, "", VAR14, VAR9, sizeof(VAR10));
        }
        else
        {
            FUN7(VAR6, &VAR10);
        }
        FUN8(VAR4, VAR8, 0);
        FUN9(VAR2, VAR4);
        FUN10(VAR8);
    }
}