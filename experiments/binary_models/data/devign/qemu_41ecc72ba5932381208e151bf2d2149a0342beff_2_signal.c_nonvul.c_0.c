static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10;
    int VAR11;
    VAR10 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    if (!FUN3(VAR12, VAR9, VAR10, 0))
        goto VAR13;
    FUN4(VAR9->VAR14, VAR15);
    FUN5(VAR7, &VAR9->VAR16);
    for (VAR11 = 0; VAR11 < VAR17; VAR11++)
    {
        if (FUN6(VAR5->VAR1[VAR11], &VAR9->VAR18.VAR1[VAR11]))
            goto VAR13;
    }
    VAR7->VAR19.VAR20[4] = VAR1;
    VAR7->VAR19.VAR20[5] = 0;
    VAR7->VAR19.VAR20[6] = VAR10 + FUN7(struct VAR8, VAR16);
    VAR7->VAR19.VAR20[29] = VAR10;
    VAR7->VAR19.VAR20[31] = VAR10 + FUN7(struct VAR8, VAR14);
    VAR7->VAR19.VAR21 = VAR7->VAR19.VAR20[25] = VAR3->VAR22;
    FUN8(VAR7);
    FUN9(VAR9, VAR10, 1);
    return;
VAR13:
    FUN9(VAR9, VAR10, 1);
    FUN10(VAR23);
}