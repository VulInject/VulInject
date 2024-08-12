static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    int VAR6 = VAR2->VAR7->FUN2(VAR2, VAR5);
    struct vhost_vring_file VAR8 = {
        .VAR9 = VAR6,
    };
    int VAR10 = FUN3(&VAR4->VAR11, 0);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    VAR8.VAR12 = FUN4(&VAR4->VAR11);
    VAR10 = VAR2->VAR7->FUN5(VAR2, VAR13, &VAR8);
    if (VAR10)
    {
        VAR10 = -VAR14;
        goto VAR15;
    }
    return 0;
VAR15:
    FUN6(&VAR4->VAR11);
    return VAR10;
}