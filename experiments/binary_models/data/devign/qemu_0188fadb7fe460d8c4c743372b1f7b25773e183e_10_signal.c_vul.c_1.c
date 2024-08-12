static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11;
    abi_ulong VAR12;
    abi_ulong VAR13;
    abi_ulong VAR14;
    abi_ulong VAR15;
    int VAR16 = 0;
    int VAR17;
    VAR12 = FUN2(VAR3, VAR9, sizeof *VAR11);
    if (!FUN3(VAR18, VAR11, VAR12, 0))
        goto VAR19;
    FUN4(VAR1, &VAR11->VAR1);
    VAR14 = VAR12 + FUN5(struct VAR10, VAR5);
    FUN4(VAR14, &VAR11->VAR20);
    VAR15 = VAR12 + FUN5(struct VAR10, VAR21);
    FUN4(VAR15, &VAR11->VAR22);
    FUN6(&VAR11->VAR5, VAR5);
    FUN4(0, &VAR11->VAR21.VAR23);
    FUN4(0, &VAR11->VAR21.VAR24);
    FUN4(VAR25.VAR26, &VAR11->VAR21.VAR27.VAR26);
    FUN4(FUN7(VAR9->VAR28[7]), &VAR11->VAR21.VAR27.VAR29);
    FUN4(VAR25.VAR30, &VAR11->VAR21.VAR27.VAR30);
    VAR16 |= FUN8(&VAR11->VAR21, VAR9);
    if (VAR16)
        goto VAR19;
    for (VAR17 = 0; VAR17 < VAR31; VAR17++)
    {
        if (FUN4(VAR7->VAR1[VAR17], &VAR11->VAR21.VAR32.VAR1[VAR17]))
            goto VAR19;
    }
    VAR13 = VAR12 + FUN5(struct VAR33, VAR34);
    FUN4(VAR13, &VAR11->VAR35);
    FUN4(0x70004600 + ((VAR36 ^ 0xff) << 16), (long *)(VAR11->VAR34 + 0));
    FUN4(0x4e40, (short *)(VAR11->VAR34 + 4));
    if (VAR16)
        goto VAR19;
    VAR9->VAR28[7] = VAR12;
    VAR9->VAR37 = VAR3->VAR38;
    FUN9(VAR11, VAR12, 1);
    return;
VAR19:
    FUN9(VAR11, VAR12, 1);
    FUN10(VAR39);
}