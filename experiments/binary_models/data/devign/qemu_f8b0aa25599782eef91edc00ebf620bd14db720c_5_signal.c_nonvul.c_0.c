static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10;
    int VAR11;
    VAR10 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    if (!FUN3(VAR12, VAR9, VAR10, 0))
        goto VAR13;
    FUN4(VAR9->VAR14, VAR15);
    if (FUN5(VAR7, &VAR9->VAR16))
        goto VAR13;
    for (VAR11 = 0; VAR11 < VAR17; VAR11++)
    {
        if (FUN6(VAR5->VAR1[VAR11], &VAR9->VAR18.VAR1[VAR11]))
            goto VAR13;
    }
    VAR7->VAR19[4][VAR7->VAR20] = VAR1;
    VAR7->VAR19[5][VAR7->VAR20] = 0;
    VAR7->VAR19[6][VAR7->VAR20] = VAR10 + FUN7(struct VAR8, VAR16);
    VAR7->VAR19[29][VAR7->VAR20] = VAR10;
    VAR7->VAR19[31][VAR7->VAR20] = VAR10 + FUN7(struct VAR8, VAR14);
    VAR7->VAR21[VAR7->VAR20] = VAR7->VAR19[25][VAR7->VAR20] = VAR3->VAR22.VAR23;
    FUN8(VAR9, VAR10, 1);
    return;
VAR13:
    FUN8(VAR9, VAR10, 1);
    FUN9(VAR24);
    return;
}