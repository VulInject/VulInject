static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    struct vhost_vring_file VAR6 = {};
    int VAR7;
    VAR2->VAR4.VAR8 = 2;
    VAR2->VAR4.VAR9 = VAR2->VAR9;
    VAR2->VAR4.VAR5 = VAR5;
    VAR7 = FUN2(&VAR2->VAR4, VAR4);
    if (VAR7 < 0)
    {
        goto VAR10;
    }
    VAR7 = FUN3(&VAR2->VAR4, VAR4);
    if (VAR7 < 0)
    {
        goto VAR11;
    }
    if (VAR2->VAR12->VAR13->VAR14)
    {
        VAR2->VAR12->VAR13->FUN4(VAR2->VAR12, false);
    }
    if (VAR2->VAR12->VAR13->VAR15 == VAR16)
    {
        FUN5(VAR2->VAR17, NULL, NULL, NULL);
        VAR6.VAR18 = VAR2->VAR17;
        for (VAR6.VAR19 = 0; VAR6.VAR19 < VAR2->VAR4.VAR8; ++VAR6.VAR19)
        {
            const VAR20 *VAR21 = VAR2->VAR4.VAR21;
            VAR7 = VAR21->FUN6(&VAR2->VAR4, VAR22, &VAR6);
            if (VAR7 < 0)
            {
                VAR7 = -VAR23;
                goto VAR24;
            }
        }
    }
    return 0;
VAR24:
    VAR6.VAR18 = -1;
    if (VAR2->VAR12->VAR13->VAR15 == VAR16)
    {
        while (VAR6.VAR19-- > 0)
        {
            const VAR20 *VAR21 = VAR2->VAR4.VAR21;
            int VAR7 = VAR21->FUN6(&VAR2->VAR4, VAR22, &VAR6);
            assert(VAR7 >= 0);
        }
    }
    if (VAR2->VAR12->VAR13->VAR14)
    {
        VAR2->VAR12->VAR13->FUN4(VAR2->VAR12, true);
    }
    FUN7(&VAR2->VAR4, VAR4);
VAR11:
    FUN8(&VAR2->VAR4, VAR4);
VAR10:
    return VAR7;
}