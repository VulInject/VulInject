void FUN1(struct subchannel_id VAR1)
{
    struct vq_info_block VAR2;
    struct vq_config_block VAR3 = {};
    VAR4.VAR5 = 0;
    VAR6 = false;
    FUN2(VAR1);
    VAR3.VAR7 = 0;
    if (FUN3(VAR1, VAR8, &VAR3, sizeof(VAR3)))
    {
        FUN4("");
    }
    if (FUN3(VAR1, VAR9, &VAR4, sizeof(VAR4)))
    {
        FUN4("");
    }
    FUN5(&VAR10, VAR3.VAR11, VAR12, VAR13);
    VAR2.VAR14 = (unsigned long long)VAR12;
    VAR2.VAR15 = VAR13;
    VAR2.VAR7 = 0;
    VAR2.VAR11 = VAR3.VAR11;
    VAR10.VAR1 = VAR1;
    if (!FUN3(VAR1, VAR16, &VAR2, sizeof(VAR2)))
    {
        FUN6(VAR1, VAR17);
    }
    if (!FUN7())
    {
        memset(&VAR4, 0, sizeof(VAR4));
        FUN8();
    }
}