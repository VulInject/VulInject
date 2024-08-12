static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct virtio_balloon_config VAR7;
    uint32_t VAR8 = VAR6->VAR9;
    memcpy(&VAR7, VAR4, 8);
    VAR6->VAR9 = FUN3(VAR7.VAR9);
    if (VAR6->VAR9 != VAR8)
    {
        FUN4(VAR10 - (VAR6->VAR9 << VAR11));
    }
}