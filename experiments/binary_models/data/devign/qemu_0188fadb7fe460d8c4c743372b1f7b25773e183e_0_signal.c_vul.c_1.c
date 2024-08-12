static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10;
    int VAR11 = 0;
    int VAR12;
    VAR10 = FUN2(VAR3, VAR7, sizeof *VAR9);
    if (!FUN3(VAR13, VAR9, VAR10, 0))
        goto VAR14;
    FUN4(VAR5->VAR1[0], &VAR9->VAR15.VAR16.VAR17);
    if (VAR11)
        goto VAR14;
    for (VAR12 = 1; VAR12 < VAR18; VAR12++)
    {
        if (FUN4(VAR5->VAR1[VAR12], &VAR9->VAR19[VAR12 - 1]))
            goto VAR14;
    }
    FUN5(&VAR9->VAR15.VAR16, VAR7);
    if (VAR3->VAR20 & VAR21)
    {
        VAR7->VAR22[15] = ((unsigned long)VAR3->VAR23) - 8;
    }
    else
    {
        uint32_t VAR24;
        VAR24 = 0x31800000UL | VAR25;
        FUN4(VAR24, VAR9->VAR26 + 0);
        VAR24 = 0xb9cc0008UL;
        FUN4(VAR24, VAR9->VAR26 + 1);
        VAR7->VAR22[15] = ((unsigned long)VAR9->VAR26) - 8;
    }
    if (VAR11)
        goto VAR14;
    VAR7->VAR22[1] = VAR10;
    VAR7->VAR22[5] = VAR1;
    VAR7->VAR22[6] = 0;
    VAR7->VAR22[7] = VAR10 += FUN6(FUN7(*VAR9), VAR15);
    VAR7->VAR27[VAR28] = (unsigned long)VAR3->VAR29;
    FUN8(VAR9, VAR10, 1);
    return;
VAR14:
    FUN8(VAR9, VAR10, 1);
    FUN9(VAR30);
}