int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    struct vhost_vring_file VAR5 = {};
    int VAR6;
    if (VAR2->VAR4.VAR7 & (1 << VAR8))
    {
        FUN2(VAR2->VAR9, sizeof(struct VAR10));
    }
    VAR2->VAR4.VAR11 = 2;
    VAR2->VAR4.VAR12 = VAR2->VAR12;
    VAR6 = FUN3(&VAR2->VAR4, VAR4);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR2->VAR9->VAR13->FUN4(VAR2->VAR9, false);
    FUN5(VAR2->VAR14, NULL, NULL, NULL);
    VAR5.VAR15 = VAR2->VAR14;
    for (VAR5.VAR16 = 0; VAR5.VAR16 < VAR2->VAR4.VAR11; ++VAR5.VAR16)
    {
        VAR6 = FUN6(VAR2->VAR4.VAR17, VAR18, &VAR5);
        if (VAR6 < 0)
        {
            VAR6 = -VAR19;
            goto VAR20;
        }
    }
    return 0;
VAR20:
    VAR5.VAR15 = -1;
    while (VAR5.VAR16-- > 0)
    {
        int VAR6 = FUN6(VAR2->VAR4.VAR17, VAR18, &VAR5);
        assert(VAR6 >= 0);
    }
    VAR2->VAR9->VAR13->FUN4(VAR2->VAR9, true);
    FUN7(&VAR2->VAR4, VAR4);
    if (VAR2->VAR4.VAR7 & (1 << VAR8))
    {
        FUN2(VAR2->VAR9, sizeof(struct VAR21));
    }
    return VAR6;
}