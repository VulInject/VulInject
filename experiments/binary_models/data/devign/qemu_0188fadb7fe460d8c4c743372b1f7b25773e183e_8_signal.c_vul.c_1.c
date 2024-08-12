static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10;
    int VAR11 = 0;
    int VAR12;
    VAR10 = FUN2(VAR7, sizeof *VAR9);
    if (!FUN3(VAR13, VAR9, VAR10, 0))
        goto VAR14;
    FUN4(0x9c5f, VAR9->VAR15 + 0);
    FUN4(VAR16, VAR9->VAR15 + 1);
    FUN4(0xe93d, VAR9->VAR15 + 2);
    FUN4(VAR5->VAR1[0], &VAR9->VAR17.VAR18);
    if (VAR11)
        goto VAR14;
    for (VAR12 = 1; VAR12 < VAR19; VAR12++)
    {
        if (FUN4(VAR5->VAR1[VAR12], &VAR9->VAR20[VAR12 - 1]))
            goto VAR14;
    }
    FUN5(&VAR9->VAR17, VAR7);
    VAR7->VAR21[VAR22] = VAR10;
    VAR7->VAR21[10] = VAR1;
    VAR7->VAR23 = (unsigned long)VAR3->VAR24;
    VAR7->VAR25[VAR26] = VAR10 + FUN6(FUN7(*VAR9), VAR15);
    FUN8(VAR9, VAR10, 1);
    return;
VAR14:
    FUN8(VAR9, VAR10, 1);
    FUN9(VAR27);
}