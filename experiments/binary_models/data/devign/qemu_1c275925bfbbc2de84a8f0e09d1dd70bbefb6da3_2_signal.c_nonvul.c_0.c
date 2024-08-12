long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = NULL;
    struct VAR5 *VAR6 = NULL;
    target_ulong VAR7 = 0, VAR8;
    sigset_t VAR9;
    target_sigset_t VAR10;
    VAR8 = VAR2->VAR11[1] + VAR12;
    if (!FUN2(VAR13, VAR4, VAR8, 1))
        goto VAR14;
    VAR10.VAR15[0] = VAR4->VAR16 + ((long)(VAR4->VAR17[3]) << 32);
    if (FUN3(VAR10.VAR15[0], &VAR4->VAR16) || FUN3(VAR10.VAR15[1], &VAR4->VAR17[3]))
        goto VAR14;
    FUN4(&VAR9, &VAR10);
    FUN5(VAR18, &VAR9, NULL);
    if (FUN3(VAR7, &VAR4->VAR19))
        goto VAR14;
    if (!FUN2(VAR13, VAR6, VAR7, 1))
        goto VAR14;
    if (FUN6(VAR2, VAR6, 1))
        goto VAR14;
    FUN7(VAR6, VAR7, 1);
    FUN7(VAR4, VAR8, 1);
    return -VAR20;
VAR14:
    FUN7(VAR6, VAR7, 1);
    FUN7(VAR4, VAR8, 1);
    FUN8("");
    FUN9(VAR21);
    return 0;
}