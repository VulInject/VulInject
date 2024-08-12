static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    unsigned int VAR9;
    int VAR10;
    FUN2(VAR2->VAR11, VAR12);
    VAR9 = VAR3 >> VAR7->VAR13;
    if (VAR9 < VAR7->VAR14)
    {
        uint64_t VAR15 = VAR7->VAR16[VAR9] & VAR17;
        if (VAR15)
        {
            if (FUN3(VAR7, VAR15))
            {
                FUN4(VAR2, true, -1, -1, "" VAR18 ""
                                                          "",
                                        VAR15, VAR9);
                return -VAR19;
            }
            return FUN5(VAR2, VAR15, (void **)VAR5);
        }
    }
    *VAR5 = NULL;
    VAR10 = FUN6(VAR2, VAR7->VAR20);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    int64_t VAR21 = FUN7(VAR2, VAR7->VAR22);
    if (VAR21 < 0)
    {
        return VAR21;
    }
    fprintf(VAR23, "" VAR18 "" VAR18 "", VAR9, VAR3 << VAR7->VAR24, VAR21);
    if (FUN8(VAR7, VAR21, VAR3 << VAR7->VAR24))
    {
        VAR10 = FUN9(VAR2, VAR7->VAR25, VAR21, (void **)VAR5);
        if (VAR10 < 0)
        {
            goto VAR26;
        }
        memset(*VAR5, 0, VAR7->VAR22);
        int VAR27 = (VAR21 >> VAR7->VAR24) & (VAR7->VAR28 - 1);
        (*VAR5)[VAR27] = FUN10(1);
    }
    else
    {
        VAR10 = FUN11(VAR2, VAR21, VAR7->VAR22, 1, false, VAR29);
        if (VAR10 < 0)
        {
            goto VAR26;
        }
        VAR10 = FUN6(VAR2, VAR7->VAR25);
        if (VAR10 < 0)
        {
            goto VAR26;
        }
        VAR10 = FUN9(VAR2, VAR7->VAR25, VAR21, (void **)VAR5);
        if (VAR10 < 0)
        {
            goto VAR26;
        }
        memset(*VAR5, 0, VAR7->VAR22);
    }
    FUN2(VAR2->VAR11, VAR30);
    FUN12(VAR7->VAR25, *VAR5);
    VAR10 = FUN6(VAR2, VAR7->VAR25);
    if (VAR10 < 0)
    {
        goto VAR26;
    }
    if (VAR9 < VAR7->VAR14)
    {
        uint64_t VAR31 = FUN13(VAR21);
        FUN2(VAR2->VAR11, VAR32);
        VAR10 = FUN14(VAR2->VAR11, VAR7->VAR33 + VAR9 * sizeof(VAR34), &VAR31, sizeof(VAR31));
        if (VAR10 < 0)
        {
            goto VAR26;
        }
        VAR7->VAR16[VAR9] = VAR21;
        return -VAR35;
    }
    VAR10 = FUN15(VAR2, VAR7->VAR25, (void **)VAR5);
    if (VAR10 < 0)
    {
        goto VAR26;
    }
    FUN2(VAR2->VAR11, VAR36);
    uint64_t VAR37 = FUN16(VAR3, VAR7->VAR28);
    if (VAR37 > VAR38 / sizeof(VAR34))
    {
        return -VAR39;
    }
    uint64_t VAR40 = FUN17(VAR7, VAR37 + 1);
    uint64_t VAR41;
    uint64_t VAR42;
    do
    {
        uint64_t VAR43 = FUN18(VAR7, VAR40 * sizeof(VAR34));
        VAR42 = 1 + ((VAR43 + VAR7->VAR28 - 1) / VAR7->VAR28);
        uint64_t VAR44 = VAR43 + VAR42;
        VAR41 = VAR40;
        VAR40 = FUN17(VAR7, VAR37 + ((VAR44 + VAR7->VAR28 - 1) / VAR7->VAR28));
    } while (VAR41 != VAR40);
    fprintf(VAR23, "" VAR45 "" VAR46 "", VAR7->VAR14, VAR40);
    uint64_t VAR47 = (VAR37 * VAR7->VAR28) * VAR7->VAR22;
    uint64_t VAR48 = VAR47 + VAR42 * VAR7->VAR22;
    VAR34 *VAR49 = FUN19(VAR34, VAR40);
    VAR4 *VAR50 = FUN20(VAR42 * VAR7->VAR22);
    assert(VAR40 > 0 && VAR42 > 0);
    if (VAR49 == NULL || VAR50 == NULL)
    {
        VAR10 = -VAR51;
        goto VAR52;
    }
    memcpy(VAR49, VAR7->VAR16, VAR7->VAR14 * sizeof(VAR34));
    VAR49[VAR9] = VAR21;
    int VAR53;
    for (VAR53 = 0; VAR53 < VAR42; VAR53++)
    {
        VAR49[VAR37 + VAR53] = VAR47 + (VAR53 * VAR7->VAR22);
    }
    uint64_t VAR43 = FUN18(VAR7, VAR40 * sizeof(VAR34));
    int VAR54 = 0;
    for (VAR53 = 0; VAR53 < VAR43 + VAR42; VAR53++)
    {
        VAR50[VAR54++] = FUN10(1);
    }
    FUN2(VAR2->VAR11, VAR55);
    VAR10 = FUN14(VAR2->VAR11, VAR47, VAR50, VAR42 * VAR7->VAR22);
    FUN21(VAR50);
    VAR50 = NULL;
    if (VAR10 < 0)
    {
        goto VAR52;
    }
    for (VAR53 = 0; VAR53 < VAR40; VAR53++)
    {
        FUN22(&VAR49[VAR53]);
    }
    FUN2(VAR2->VAR11, VAR56);
    VAR10 = FUN14(VAR2->VAR11, VAR48, VAR49, VAR40 * sizeof(VAR34));
    if (VAR10 < 0)
    {
        goto VAR52;
    }
    for (VAR53 = 0; VAR53 < VAR40; VAR53++)
    {
        FUN23(&VAR49[VAR53]);
    }
    uint8_t VAR57[12];
    FUN24((VAR34 *)VAR57, VAR48);
    FUN25((VAR58 *)(VAR57 + 8), VAR43);
    FUN2(VAR2->VAR11, VAR59);
    VAR10 = FUN14(VAR2->VAR11, FUN26(VAR60, VAR33), VAR57, sizeof(VAR57));
    if (VAR10 < 0)
    {
        goto VAR52;
    }
    uint64_t VAR61 = VAR7->VAR33;
    uint64_t VAR62 = VAR7->VAR14;
    FUN21(VAR7->VAR16);
    VAR7->VAR16 = VAR49;
    VAR7->VAR14 = VAR40;
    VAR7->VAR33 = VAR48;
    FUN27(VAR2, VAR61, VAR62 * sizeof(VAR34), VAR63);
    VAR10 = FUN5(VAR2, VAR21, (void **)VAR5);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    return -VAR35;
VAR52:
    FUN21(VAR50);
    FUN21(VAR49);
VAR26:
    if (*VAR5 != NULL)
    {
        FUN15(VAR2, VAR7->VAR25, (void **)VAR5);
    }
    return VAR10;
}