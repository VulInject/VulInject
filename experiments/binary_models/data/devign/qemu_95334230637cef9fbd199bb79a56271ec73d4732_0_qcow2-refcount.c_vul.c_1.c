static int FUN1(VAR1 *VAR2, int64_t VAR3, void **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    unsigned int VAR8;
    int VAR9;
    FUN2(VAR2->VAR10, VAR11);
    VAR8 = VAR3 >> VAR6->VAR12;
    if (VAR8 < VAR6->VAR13)
    {
        uint64_t VAR14 = VAR6->VAR15[VAR8] & VAR16;
        if (VAR14)
        {
            if (FUN3(VAR6, VAR14))
            {
                FUN4(VAR2, true, -1, -1, "" VAR17 ""
                                                          "",
                                        VAR14, VAR8);
                return -VAR18;
            }
            return FUN5(VAR2, VAR14, VAR4);
        }
    }
    *VAR4 = NULL;
    VAR9 = FUN6(VAR2, VAR6->VAR19);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    int64_t VAR20 = FUN7(VAR2, VAR6->VAR21);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    fprintf(VAR22, "" VAR17 "" VAR17 "", VAR8, VAR3 << VAR6->VAR23, VAR20);
    if (FUN8(VAR6, VAR20, VAR3 << VAR6->VAR23))
    {
        VAR9 = FUN9(VAR2, VAR6->VAR24, VAR20, VAR4);
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        memset(*VAR4, 0, VAR6->VAR21);
        int VAR26 = (VAR20 >> VAR6->VAR23) & (VAR6->VAR27 - 1);
        VAR6->FUN10(*VAR4, VAR26, 1);
    }
    else
    {
        VAR9 = FUN11(VAR2, VAR20, VAR6->VAR21, 1, false, VAR28);
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        VAR9 = FUN6(VAR2, VAR6->VAR24);
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        VAR9 = FUN9(VAR2, VAR6->VAR24, VAR20, VAR4);
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        memset(*VAR4, 0, VAR6->VAR21);
    }
    FUN2(VAR2->VAR10, VAR29);
    FUN12(VAR2, VAR6->VAR24, *VAR4);
    VAR9 = FUN6(VAR2, VAR6->VAR24);
    if (VAR9 < 0)
    {
        goto VAR25;
    }
    if (VAR8 < VAR6->VAR13)
    {
        uint64_t VAR30 = FUN13(VAR20);
        FUN2(VAR2->VAR10, VAR31);
        VAR9 = FUN14(VAR2->VAR10->VAR2, VAR6->VAR32 + VAR8 * sizeof(VAR33), &VAR30, sizeof(VAR30));
        if (VAR9 < 0)
        {
            goto VAR25;
        }
        VAR6->VAR15[VAR8] = VAR20;
        return -VAR34;
    }
    FUN15(VAR2, VAR6->VAR24, VAR4);
    FUN2(VAR2->VAR10, VAR35);
    uint64_t VAR36 = FUN16(FUN17(VAR3 + 1, (VAR20 >> VAR6->VAR23) + 1), VAR6->VAR27);
    if (VAR36 > VAR37 / sizeof(VAR33))
    {
        return -VAR38;
    }
    uint64_t VAR39 = FUN18(VAR6, VAR36 + 1);
    uint64_t VAR40;
    uint64_t VAR41;
    do
    {
        uint64_t VAR42 = FUN19(VAR6, VAR39 * sizeof(VAR33));
        VAR41 = 1 + ((VAR42 + VAR6->VAR27 - 1) / VAR6->VAR27);
        uint64_t VAR43 = VAR42 + VAR41;
        VAR40 = VAR39;
        VAR39 = FUN18(VAR6, VAR36 + ((VAR43 + VAR6->VAR27 - 1) / VAR6->VAR27));
    } while (VAR40 != VAR39);
    fprintf(VAR22, "" VAR44 "" VAR45 "", VAR6->VAR13, VAR39);
    uint64_t VAR46 = (VAR36 * VAR6->VAR27) * VAR6->VAR21;
    uint64_t VAR47 = VAR46 + VAR41 * VAR6->VAR21;
    VAR33 *VAR48 = FUN20(VAR33, VAR39);
    void *VAR49 = FUN21(VAR41 * VAR6->VAR21);
    assert(VAR39 > 0 && VAR41 > 0);
    if (VAR48 == NULL || VAR49 == NULL)
    {
        VAR9 = -VAR50;
        goto VAR51;
    }
    memcpy(VAR48, VAR6->VAR15, VAR6->VAR13 * sizeof(VAR33));
    VAR48[VAR8] = VAR20;
    int VAR52;
    for (VAR52 = 0; VAR52 < VAR41; VAR52++)
    {
        VAR48[VAR36 + VAR52] = VAR46 + (VAR52 * VAR6->VAR21);
    }
    uint64_t VAR42 = FUN19(VAR6, VAR39 * sizeof(VAR33));
    int VAR53 = 0;
    for (VAR52 = 0; VAR52 < VAR42 + VAR41; VAR52++)
    {
        VAR6->FUN10(VAR49, VAR53++, 1);
    }
    FUN2(VAR2->VAR10, VAR54);
    VAR9 = FUN14(VAR2->VAR10->VAR2, VAR46, VAR49, VAR41 * VAR6->VAR21);
    FUN22(VAR49);
    VAR49 = NULL;
    if (VAR9 < 0)
    {
        goto VAR51;
    }
    for (VAR52 = 0; VAR52 < VAR39; VAR52++)
    {
        FUN23(&VAR48[VAR52]);
    }
    FUN2(VAR2->VAR10, VAR55);
    VAR9 = FUN14(VAR2->VAR10->VAR2, VAR47, VAR48, VAR39 * sizeof(VAR33));
    if (VAR9 < 0)
    {
        goto VAR51;
    }
    for (VAR52 = 0; VAR52 < VAR39; VAR52++)
    {
        FUN24(&VAR48[VAR52]);
    }
    uint8_t VAR56[12];
    FUN25((VAR33 *)VAR56, VAR47);
    FUN26((VAR57 *)(VAR56 + 8), VAR42);
    FUN2(VAR2->VAR10, VAR58);
    VAR9 = FUN14(VAR2->VAR10->VAR2, FUN27(VAR59, VAR32), VAR56, sizeof(VAR56));
    if (VAR9 < 0)
    {
        goto VAR51;
    }
    uint64_t VAR60 = VAR6->VAR32;
    uint64_t VAR61 = VAR6->VAR13;
    FUN22(VAR6->VAR15);
    VAR6->VAR15 = VAR48;
    VAR6->VAR13 = VAR39;
    VAR6->VAR32 = VAR47;
    FUN28(VAR2, VAR60, VAR61 * sizeof(VAR33), VAR62);
    VAR9 = FUN5(VAR2, VAR20, VAR4);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    return -VAR34;
VAR51:
    FUN22(VAR49);
    FUN22(VAR48);
VAR25:
    if (*VAR4 != NULL)
    {
        FUN15(VAR2, VAR6->VAR24, VAR4);
    }
    return VAR9;
}