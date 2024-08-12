static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    struct vhost_vring_file VAR5 = {};
    int VAR6;
    VAR2->VAR4.VAR7 = 2;
    VAR2->VAR4.VAR8 = VAR2->VAR8;
    VAR6 = FUN2(&VAR2->VAR4, VAR4);
    if (VAR6 < 0)
    {
        goto VAR9;
    }
    VAR6 = FUN3(&VAR2->VAR4, VAR4);
    if (VAR6 < 0)
    {
        goto VAR10;
    }
    if (VAR2->VAR11->VAR12->VAR13)
    {
        VAR2->VAR11->VAR12->FUN4(VAR2->VAR11, false);
    }
    if (VAR2->VAR11->VAR12->VAR14 == VAR15)
    {
        FUN5(VAR2->VAR16, NULL, NULL, NULL);
        VAR5.VAR17 = VAR2->VAR16;
        for (VAR5.VAR18 = 0; VAR5.VAR18 < VAR2->VAR4.VAR7; ++VAR5.VAR18)
        {
            const VAR19 *VAR20 = VAR2->VAR4.VAR20;
            VAR6 = VAR20->FUN6(&VAR2->VAR4, &VAR5);
            if (VAR6 < 0)
            {
                VAR6 = -VAR21;
                goto VAR22;
            }
        }
    }
    return 0;
VAR22:
    VAR5.VAR17 = -1;
    if (VAR2->VAR11->VAR12->VAR14 == VAR15)
    {
        while (VAR5.VAR18-- > 0)
        {
            const VAR19 *VAR20 = VAR2->VAR4.VAR20;
            int VAR6 = VAR20->FUN6(&VAR2->VAR4, &VAR5);
            assert(VAR6 >= 0);
        }
    }
    if (VAR2->VAR11->VAR12->VAR13)
    {
        VAR2->VAR11->VAR12->FUN4(VAR2->VAR11, true);
    }
    FUN7(&VAR2->VAR4, VAR4);
VAR10:
    FUN8(&VAR2->VAR4, VAR4);
VAR9:
    return VAR6;
}