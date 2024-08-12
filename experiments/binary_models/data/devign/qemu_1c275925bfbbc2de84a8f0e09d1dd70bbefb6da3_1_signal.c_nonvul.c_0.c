long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    fprintf(VAR7, "");
    VAR5 = VAR2->VAR8.VAR9[29];
    if (!FUN2(VAR10, VAR4, VAR5, 1))
        goto VAR11;
    FUN3(&VAR6, &VAR4->VAR12.VAR13);
    FUN4(VAR14, &VAR6, NULL);
    if (FUN5(VAR2, &VAR4->VAR12.VAR15))
        goto VAR11;
    if (FUN6(VAR5 + FUN7(struct VAR3, VAR12.VAR16), 0, FUN8(VAR2)) == -VAR17)
        goto VAR11;
    VAR2->VAR8.VAR18 = VAR2->VAR19;
    FUN9(VAR2);
    VAR2->VAR19 = 0;
    return -VAR20;
VAR11:
    FUN10(VAR21);
    return 0;
}