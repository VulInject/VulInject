static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int64_t VAR12 = 0, VAR13 = -1, VAR14 = 0;
    int64_t VAR15, VAR16, VAR17;
    uint32_t VAR18 = 0;
    VAR19 *VAR20 = NULL;
    VAR5 *VAR21;
    int VAR22, VAR23 = 0;
    struct
    {
        uint64_t VAR13;
        uint32_t VAR24;
    } QEMU_PACKED VAR25;
    FUN2(VAR2, VAR10->VAR26);
VAR27:
    for (; VAR14 < *VAR8; VAR14++)
    {
        if (!(*VAR6)[VAR14])
        {
            continue;
        }
        VAR17 = VAR14 >> VAR10->VAR28;
        VAR16 = VAR17 << VAR10->VAR28;
        if (VAR12 < VAR16)
        {
            VAR12 = VAR16;
        }
        VAR15 = FUN3(VAR2, 1, VAR6, VAR8, &VAR12);
        if (VAR15 < 0)
        {
            fprintf(VAR29, "", strerror(-VAR15));
            VAR4->VAR30++;
            VAR23 = VAR15;
            goto VAR31;
        }
        if (VAR18 <= VAR17)
        {
            uint32_t VAR32 = VAR18;
            VAR19 *VAR33;
            VAR18 = FUN4((VAR17 + 1) * sizeof(VAR19), VAR10->VAR34) / sizeof(VAR19);
            VAR33 = FUN5(VAR20, VAR18 * sizeof(VAR19));
            if (!VAR33)
            {
                VAR4->VAR30++;
                VAR23 = -VAR35;
                goto VAR31;
            }
            VAR20 = VAR33;
            memset(VAR20 + VAR32, 0, (VAR18 - VAR32) * sizeof(VAR19));
            VAR13 = -1;
        }
        VAR20[VAR17] = VAR15;
        if (VAR17 == (*VAR8 - 1) >> VAR10->VAR28 && VAR13 < 0)
        {
            uint64_t VAR24 = FUN6(VAR10, VAR18 * sizeof(VAR19));
            VAR13 = FUN3(VAR2, VAR24, VAR6, VAR8, &VAR12);
            if (VAR13 < 0)
            {
                fprintf(VAR29, "", strerror(-VAR13));
                VAR4->VAR30++;
                VAR23 = VAR13;
                goto VAR31;
            }
        }
        VAR23 = FUN7(VAR2, 0, VAR15, VAR10->VAR34);
        if (VAR23 < 0)
        {
            fprintf(VAR29, "", strerror(-VAR23));
            goto VAR31;
        }
        VAR21 = FUN8(VAR2->VAR36, VAR10->VAR34);
        for (VAR22 = 0; VAR22 < VAR10->VAR37 && VAR16 + VAR22 < *VAR8; VAR22++)
        {
            VAR21[VAR22] = FUN9((*VAR6)[VAR16 + VAR22]);
        }
        VAR23 = FUN10(VAR2->VAR36, VAR15 / VAR38, (void *)VAR21, VAR10->VAR39);
        FUN11(VAR21);
        if (VAR23 < 0)
        {
            fprintf(VAR29, "", strerror(-VAR23));
            goto VAR31;
        }
        VAR14 = VAR16 + VAR10->VAR37 - 1;
    }
    if (VAR13 < 0)
    {
        uint64_t VAR40, VAR24;
        VAR40 = FUN4(*VAR8, VAR10->VAR37);
        VAR24 = FUN6(VAR10, VAR18 * sizeof(VAR19));
        if (VAR12 < VAR40)
        {
            VAR12 = VAR40;
        }
        VAR13 = FUN3(VAR2, VAR24, VAR6, VAR8, &VAR12);
        if (VAR13 < 0)
        {
            fprintf(VAR29, "", strerror(-VAR13));
            VAR4->VAR30++;
            VAR23 = VAR13;
            goto VAR31;
        }
        goto VAR27;
    }
    assert(VAR20);
    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
    {
        FUN12(&VAR20[VAR17]);
    }
    VAR23 = FUN7(VAR2, 0, VAR13, VAR18 * sizeof(VAR19));
    if (VAR23 < 0)
    {
        fprintf(VAR29, "", strerror(-VAR23));
        goto VAR31;
    }
    assert(VAR18 < VAR41 / sizeof(VAR19));
    VAR23 = FUN13(VAR2->VAR36, VAR13, VAR20, VAR18 * sizeof(VAR19));
    if (VAR23 < 0)
    {
        fprintf(VAR29, "", strerror(-VAR23));
        goto VAR31;
    }
    FUN14(&VAR25.VAR13, VAR13);
    FUN15(&VAR25.VAR24, FUN6(VAR10, VAR18 * sizeof(VAR19)));
    VAR23 = FUN16(VAR2->VAR36, FUN17(VAR42, VAR43), &VAR25, sizeof(VAR25));
    if (VAR23 < 0)
    {
        fprintf(VAR29, "", strerror(-VAR23));
        goto VAR31;
    }
    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
    {
        FUN18(&VAR20[VAR17]);
    }
    VAR10->VAR6 = VAR20;
    VAR10->VAR43 = VAR13;
    VAR10->VAR44 = VAR18;
    return 0;
VAR31:
    FUN19(VAR20);
    return VAR23;
}