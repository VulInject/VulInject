static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    abi_ulong VAR8;
    struct VAR9 *VAR10;
    int VAR11;
    VAR8 = FUN2(VAR3, VAR7, sizeof(*VAR10));
    if (!FUN3(VAR12, VAR10, VAR8, 0))
        goto VAR13;
    FUN4(FUN5(VAR1), &VAR10->VAR1);
    FUN6(&VAR10->VAR14, &VAR10->VAR15, VAR7, VAR5->VAR1[0], VAR8 + FUN7(struct VAR9, VAR15));
    for (VAR11 = 1; VAR11 < VAR16; VAR11++)
    {
        FUN4(VAR5->VAR1[VAR11], &VAR10->VAR17[VAR11 - 1]);
    }
    if (VAR3->VAR18 & VAR19)
    {
        FUN4(VAR3->VAR20, &VAR10->VAR21);
    }
    else
    {
        uint16_t VAR22;
        abi_ulong VAR23;
        VAR23 = VAR8 + FUN7(struct VAR9, VAR24);
        FUN4(VAR23, &VAR10->VAR21);
        VAR22 = 0xb858;
        FUN4(VAR22, (VAR25 *)(VAR10->VAR24 + 0));
        FUN4(VAR26, (int *)(VAR10->VAR24 + 2));
        VAR22 = 0x80cd;
        FUN4(VAR22, (VAR25 *)(VAR10->VAR24 + 6));
    }
    VAR7->VAR27[VAR28] = VAR8;
    VAR7->VAR29 = VAR3->VAR30;
    FUN8(VAR7, VAR31, VAR32);
    FUN8(VAR7, VAR33, VAR32);
    FUN8(VAR7, VAR34, VAR32);
    FUN8(VAR7, VAR35, VAR36);
    VAR7->VAR37 &= ~VAR38;
    FUN9(VAR10, VAR8, 1);
    return;
VAR13:
    if (VAR1 == VAR39)
        VAR3->VAR30 = VAR40;
    FUN10(VAR39);
}