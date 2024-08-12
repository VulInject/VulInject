static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    abi_ulong VAR8;
    struct VAR9 *VAR10;
    int VAR11, VAR12 = 0;
    VAR8 = FUN2(VAR3, VAR7, sizeof(*VAR10));
    if (!FUN3(VAR13, VAR10, VAR8, 0))
        goto VAR14;
    FUN4(FUN5(VAR1), &VAR10->VAR1);
    if (VAR12)
        goto VAR14;
    FUN6(&VAR10->VAR15, &VAR10->VAR16, VAR7, VAR5->VAR1[0], VAR8 + FUN7(struct VAR9, VAR16));
    if (VAR12)
        goto VAR14;
    for (VAR11 = 1; VAR11 < VAR17; VAR11++)
    {
        if (FUN4(VAR5->VAR1[VAR11], &VAR10->VAR18[VAR11 - 1]))
            goto VAR14;
    }
    if (VAR3->VAR19 & VAR20)
    {
        FUN4(VAR3->VAR21, &VAR10->VAR22);
    }
    else
    {
        uint16_t VAR23;
        abi_ulong VAR24;
        VAR24 = VAR8 + FUN7(struct VAR9, VAR25);
        FUN4(VAR24, &VAR10->VAR22);
        VAR23 = 0xb858;
        FUN4(VAR23, (VAR26 *)(VAR10->VAR25 + 0));
        FUN4(VAR27, (int *)(VAR10->VAR25 + 2));
        VAR23 = 0x80cd;
        FUN4(VAR23, (VAR26 *)(VAR10->VAR25 + 6));
    }
    if (VAR12)
        goto VAR14;
    VAR7->VAR28[VAR29] = VAR8;
    VAR7->VAR30 = VAR3->VAR31;
    FUN8(VAR7, VAR32, VAR33);
    FUN8(VAR7, VAR34, VAR33);
    FUN8(VAR7, VAR35, VAR33);
    FUN8(VAR7, VAR36, VAR37);
    VAR7->VAR38 &= ~VAR39;
    FUN9(VAR10, VAR8, 1);
    return;
VAR14:
    FUN9(VAR10, VAR8, 1);
    if (VAR1 == VAR40)
        VAR3->VAR31 = VAR41;
    FUN10(VAR40);
}