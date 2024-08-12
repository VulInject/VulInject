static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11;
    abi_ulong VAR12 = FUN2(VAR3, VAR9, sizeof(*VAR11));
    struct target_sigaltstack VAR13;
    int VAR14;
    abi_ulong VAR15, VAR16;
    if (!FUN3(VAR17, VAR11, VAR12, 0))
        return;
    VAR15 = VAR12 + FUN4(struct VAR10, VAR5);
    FUN5(VAR15, &VAR11->VAR18);
    VAR16 = VAR12 + FUN4(struct VAR10, VAR19);
    FUN5(VAR16, &VAR11->VAR20);
    FUN6(&VAR11->VAR5, VAR5);
    memset(&VAR11->VAR19, 0, FUN4(struct VAR21, VAR22));
    memset(&VAR13, 0, sizeof(VAR13));
    FUN5(VAR23.VAR24, &VAR13.VAR24);
    FUN5(VAR23.VAR25, &VAR13.VAR25);
    FUN5(FUN7(FUN8(VAR9)), &VAR13.VAR26);
    memcpy(&VAR11->VAR19.VAR27, &VAR13, sizeof(VAR13));
    FUN9(&VAR11->VAR19.VAR22, VAR9, VAR7->VAR28[0]);
    for (VAR14 = 0; VAR14 < VAR29; VAR14++)
    {
        if (FUN5(VAR7->VAR28[VAR14], &VAR11->VAR19.VAR30.VAR28[VAR14]))
            goto VAR31;
    }
    FUN10(VAR9, VAR3, &VAR11->VAR32, VAR12, VAR1, VAR12 + FUN4(struct VAR10, VAR32));
    VAR9->VAR33[1] = VAR15;
    VAR9->VAR33[2] = VAR16;
VAR31:
    FUN11(VAR11, VAR12, 1);
}