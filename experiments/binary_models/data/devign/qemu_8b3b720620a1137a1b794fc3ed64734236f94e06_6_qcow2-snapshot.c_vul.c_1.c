static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    QCowSnapshotHeader VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    uint64_t VAR13;
    uint32_t VAR14;
    int64_t VAR15, VAR16;
    VAR15 = 0;
    for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
    {
        VAR7 = VAR4->VAR18 + VAR9;
        VAR15 = FUN2(VAR15, 8);
        VAR15 += sizeof(VAR8);
        VAR15 += strlen(VAR7->VAR19);
        VAR15 += strlen(VAR7->VAR20);
    }
    VAR12 = VAR15;
    VAR16 = FUN3(VAR2, VAR12);
    VAR15 = VAR16;
    if (VAR15 < 0)
    {
        return VAR15;
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
    {
        VAR7 = VAR4->VAR18 + VAR9;
        memset(&VAR8, 0, sizeof(VAR8));
        VAR8.VAR21 = FUN4(VAR7->VAR21);
        VAR8.VAR22 = FUN5(VAR7->VAR22);
        VAR8.VAR23 = FUN5(VAR7->VAR23);
        VAR8.VAR24 = FUN5(VAR7->VAR24);
        VAR8.VAR25 = FUN5(VAR7->VAR25);
        VAR8.VAR26 = FUN4(VAR7->VAR26);
        VAR11 = strlen(VAR7->VAR19);
        VAR10 = strlen(VAR7->VAR20);
        VAR8.VAR11 = FUN6(VAR11);
        VAR8.VAR10 = FUN6(VAR10);
        VAR15 = FUN2(VAR15, 8);
        if (FUN7(VAR2->VAR27, VAR15, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
            goto VAR28;
        VAR15 += sizeof(VAR8);
        if (FUN7(VAR2->VAR27, VAR15, VAR7->VAR19, VAR11) != VAR11)
            goto VAR28;
        VAR15 += VAR11;
        if (FUN7(VAR2->VAR27, VAR15, VAR7->VAR20, VAR10) != VAR10)
            goto VAR28;
        VAR15 += VAR10;
    }
    VAR13 = FUN4(VAR16);
    if (FUN7(VAR2->VAR27, FUN8(VAR29, VAR16), &VAR13, sizeof(VAR13)) != sizeof(VAR13))
        goto VAR28;
    VAR14 = FUN5(VAR4->VAR17);
    if (FUN7(VAR2->VAR27, FUN8(VAR29, VAR17), &VAR14, sizeof(VAR14)) != sizeof(VAR14))
        goto VAR28;
    FUN9(VAR2, VAR4->VAR16, VAR4->VAR12);
    VAR4->VAR16 = VAR16;
    VAR4->VAR12 = VAR12;
    return 0;
VAR28:
    return -1;
}