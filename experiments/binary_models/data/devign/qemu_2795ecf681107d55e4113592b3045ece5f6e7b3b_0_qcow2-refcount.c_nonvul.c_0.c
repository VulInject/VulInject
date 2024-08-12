static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    unsigned int VAR9;
    int VAR10;
    FUN2(VAR2->VAR11, VAR12);
    VAR9 = VAR3 >> (VAR7->VAR13 - VAR14);
    if (VAR9 < VAR7->VAR15)
    {
        uint64_t VAR16 = VAR7->VAR17[VAR9];
        if (VAR16)
        {
            return FUN3(VAR2, VAR16, (void **)VAR5);
        }
    }
    *VAR5 = NULL;
    FUN4(VAR2, VAR7->VAR18);
    int64_t VAR19 = FUN5(VAR2, VAR7->VAR20);
    if (VAR19 < 0)
    {
        return VAR19;
    }
    fprintf(VAR21, "" VAR22 "" VAR22 "", VAR9, VAR3 << VAR7->VAR13, VAR19);
    if (FUN6(VAR7, VAR19, VAR3 << VAR7->VAR13))
    {
        VAR10 = FUN7(VAR2, VAR7->VAR23, VAR19, (void **)VAR5);
        if (VAR10 < 0)
        {
            goto VAR24;
        }
        memset(*VAR5, 0, VAR7->VAR20);
        int VAR25 = (VAR19 >> VAR7->VAR13) & ((1 << (VAR7->VAR13 - VAR14)) - 1);
        (*VAR5)[VAR25] = FUN8(1);
    }
    else
    {
        VAR10 = FUN9(VAR2, VAR19, VAR7->VAR20, 1);
        if (VAR10 < 0)
        {
            goto VAR24;
        }
        FUN10(VAR2->VAR11);
        VAR10 = FUN7(VAR2, VAR7->VAR23, VAR19, (void **)VAR5);
        if (VAR10 < 0)
        {
            goto VAR24;
        }
        memset(*VAR5, 0, VAR7->VAR20);
    }
    FUN2(VAR2->VAR11, VAR26);
    FUN11(VAR7->VAR23, *VAR5);
    VAR10 = FUN4(VAR2, VAR7->VAR23);
    if (VAR10 < 0)
    {
        goto VAR24;
    }
    if (VAR9 < VAR7->VAR15)
    {
        uint64_t VAR27 = FUN12(VAR19);
        FUN2(VAR2->VAR11, VAR28);
        VAR10 = FUN13(VAR2->VAR11, VAR7->VAR29 + VAR9 * sizeof(VAR30), &VAR27, sizeof(VAR27));
        if (VAR10 < 0)
        {
            goto VAR24;
        }
        VAR7->VAR17[VAR9] = VAR19;
        return 0;
    }
    VAR10 = FUN14(VAR2, VAR7->VAR23, (void **)VAR5);
    if (VAR10 < 0)
    {
        goto VAR24;
    }
    FUN2(VAR2->VAR11, VAR31);
    uint64_t VAR32 = 1 << (VAR7->VAR13 - VAR14);
    uint64_t VAR33 = (VAR7->VAR34 + VAR32 - 1) / VAR32;
    uint64_t VAR35 = FUN15(VAR7, VAR33 + 1);
    uint64_t VAR36;
    uint64_t VAR37;
    do
    {
        uint64_t VAR38 = FUN16(VAR7, VAR35);
        VAR37 = 1 + ((VAR38 + VAR32 - 1) / VAR32);
        uint64_t VAR39 = VAR38 + VAR37;
        VAR36 = VAR35;
        VAR35 = FUN15(VAR7, VAR33 + ((VAR39 + VAR32 - 1) / VAR32));
    } while (VAR36 != VAR35);
    fprintf(VAR21, "" VAR40 "" VAR41 "", VAR7->VAR15, VAR35);
    uint64_t VAR42 = (VAR33 * VAR32) * VAR7->VAR20;
    uint64_t VAR43 = VAR42 + VAR37 * VAR7->VAR20;
    VAR4 *VAR44 = FUN17(VAR37 * VAR7->VAR20);
    VAR30 *VAR45 = FUN17(VAR35 * sizeof(VAR30));
    assert(VAR42 >= (VAR7->VAR34 * VAR7->VAR20));
    memcpy(VAR45, VAR7->VAR17, VAR7->VAR15 * sizeof(VAR30));
    VAR45[VAR9] = VAR19;
    int VAR46;
    for (VAR46 = 0; VAR46 < VAR37; VAR46++)
    {
        VAR45[VAR33 + VAR46] = VAR42 + (VAR46 * VAR7->VAR20);
    }
    uint64_t VAR38 = FUN16(VAR7, VAR35 * sizeof(VAR30));
    int VAR47 = 0;
    for (VAR46 = 0; VAR46 < VAR38 + VAR37; VAR46++)
    {
        VAR44[VAR47++] = FUN8(1);
    }
    FUN2(VAR2->VAR11, VAR48);
    VAR10 = FUN13(VAR2->VAR11, VAR42, VAR44, VAR37 * VAR7->VAR20);
    FUN18(VAR44);
    if (VAR10 < 0)
    {
        goto VAR49;
    }
    for (VAR46 = 0; VAR46 < VAR35; VAR46++)
    {
        FUN19(&VAR45[VAR46]);
    }
    FUN2(VAR2->VAR11, VAR50);
    VAR10 = FUN13(VAR2->VAR11, VAR43, VAR45, VAR35 * sizeof(VAR30));
    if (VAR10 < 0)
    {
        goto VAR49;
    }
    for (VAR46 = 0; VAR46 < VAR35; VAR46++)
    {
        FUN19(&VAR45[VAR46]);
    }
    uint8_t VAR51[12];
    FUN20((VAR30 *)VAR51, VAR43);
    FUN21((VAR52 *)(VAR51 + 8), VAR38);
    FUN2(VAR2->VAR11, VAR53);
    VAR10 = FUN13(VAR2->VAR11, FUN22(VAR54, VAR29), VAR51, sizeof(VAR51));
    if (VAR10 < 0)
    {
        goto VAR49;
    }
    uint64_t VAR55 = VAR7->VAR29;
    uint64_t VAR56 = VAR7->VAR15;
    FUN18(VAR7->VAR17);
    VAR7->VAR17 = VAR45;
    VAR7->VAR15 = VAR35;
    VAR7->VAR29 = VAR43;
    uint64_t VAR57 = VAR7->VAR34;
    FUN23(VAR2, VAR55, VAR56 * sizeof(VAR30));
    VAR7->VAR34 = VAR57;
    VAR10 = FUN3(VAR2, VAR19, (void **)VAR5);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    return 0;
VAR49:
    FUN18(VAR45);
VAR24:
    if (*VAR5 != NULL)
    {
        FUN14(VAR2, VAR7->VAR23, (void **)VAR5);
    }
    return VAR10;
}