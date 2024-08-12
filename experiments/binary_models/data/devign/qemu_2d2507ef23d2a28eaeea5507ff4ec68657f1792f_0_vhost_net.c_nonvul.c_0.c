static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    struct vhost_vring_file VAR5 = {.VAR6 = -1};
    if (VAR2->VAR7->VAR8->VAR9 == VAR10)
    {
        for (VAR5.VAR11 = 0; VAR5.VAR11 < VAR2->VAR4.VAR12; ++VAR5.VAR11)
        {
            const VAR13 *VAR14 = VAR2->VAR4.VAR14;
            int VAR15 = VAR14->FUN2(&VAR2->VAR4, VAR16, &VAR5);
            assert(VAR15 >= 0);
        }
    }
    if (VAR2->VAR7->VAR8->VAR17)
    {
        VAR2->VAR7->VAR8->FUN3(VAR2->VAR7, true);
    }
    FUN4(&VAR2->VAR4, VAR4);
    FUN5(&VAR2->VAR4, VAR4);
}