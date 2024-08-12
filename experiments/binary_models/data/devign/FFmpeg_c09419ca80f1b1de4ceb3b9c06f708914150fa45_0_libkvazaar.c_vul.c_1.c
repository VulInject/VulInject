static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    uint32_t VAR13 = 0;
    kvz_frame_info VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    *VAR7 = 0;
    if (VAR6)
    {
        int VAR18 = 0;
        FUN2(VAR6->VAR19 == VAR16->VAR20->VAR19);
        FUN2(VAR6->VAR21 == VAR16->VAR20->VAR21);
        FUN2(VAR6->VAR22 == VAR2->VAR23);
        VAR10 = VAR16->VAR24->FUN3(VAR6->VAR19, VAR6->VAR21);
        if (!VAR10)
        {
            FUN4(VAR2, VAR25, "");
            VAR8 = FUN5(VAR26);
            goto VAR27;
        }
        for (VAR18 = 0; VAR18 < 3; ++VAR18)
        {
            VAR28 *VAR29 = VAR10->VAR30[VAR18];
            VAR28 *VAR31 = VAR6->VAR30[VAR18];
            int VAR19 = (VAR18 == 0) ? VAR6->VAR19 : (VAR6->VAR19 / 2);
            int VAR21 = (VAR18 == 0) ? VAR6->VAR21 : (VAR6->VAR21 / 2);
            int VAR32 = 0;
            for (VAR32 = 0; VAR32 < VAR21; ++VAR32)
            {
                memcpy(VAR29, VAR31, VAR19);
                VAR31 += VAR6->VAR33[VAR18];
                VAR29 += VAR19;
            }
        }
    }
    if (!VAR16->VAR24->FUN6(VAR16->VAR34, VAR10, &VAR12, &VAR13, NULL, NULL, &VAR14))
    {
        FUN4(VAR2, VAR25, "");
        VAR8 = VAR35;
        goto VAR27;
    }
    if (VAR12)
    {
        VAR11 *VAR36 = NULL;
        uint64_t VAR37 = 0;
        VAR8 = FUN7(VAR4, VAR13);
        if (VAR8 < 0)
        {
            FUN4(VAR2, VAR25, "");
            goto VAR27;
        }
        for (VAR36 = VAR12; VAR36 != NULL; VAR36 = VAR36->VAR38)
        {
            FUN2(VAR37 + VAR36->VAR39 <= VAR13);
            memcpy(VAR4->VAR30 + VAR37, VAR36->VAR30, VAR36->VAR39);
            VAR37 += VAR36->VAR39;
        }
        *VAR7 = 1;
        VAR16->VAR24->FUN8(VAR12);
        VAR12 = NULL;
        VAR4->VAR40 = 0;
        if (VAR14.VAR41 >= VAR42 && VAR14.VAR41 <= VAR43)
        {
            VAR4->VAR40 |= VAR44;
        }
    }
VAR27:
    VAR16->VAR24->FUN9(VAR10);
    VAR16->VAR24->FUN8(VAR12);
    return VAR8;
}