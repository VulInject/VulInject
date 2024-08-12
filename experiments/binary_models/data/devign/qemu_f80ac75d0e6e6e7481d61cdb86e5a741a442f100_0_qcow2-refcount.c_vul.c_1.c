static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void **VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11 = 0, VAR12 = -1, VAR13 = 0;
    int64_t VAR14, VAR15, VAR16;
    uint32_t VAR17 = 0;
    VAR18 *VAR19 = NULL;
    void *VAR20;
    int VAR21 = 0;
    struct
    {
        uint64_t VAR12;
        uint32_t VAR22;
    } QEMU_PACKED VAR23;
    FUN2(VAR2, VAR9->VAR24);
VAR25:
    for (; VAR13 < *VAR7; VAR13++)
    {
        if (!VAR9->FUN3(*VAR5, VAR13))
        {
            continue;
        }
        VAR16 = VAR13 >> VAR9->VAR26;
        VAR15 = VAR16 << VAR9->VAR26;
        if (VAR11 < VAR15)
        {
            VAR11 = VAR15;
        }
        VAR14 = FUN4(VAR2, 1, VAR5, VAR7, &VAR11);
        if (VAR14 < 0)
        {
            fprintf(VAR27, "", strerror(-VAR14));
            VAR4->VAR28++;
            VAR21 = VAR14;
            goto VAR29;
        }
        if (VAR17 <= VAR16)
        {
            uint32_t VAR30 = VAR17;
            VAR18 *VAR31;
            VAR17 = FUN5((VAR16 + 1) * sizeof(VAR18), VAR9->VAR32) / sizeof(VAR18);
            VAR31 = FUN6(VAR19, VAR17 * sizeof(VAR18));
            if (!VAR31)
            {
                VAR4->VAR28++;
                VAR21 = -VAR33;
                goto VAR29;
            }
            VAR19 = VAR31;
            memset(VAR19 + VAR30, 0, (VAR17 - VAR30) * sizeof(VAR18));
            VAR12 = -1;
        }
        VAR19[VAR16] = VAR14;
        if (VAR16 == (*VAR7 - 1) >> VAR9->VAR26 && VAR12 < 0)
        {
            uint64_t VAR22 = FUN7(VAR9, VAR17 * sizeof(VAR18));
            VAR12 = FUN4(VAR2, VAR22, VAR5, VAR7, &VAR11);
            if (VAR12 < 0)
            {
                fprintf(VAR27, "", strerror(-VAR12));
                VAR4->VAR28++;
                VAR21 = VAR12;
                goto VAR29;
            }
        }
        VAR21 = FUN8(VAR2, 0, VAR14, VAR9->VAR32);
        if (VAR21 < 0)
        {
            fprintf(VAR27, "", strerror(-VAR21));
            goto VAR29;
        }
        VAR20 = (void *)((char *)*VAR5 + VAR16 * VAR9->VAR32);
        VAR21 = FUN9(VAR2->VAR34, VAR14 / VAR35, VAR20, VAR9->VAR36);
        if (VAR21 < 0)
        {
            fprintf(VAR27, "", strerror(-VAR21));
            goto VAR29;
        }
        VAR13 = VAR15 + VAR9->VAR37 - 1;
    }
    if (VAR12 < 0)
    {
        uint64_t VAR38, VAR22;
        VAR38 = FUN5(*VAR7, VAR9->VAR37);
        VAR22 = FUN7(VAR9, VAR17 * sizeof(VAR18));
        if (VAR11 < VAR38)
        {
            VAR11 = VAR38;
        }
        VAR12 = FUN4(VAR2, VAR22, VAR5, VAR7, &VAR11);
        if (VAR12 < 0)
        {
            fprintf(VAR27, "", strerror(-VAR12));
            VAR4->VAR28++;
            VAR21 = VAR12;
            goto VAR29;
        }
        goto VAR25;
    }
    assert(VAR19);
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        FUN10(&VAR19[VAR16]);
    }
    VAR21 = FUN8(VAR2, 0, VAR12, VAR17 * sizeof(VAR18));
    if (VAR21 < 0)
    {
        fprintf(VAR27, "", strerror(-VAR21));
        goto VAR29;
    }
    assert(VAR17 < VAR39 / sizeof(VAR18));
    VAR21 = FUN11(VAR2->VAR34, VAR12, VAR19, VAR17 * sizeof(VAR18));
    if (VAR21 < 0)
    {
        fprintf(VAR27, "", strerror(-VAR21));
        goto VAR29;
    }
    VAR23.VAR12 = FUN12(VAR12);
    VAR23.VAR22 = FUN13(FUN7(VAR9, VAR17 * sizeof(VAR18)));
    VAR21 = FUN14(VAR2->VAR34, FUN15(VAR40, VAR41), &VAR23, sizeof(VAR23));
    if (VAR21 < 0)
    {
        fprintf(VAR27, "", strerror(-VAR21));
        goto VAR29;
    }
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        FUN16(&VAR19[VAR16]);
    }
    VAR9->VAR5 = VAR19;
    VAR9->VAR41 = VAR12;
    VAR9->VAR42 = VAR17;
    FUN17(VAR9);
    return 0;
VAR29:
    FUN18(VAR19);
    return VAR21;
}