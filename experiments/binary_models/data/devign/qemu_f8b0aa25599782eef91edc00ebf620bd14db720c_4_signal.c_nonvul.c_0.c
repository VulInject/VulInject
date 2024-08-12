static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11;
    abi_ulong VAR12 = FUN2(VAR3, VAR9, sizeof(*VAR11));
    struct target_sigaltstack VAR13;
    int VAR14, VAR15 = 0;
    abi_ulong VAR16, VAR17;
    if (!FUN3(VAR18, VAR11, VAR12, 0))
        return;
    VAR16 = VAR12 + FUN4(struct VAR10, VAR5);
    FUN5(VAR16, &VAR11->VAR19, VAR15);
    VAR17 = VAR12 + FUN4(struct VAR10, VAR20);
    FUN5(VAR17, &VAR11->VAR21, VAR15);
    VAR15 |= FUN6(&VAR11->VAR5, VAR5);
    memset(&VAR11->VAR20, 0, FUN4(struct VAR22, VAR23));
    memset(&VAR13, 0, sizeof(VAR13));
    FUN7(VAR24.VAR25, &VAR13.VAR25);
    FUN7(VAR24.VAR26, &VAR13.VAR26);
    FUN7(FUN8(FUN9(VAR9)), &VAR13.VAR27);
    memcpy(&VAR11->VAR20.VAR28, &VAR13, sizeof(VAR13));
    VAR15 |= FUN10(&VAR11->VAR20.VAR23, VAR9, VAR7->VAR29[0]);
    for (VAR14 = 0; VAR14 < VAR30; VAR14++)
    {
        if (FUN7(VAR7->VAR29[VAR14], &VAR11->VAR20.VAR31.VAR29[VAR14]))
            goto VAR32;
    }
    if (VAR15 == 0)
        VAR15 = FUN11(VAR9, VAR3, &VAR11->VAR33, VAR12, VAR1, VAR12 + FUN4(struct VAR10, VAR33));
    if (VAR15 == 0)
    {
        VAR9->VAR34[1] = VAR16;
        VAR9->VAR34[2] = VAR17;
    }
VAR32:
    FUN12(VAR11, VAR12, 1);
}