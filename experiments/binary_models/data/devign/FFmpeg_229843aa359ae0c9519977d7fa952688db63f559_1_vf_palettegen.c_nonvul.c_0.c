static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6 = VAR3->VAR7;
    VAR8 *VAR9 = VAR3->VAR10[0];
    double VAR11;
    int VAR12 = 0;
    struct VAR13 *VAR14;
    VAR6->VAR15 = FUN2(VAR6->VAR16, VAR6->VAR17);
    if (!VAR6->VAR15)
    {
        FUN3(VAR3, VAR18, "", VAR6->VAR17);
        return NULL;
    }
    VAR4 = FUN4(VAR9, VAR9->VAR19, VAR9->VAR20);
    if (!VAR4)
        return NULL;
    VAR4->VAR21 = 0;
    VAR14 = &VAR6->VAR22[VAR12];
    VAR14->VAR23 = VAR6->VAR17;
    VAR14->VAR24 = -1;
    VAR14->VAR25 = FUN5(VAR6->VAR15, VAR14);
    VAR14->VAR26 = -1;
    VAR6->VAR27 = 1;
    while (VAR14 && VAR14->VAR23 > 1)
    {
        int VAR28, VAR29, VAR30, VAR31, VAR32;
        uint64_t VAR33, VAR34 = 0;
        uint8_t VAR35[3] = {0xff, 0xff, 0xff};
        uint8_t VAR36[3] = {0x00, 0x00, 0x00};
        for (VAR28 = VAR14->VAR37; VAR28 < VAR14->VAR37 + VAR14->VAR23; VAR28++)
        {
            const struct VAR38 *VAR39 = VAR6->VAR15[VAR28];
            const uint32_t VAR40 = VAR39->VAR25;
            const uint8_t VAR41 = VAR40 >> 16 & 0xff, VAR42 = VAR40 >> 8 & 0xff, VAR43 = VAR40 & 0xff;
            VAR35[0] = FUN6(VAR41, VAR35[0]), VAR36[0] = FUN7(VAR41, VAR36[0]);
            VAR35[1] = FUN6(VAR42, VAR35[1]), VAR36[1] = FUN7(VAR42, VAR36[1]);
            VAR35[2] = FUN6(VAR43, VAR35[2]), VAR36[2] = FUN7(VAR43, VAR36[2]);
            VAR34 += VAR39->VAR44;
        }
        VAR29 = VAR36[0] - VAR35[0];
        VAR30 = VAR36[1] - VAR35[1];
        VAR31 = VAR36[2] - VAR35[2];
        VAR32 = 1;
        if (VAR31 >= VAR29 && VAR31 >= VAR30)
            VAR32 = 2;
        if (VAR29 >= VAR30 && VAR29 >= VAR31)
            VAR32 = 0;
        if (VAR30 >= VAR29 && VAR30 >= VAR31)
            VAR32 = 1;
        FUN8(VAR3, "" VAR45 "", VAR12, VAR14->VAR37, VAR14->VAR37 + VAR14->VAR23 - 1, VAR14->VAR23, VAR34, VAR29, VAR30, VAR31, ""[VAR32], VAR14 -> VAR24 == VAR32 ? '' : '');
        if (VAR14->VAR24 != VAR32)
        {
            cmp_func VAR46 = VAR47[VAR32];
            FUN9(&VAR6->VAR15[VAR14->VAR37], VAR14->VAR23, const struct VAR38 *, VAR46);
            VAR14->VAR24 = VAR32;
        }
        VAR33 = (VAR34 + 1) >> 1;
        VAR34 = 0;
        for (VAR28 = VAR14->VAR37; VAR28 < VAR14->VAR37 + VAR14->VAR23 - 2; VAR28++)
        {
            VAR34 += VAR6->VAR15[VAR28]->VAR44;
            if (VAR34 > VAR33)
                break;
        }
        FUN8(VAR3, "" VAR45 "" VAR45 "", VAR28, VAR34, VAR33);
        FUN10(VAR6, VAR14, VAR28);
        VAR12 = FUN11(VAR6);
        VAR14 = VAR12 >= 0 ? &VAR6->VAR22[VAR12] : NULL;
    }
    VAR11 = FUN12(VAR4, VAR6->VAR27, VAR6->VAR17);
    FUN3(VAR3, VAR48, "", VAR6->VAR27, VAR6->VAR49 ? "" : "", VAR6->VAR17, VAR11);
    FUN13(VAR6->VAR22, VAR6->VAR27, sizeof(*VAR6->VAR22), VAR50);
    FUN14(VAR3, VAR4);
    return VAR4;
}