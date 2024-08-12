static void FUN1(struct VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR4->VAR7;
    struct VAR8 *VAR9;
    VAR9 = FUN2(sizeof(*VAR9));
    VAR9->VAR10 = 1;
    FUN3(&VAR9->VAR11, VAR6, 0);
    FUN4(&VAR9->VAR11.VAR12, VAR4);
    FUN5(&VAR9->VAR13[0], "", VAR14, sizeof(VAR9->VAR11), &VAR9->VAR11);
    FUN6(&VAR2->VAR15, VAR9, VAR16);
    VAR2->VAR17 += FUN7(&VAR9->VAR13[0]);
}