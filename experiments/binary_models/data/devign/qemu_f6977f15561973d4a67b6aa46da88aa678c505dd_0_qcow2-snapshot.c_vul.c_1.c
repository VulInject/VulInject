static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    QCowSnapshotHeader VAR8;
    QCowSnapshotExtraData VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    struct
    {
        uint32_t VAR14;
        uint64_t VAR15;
    } QEMU_PACKED VAR16;
    int64_t VAR17, VAR15;
    int VAR18;
    VAR17 = 0;
    for (VAR10 = 0; VAR10 < VAR4->VAR14; VAR10++)
    {
        VAR7 = VAR4->VAR19 + VAR10;
        VAR17 = FUN2(VAR17, 8);
        VAR17 += sizeof(VAR8);
        VAR17 += sizeof(VAR9);
        VAR17 += strlen(VAR7->VAR20);
        VAR17 += strlen(VAR7->VAR21);
    }
    VAR13 = VAR17;
    VAR15 = FUN3(VAR2, VAR13);
    FUN4(VAR2->VAR22);
    VAR17 = VAR15;
    if (VAR17 < 0)
    {
        return VAR17;
    }
    for (VAR10 = 0; VAR10 < VAR4->VAR14; VAR10++)
    {
        VAR7 = VAR4->VAR19 + VAR10;
        memset(&VAR8, 0, sizeof(VAR8));
        VAR8.VAR23 = FUN5(VAR7->VAR23);
        VAR8.VAR24 = FUN6(VAR7->VAR24);
        if (VAR7->VAR25 <= 0xffffffff)
        {
            VAR8.VAR25 = FUN6(VAR7->VAR25);
        }
        VAR8.VAR26 = FUN6(VAR7->VAR26);
        VAR8.VAR27 = FUN6(VAR7->VAR27);
        VAR8.VAR28 = FUN5(VAR7->VAR28);
        VAR8.VAR29 = FUN6(sizeof(VAR9));
        memset(&VAR9, 0, sizeof(VAR9));
        VAR9.VAR30 = FUN5(VAR7->VAR25);
        VAR9.VAR31 = FUN5(VAR7->VAR31);
        VAR12 = strlen(VAR7->VAR20);
        VAR11 = strlen(VAR7->VAR21);
        VAR8.VAR12 = FUN7(VAR12);
        VAR8.VAR11 = FUN7(VAR11);
        VAR17 = FUN2(VAR17, 8);
        VAR18 = FUN8(VAR2->VAR22, VAR17, &VAR8, sizeof(VAR8));
        if (VAR18 < 0)
        {
            goto VAR32;
        }
        VAR17 += sizeof(VAR8);
        VAR18 = FUN8(VAR2->VAR22, VAR17, &VAR9, sizeof(VAR9));
        if (VAR18 < 0)
        {
            goto VAR32;
        }
        VAR17 += sizeof(VAR9);
        VAR18 = FUN8(VAR2->VAR22, VAR17, VAR7->VAR20, VAR12);
        if (VAR18 < 0)
        {
            goto VAR32;
        }
        VAR17 += VAR12;
        VAR18 = FUN8(VAR2->VAR22, VAR17, VAR7->VAR21, VAR11);
        if (VAR18 < 0)
        {
            goto VAR32;
        }
        VAR17 += VAR11;
    }
    VAR18 = FUN4(VAR2);
    if (VAR18 < 0)
    {
        goto VAR32;
    }
    FUN9(FUN10(VAR33, VAR15) != FUN10(VAR33, VAR14) + sizeof(VAR16.VAR14));
    VAR16.VAR14 = FUN6(VAR4->VAR14);
    VAR16.VAR15 = FUN5(VAR15);
    VAR18 = FUN11(VAR2->VAR22, FUN10(VAR33, VAR14), &VAR16, sizeof(VAR16));
    if (VAR18 < 0)
    {
        goto VAR32;
    }
    FUN12(VAR2, VAR4->VAR15, VAR4->VAR13);
    VAR4->VAR15 = VAR15;
    VAR4->VAR13 = VAR13;
    return 0;
VAR32:
    return VAR18;
}