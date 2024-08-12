static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, unsigned VAR7)
{
    int VAR8 = VAR2->VAR9->FUN2(VAR2, VAR7);
    struct vhost_vring_state VAR10 = {
        .VAR11 = VAR8,
    };
    int VAR12;
    VAR12 = VAR2->VAR9->FUN3(VAR2, &VAR10);
    if (VAR12 < 0)
    {
        FUN4("", VAR7, VAR12);
    }
    else
    {
        FUN5(VAR4, VAR7, VAR10.VAR13);
    }
    FUN6(VAR4, VAR7);
    FUN7(VAR4, VAR7);