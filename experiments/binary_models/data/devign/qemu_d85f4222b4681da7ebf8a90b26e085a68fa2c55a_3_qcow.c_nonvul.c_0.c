static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR3->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    uint64_t VAR17, *VAR18, VAR19, VAR20;
    uint32_t VAR21;
    int VAR22;
    VAR15 = VAR4 >> (VAR10->VAR23 + VAR10->VAR24);
    VAR17 = VAR10->VAR25[VAR15];
    VAR22 = 0;
    if (!VAR17)
    {
        if (!VAR5)
            return 0;
        VAR17 = FUN2(VAR3->VAR26->VAR3);
        VAR17 = (VAR17 + VAR10->VAR27 - 1) & ~(VAR10->VAR27 - 1);
        VAR10->VAR25[VAR15] = VAR17;
        VAR20 = FUN3(VAR17);
        if (FUN4(VAR3->VAR26, VAR10->VAR28 + VAR15 * sizeof(VAR20), &VAR20, sizeof(VAR20)) < 0)
            return 0;
        VAR22 = 1;
    }
    for (VAR13 = 0; VAR13 < VAR29; VAR13++)
    {
        if (VAR17 == VAR10->VAR30[VAR13])
        {
            if (++VAR10->VAR31[VAR13] == 0xffffffff)
            {
                for (VAR14 = 0; VAR14 < VAR29; VAR14++)
                {
                    VAR10->VAR31[VAR14] >>= 1;
                }
            }
            VAR18 = VAR10->VAR32 + (VAR13 << VAR10->VAR23);
            goto VAR33;
        }
    }
    VAR12 = 0;
    VAR21 = 0xffffffff;
    for (VAR13 = 0; VAR13 < VAR29; VAR13++)
    {
        if (VAR10->VAR31[VAR13] < VAR21)
        {
            VAR21 = VAR10->VAR31[VAR13];
            VAR12 = VAR13;
        }
    }
    VAR18 = VAR10->VAR32 + (VAR12 << VAR10->VAR23);
    if (VAR22)
    {
        memset(VAR18, 0, VAR10->VAR34 * sizeof(VAR1));
        if (FUN4(VAR3->VAR26, VAR17, VAR18, VAR10->VAR34 * sizeof(VAR1)) < 0)
            return 0;
    }
    else
    {
        if (FUN5(VAR3->VAR26, VAR17, VAR18, VAR10->VAR34 * sizeof(VAR1)) != VAR10->VAR34 * sizeof(VAR1))
            return 0;
    }
    VAR10->VAR30[VAR12] = VAR17;
    VAR10->VAR31[VAR12] = 1;
VAR33:
    VAR16 = (VAR4 >> VAR10->VAR24) & (VAR10->VAR34 - 1);
    VAR19 = FUN6(VAR18[VAR16]);
    if (!VAR19 || ((VAR19 & VAR35) && VAR5 == 1))
    {
        if (!VAR5)
            return 0;
        if ((VAR19 & VAR35) && (VAR8 - VAR7) < VAR10->VAR36)
        {
            if (FUN7(VAR3, VAR19) < 0)
                return 0;
            VAR19 = FUN2(VAR3->VAR26->VAR3);
            VAR19 = (VAR19 + VAR10->VAR27 - 1) & ~(VAR10->VAR27 - 1);
            if (FUN8(VAR3->VAR26, VAR19, VAR10->VAR37, VAR10->VAR27) != VAR10->VAR27)
                return -1;
        }
        else
        {
            VAR19 = FUN2(VAR3->VAR26->VAR3);
            if (VAR5 == 1)
            {
                VAR19 = (VAR19 + VAR10->VAR27 - 1) & ~(VAR10->VAR27 - 1);
                FUN9(VAR3->VAR26, VAR19 + VAR10->VAR27, NULL);
                if (VAR3->VAR38 && (VAR8 - VAR7) < VAR10->VAR36)
                {
                    uint64_t VAR39;
                    assert(VAR10->VAR40);
                    VAR39 = (VAR4 & ~(VAR10->VAR27 - 1)) >> 9;
                    for (VAR13 = 0; VAR13 < VAR10->VAR36; VAR13++)
                    {
                        if (VAR13 < VAR7 || VAR13 >= VAR8)
                        {
                            VAR41 *VAR42 = NULL;
                            memset(VAR10->VAR43, 0x00, 512);
                            if (FUN10(VAR10->VAR40, VAR39 + VAR13, VAR10->VAR43, VAR44, &VAR42) < 0)
                            {
                                FUN11(VAR42);
                                VAR45 = VAR46;
                                return -1;
                            }
                            if (FUN8(VAR3->VAR26, VAR19 + VAR13 * 512, VAR10->VAR43, 512) != 512)
                                return -1;
                        }
                    }
                }
            }
            else if (VAR5 == 2)
            {
                VAR19 |= VAR35 | (VAR1)VAR6 << (63 - VAR10->VAR24);
            }
        }
        VAR20 = FUN3(VAR19);
        VAR18[VAR16] = VAR20;
        if (FUN4(VAR3->VAR26, VAR17 + VAR16 * sizeof(VAR20), &VAR20, sizeof(VAR20)) < 0)
            return 0;
    }
    return VAR19;
}