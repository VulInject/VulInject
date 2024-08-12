void FUN1(struct subchannel_id VAR1)
{
    struct vq_info_block VAR2;
    struct vq_config_block VAR3 = {};
    FUN2(VAR1);
    VAR3.VAR4 = 0;
    if (FUN3(VAR1, VAR5, &VAR3, sizeof(VAR3)))
    {
        FUN4("");
    }
    FUN5(&VAR6, VAR3.VAR7, (void *)(100 * 1024 * 1024), VAR8);
    VAR2.VAR9 = (100ULL * 1024ULL * 1024ULL);
    VAR2.VAR10 = VAR8;
    VAR2.VAR4 = 0;
    VAR2.VAR7 = VAR3.VAR7;
    VAR6.VAR1 = VAR1;
    if (!FUN3(VAR1, VAR11, &VAR2, sizeof(VAR2)))
    {
        FUN6(VAR1, VAR12);
    }
}