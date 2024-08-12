static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    target_ulong VAR8;
    sigset_t VAR9;
    target_sigset_t VAR10;
    if (FUN2(&VAR10, FUN3(VAR2) + FUN4(struct VAR1, VAR11), sizeof(VAR10)))
        return 1;
    fprintf(VAR12, "");
    return 0;
    if (FUN5(VAR8, &VAR2->VAR13))
        return 1;
    if (!FUN6(VAR14, VAR7, VAR8, 1))
        return 1;
    FUN7(&VAR9, &VAR10);
    FUN8(VAR15, &VAR9, NULL);
    FUN9(VAR4, VAR7, VAR5);
    FUN10(VAR7, VAR8, 1);
    return 0;
}