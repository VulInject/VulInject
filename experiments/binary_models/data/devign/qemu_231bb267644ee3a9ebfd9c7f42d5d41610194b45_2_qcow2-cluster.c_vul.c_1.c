static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7, VAR3 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    bool VAR12 = (VAR4 == VAR10->VAR4);
    VAR3 *VAR13 = NULL;
    int VAR14;
    int VAR15, VAR16;
    if (!VAR12)
    {
        VAR13 = FUN2(VAR2, VAR10->VAR17);
    }
    for (VAR15 = 0; VAR15 < VAR5; VAR15++)
    {
        uint64_t VAR18 = VAR4[VAR15] & VAR19;
        bool VAR20 = false;
        if (!VAR18)
        {
            continue;
        }
        if (VAR12)
        {
            VAR14 = FUN3(VAR2, VAR10->VAR21, VAR18, (void **)&VAR13);
        }
        else
        {
            VAR14 = FUN4(VAR2->VAR22, VAR18 / VAR23, (void *)VAR13, VAR10->VAR24);
        }
        if (VAR14 < 0)
        {
            goto VAR25;
        }
        for (VAR16 = 0; VAR16 < VAR10->VAR26; VAR16++)
        {
            uint64_t VAR27 = FUN5(VAR13[VAR16]);
            int64_t VAR28 = VAR27 & VAR29, VAR30;
            int VAR31 = FUN6(VAR27);
            bool VAR32 = VAR28 != 0;
            if (VAR31 == VAR33)
            {
                VAR30 = VAR28 >> VAR10->VAR34;
                assert((VAR30 >= 0) && (VAR30 < *VAR8));
                if ((*VAR7)[VAR30 / 8] & (1 << (VAR30 % 8)))
                {
                    VAR14 = FUN7(VAR2, VAR30, 1, VAR35);
                    if (VAR14 < 0)
                    {
                        goto VAR25;
                    }
                    VAR13[VAR16] = FUN8(VAR27 & ~VAR36);
                    VAR20 = true;
                }
                continue;
            }
            else if (FUN6(VAR27) != VAR37)
            {
                continue;
            }
            if (!VAR32)
            {
                if (!VAR2->VAR38)
                {
                    VAR13[VAR16] = 0;
                    VAR20 = true;
                    continue;
                }
                VAR28 = FUN9(VAR2, VAR10->VAR17);
                if (VAR28 < 0)
                {
                    VAR14 = VAR28;
                    goto VAR25;
                }
            }
            VAR14 = FUN10(VAR2, VAR39, VAR28, VAR10->VAR17);
            if (VAR14 < 0)
            {
                if (!VAR32)
                {
                    FUN11(VAR2, VAR28, VAR10->VAR17, VAR40);
                }
                goto VAR25;
            }
            VAR14 = FUN12(VAR2->VAR22, VAR28 / VAR23, VAR10->VAR24);
            if (VAR14 < 0)
            {
                if (!VAR32)
                {
                    FUN11(VAR2, VAR28, VAR10->VAR17, VAR40);
                }
                goto VAR25;
            }
            VAR13[VAR16] = FUN8(VAR28 | VAR36);
            VAR20 = true;
            VAR30 = VAR28 >> VAR10->VAR34;
            if (VAR30 >= *VAR8)
            {
                uint64_t VAR41 = (*VAR8 + 7) / 8;
                uint64_t VAR42;
                assert(VAR2->VAR22->VAR43);
                *VAR8 = FUN13(VAR10, VAR2->VAR22->VAR44 * VAR23);
                VAR42 = (*VAR8 + 7) / 8;
                *VAR7 = FUN14(*VAR7, VAR42);
                memset(&(*VAR7)[VAR41], 0, VAR42 - VAR41);
            }
            assert((VAR30 >= 0) && (VAR30 < *VAR8));
            (*VAR7)[VAR30 / 8] |= 1 << (VAR30 % 8);
        }
        if (VAR12)
        {
            if (VAR20)
            {
                FUN15(VAR10->VAR21, VAR13);
                FUN16(VAR10->VAR21);
            }
            VAR14 = FUN17(VAR2, VAR10->VAR21, (void **)&VAR13);
            if (VAR14 < 0)
            {
                VAR13 = NULL;
                goto VAR25;
            }
        }
        else
        {
            if (VAR20)
            {
                VAR14 = FUN10(VAR2, VAR39 & ~(VAR45 | VAR46), VAR18, VAR10->VAR17);
                if (VAR14 < 0)
                {
                    goto VAR25;
                }
                VAR14 = FUN18(VAR2->VAR22, VAR18 / VAR23, (void *)VAR13, VAR10->VAR24);
                if (VAR14 < 0)
                {
                    goto VAR25;
                }
            }
        }
    }
    VAR14 = 0;
VAR25:
    if (VAR13)
    {
        if (!VAR12)
        {
            FUN19(VAR13);
        }
        else
        {
            if (VAR14 < 0)
            {
                FUN17(VAR2, VAR10->VAR21, (void **)&VAR13);
            }
            else
            {
                VAR14 = FUN17(VAR2, VAR10->VAR21, (void **)&VAR13);
            }
        }
    }
    return VAR14;
}