static int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    uint64_t VAR19, *VAR20, VAR21, VAR22;
    uint32_t VAR23;
    int VAR24;
    *VAR9 = 0;
    VAR16 = VAR3 >> (VAR11->VAR25 + VAR11->VAR26);
    VAR19 = VAR11->VAR27[VAR16];
    VAR24 = 0;
    if (!VAR19)
    {
        if (!VAR4)
            return 0;
        VAR19 = FUN2(VAR2->VAR28->VAR2);
        VAR19 = (VAR19 + VAR11->VAR29 - 1) & ~(VAR11->VAR29 - 1);
        VAR11->VAR27[VAR16] = VAR19;
        VAR22 = FUN3(VAR19);
        VAR18 = FUN4(VAR2->VAR28, VAR11->VAR30 + VAR16 * sizeof(VAR22), &VAR22, sizeof(VAR22));
        if (VAR18 < 0)
        {
            return VAR18;
        }
        VAR24 = 1;
    }
    for (VAR14 = 0; VAR14 < VAR31; VAR14++)
    {
        if (VAR19 == VAR11->VAR32[VAR14])
        {
            if (++VAR11->VAR33[VAR14] == 0xffffffff)
            {
                for (VAR15 = 0; VAR15 < VAR31; VAR15++)
                {
                    VAR11->VAR33[VAR15] >>= 1;
                }
            }
            VAR20 = VAR11->VAR34 + (VAR14 << VAR11->VAR25);
            goto VAR35;
        }
    }
    VAR13 = 0;
    VAR23 = 0xffffffff;
    for (VAR14 = 0; VAR14 < VAR31; VAR14++)
    {
        if (VAR11->VAR33[VAR14] < VAR23)
        {
            VAR23 = VAR11->VAR33[VAR14];
            VAR13 = VAR14;
        }
    }
    VAR20 = VAR11->VAR34 + (VAR13 << VAR11->VAR25);
    if (VAR24)
    {
        memset(VAR20, 0, VAR11->VAR36 * sizeof(VAR8));
        VAR18 = FUN4(VAR2->VAR28, VAR19, VAR20, VAR11->VAR36 * sizeof(VAR8));
        if (VAR18 < 0)
        {
            return VAR18;
        }
    }
    else
    {
        VAR18 = FUN5(VAR2->VAR28, VAR19, VAR20, VAR11->VAR36 * sizeof(VAR8));
        if (VAR18 < 0)
        {
            return VAR18;
        }
    }
    VAR11->VAR32[VAR13] = VAR19;
    VAR11->VAR33[VAR13] = 1;
VAR35:
    VAR17 = (VAR3 >> VAR11->VAR26) & (VAR11->VAR36 - 1);
    VAR21 = FUN6(VAR20[VAR17]);
    if (!VAR21 || ((VAR21 & VAR37) && VAR4 == 1))
    {
        if (!VAR4)
            return 0;
        if ((VAR21 & VAR37) && (VAR7 - VAR6) < VAR11->VAR38)
        {
            if (FUN7(VAR2, VAR21) < 0)
            {
                return -VAR39;
            }
            VAR21 = FUN2(VAR2->VAR28->VAR2);
            VAR21 = (VAR21 + VAR11->VAR29 - 1) & ~(VAR11->VAR29 - 1);
            VAR18 = FUN8(VAR2->VAR28, VAR21, VAR11->VAR40, VAR11->VAR29);
            if (VAR18 < 0)
            {
                return VAR18;
            }
        }
        else
        {
            VAR21 = FUN2(VAR2->VAR28->VAR2);
            if (VAR4 == 1)
            {
                VAR21 = (VAR21 + VAR11->VAR29 - 1) & ~(VAR11->VAR29 - 1);
                FUN9(VAR2->VAR28, VAR21 + VAR11->VAR29, VAR41, NULL);
                if (VAR2->VAR42 && (VAR7 - VAR6) < VAR11->VAR38)
                {
                    uint64_t VAR43;
                    assert(VAR11->VAR44);
                    VAR43 = (VAR3 & ~(VAR11->VAR29 - 1)) >> 9;
                    for (VAR14 = 0; VAR14 < VAR11->VAR38; VAR14++)
                    {
                        if (VAR14 < VAR6 || VAR14 >= VAR7)
                        {
                            memset(VAR11->VAR45, 0x00, 512);
                            if (FUN10(VAR11->VAR44, VAR43 + VAR14, VAR11->VAR45, VAR46, NULL) < 0)
                            {
                                return -VAR39;
                            }
                            VAR18 = FUN8(VAR2->VAR28, VAR21 + VAR14 * 512, VAR11->VAR45, 512);
                            if (VAR18 < 0)
                            {
                                return VAR18;
                            }
                        }
                    }
                }
            }
            else if (VAR4 == 2)
            {
                VAR21 |= VAR37 | (VAR8)VAR5 << (63 - VAR11->VAR26);
            }
        }
        VAR22 = FUN3(VAR21);
        VAR20[VAR17] = VAR22;
        VAR18 = FUN4(VAR2->VAR28, VAR19 + VAR17 * sizeof(VAR22), &VAR22, sizeof(VAR22));
        if (VAR18 < 0)
        {
            return VAR18;
        }
    }
    *VAR9 = VAR21;
    return 1;
}