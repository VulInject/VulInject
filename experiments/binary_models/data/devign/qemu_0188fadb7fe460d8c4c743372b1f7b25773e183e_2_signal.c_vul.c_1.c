static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10;
    abi_ulong VAR11;
    abi_ulong VAR12;
    int VAR13 = 0;
    int VAR14;
    VAR10 = FUN2(VAR3, VAR7, sizeof *VAR9);
    if (!FUN3(VAR15, VAR9, VAR10, 0))
        goto VAR16;
    FUN4(VAR1, &VAR9->VAR1);
    VAR12 = VAR10 + FUN5(struct VAR8, VAR17);
    FUN4(VAR12, &VAR9->VAR18);
    FUN6(&VAR9->VAR17, VAR7, VAR5->VAR1[0]);
    for (VAR14 = 1; VAR14 < VAR19; VAR14++)
    {
        if (FUN4(VAR5->VAR1[VAR14], &VAR9->VAR20[VAR14 - 1]))
            goto VAR16;
    }
    VAR11 = VAR10 + FUN5(struct VAR8, VAR21);
    FUN4(VAR11, &VAR9->VAR22);
    FUN4(0x70004e40 + (VAR23 << 16), (long *)(VAR9->VAR21));
    if (VAR13)
        goto VAR16;
    VAR7->VAR24[7] = VAR10;
    VAR7->VAR25 = VAR3->VAR26;
    FUN7(VAR9, VAR10, 1);
    return;
VAR16:
    FUN7(VAR9, VAR10, 1);
    FUN8(VAR27);
}