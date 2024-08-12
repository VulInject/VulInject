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
        fprintf(VAR13, "", VAR7, VAR12);
        FUN4(VAR13);
    }
    FUN5(VAR4, VAR7, VAR10.VAR14);
    FUN6(VAR4, VAR7);
    if (FUN7(VAR4))
    {
        VAR12 = FUN8(VAR2, !FUN9(VAR4), VAR8);
        if (VAR12 < 0)
        {
            FUN10("");
        }
    }
    assert(VAR12 >= 0);
    FUN11(VAR6->VAR15, FUN12(VAR4, VAR7), 0, FUN12(VAR4, VAR7));
    FUN11(VAR6->VAR16, FUN13(VAR4, VAR7), 1, FUN13(VAR4, VAR7));
    FUN11(VAR6->VAR17, FUN14(VAR4, VAR7), 0, FUN14(VAR4, VAR7));
    FUN11(VAR6->VAR18, FUN15(VAR4, VAR7), 0, FUN15(VAR4, VAR7));
}