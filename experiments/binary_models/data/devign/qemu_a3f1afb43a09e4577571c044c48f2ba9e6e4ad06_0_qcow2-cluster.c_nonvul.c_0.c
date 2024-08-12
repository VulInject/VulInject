static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int64_t VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    bool VAR14 = (VAR4 == VAR12->VAR4);
    VAR3 *VAR15 = NULL;
    int VAR16;
    int VAR17, VAR18;
    if (!VAR14)
    {
        VAR15 = FUN2(VAR2->VAR19, VAR12->VAR20);
        if (VAR15 == NULL)
        {
            return -VAR21;
        }
    }
    for (VAR17 = 0; VAR17 < VAR5; VAR17++)
    {
        uint64_t VAR22 = VAR4[VAR17] & VAR23;
        bool VAR24 = false;
        uint64_t VAR25;
        if (!VAR22)
        {
            (*VAR7)++;
            if (VAR10)
            {
                FUN3(VAR2, *VAR7, VAR8);
            }
            continue;
        }
        if (FUN4(VAR12, VAR22))
        {
            FUN5(VAR2, true, -1, -1, "" VAR26 "", VAR22, VAR17);
            VAR16 = -VAR27;
            goto VAR28;
        }
        if (VAR14)
        {
            VAR16 = FUN6(VAR2, VAR12->VAR29, VAR22, (void **)&VAR15);
        }
        else
        {
            VAR16 = FUN7(VAR2->VAR19, VAR22 / VAR30, (void *)VAR15, VAR12->VAR31);
        }
        if (VAR16 < 0)
        {
            goto VAR28;
        }
        VAR16 = FUN8(VAR2, VAR22 >> VAR12->VAR32, &VAR25);
        if (VAR16 < 0)
        {
            goto VAR28;
        }
        for (VAR18 = 0; VAR18 < VAR12->VAR33; VAR18++)
        {
            uint64_t VAR34 = FUN9(VAR15[VAR18]);
            int64_t VAR35 = VAR34 & VAR36;
            int VAR37 = FUN10(VAR34);
            bool VAR38 = VAR35 != 0;
            if (VAR37 != VAR39)
            {
                continue;
            }
            if (!VAR38)
            {
                if (!VAR2->VAR40)
                {
                    VAR15[VAR18] = 0;
                    VAR24 = true;
                    continue;
                }
                VAR35 = FUN11(VAR2, VAR12->VAR20);
                if (VAR35 < 0)
                {
                    VAR16 = VAR35;
                    goto VAR28;
                }
                if (VAR25 > 1)
                {
                    VAR16 = FUN12(VAR2, VAR35 >> VAR12->VAR32, FUN13(1, VAR25), false, VAR41);
                    if (VAR16 < 0)
                    {
                        FUN14(VAR2, VAR35, VAR12->VAR20, VAR41);
                        goto VAR28;
                    }
                }
            }
            if (FUN4(VAR12, VAR35))
            {
                FUN5(VAR2, true, -1, -1, ""
                                                          "" VAR26 "" VAR26 "",
                                        VAR35, VAR22, VAR18);
                if (!VAR38)
                {
                    FUN14(VAR2, VAR35, VAR12->VAR20, VAR42);
                }
                VAR16 = -VAR27;
                goto VAR28;
            }
            VAR16 = FUN15(VAR2, 0, VAR35, VAR12->VAR20);
            if (VAR16 < 0)
            {
                if (!VAR38)
                {
                    FUN14(VAR2, VAR35, VAR12->VAR20, VAR42);
                }
                goto VAR28;
            }
            VAR16 = FUN16(VAR2->VAR19, VAR35 / VAR30, VAR12->VAR31, 0);
            if (VAR16 < 0)
            {
                if (!VAR38)
                {
                    FUN14(VAR2, VAR35, VAR12->VAR20, VAR42);
                }
                goto VAR28;
            }
            if (VAR25 == 1)
            {
                VAR15[VAR18] = FUN17(VAR35 | VAR43);
            }
            else
            {
                VAR15[VAR18] = FUN17(VAR35);
            }
            VAR24 = true;
        }
        if (VAR14)
        {
            if (VAR24)
            {
                FUN18(VAR2, VAR12->VAR29, VAR15);
                FUN19(VAR12->VAR29);
            }
            FUN20(VAR2, VAR12->VAR29, (void **)&VAR15);
        }
        else
        {
            if (VAR24)
            {
                VAR16 = FUN15(VAR2, VAR44 | VAR45, VAR22, VAR12->VAR20);
                if (VAR16 < 0)
                {
                    goto VAR28;
                }
                VAR16 = FUN21(VAR2->VAR19, VAR22 / VAR30, (void *)VAR15, VAR12->VAR31);
                if (VAR16 < 0)
                {
                    goto VAR28;
                }
            }
        }
        (*VAR7)++;
        if (VAR10)
        {
            FUN3(VAR2, *VAR7, VAR8);
        }
    }
    VAR16 = 0;
VAR28:
    if (VAR15)
    {
        if (!VAR14)
        {
            FUN22(VAR15);
        }
        else
        {
            FUN20(VAR2, VAR12->VAR29, (void **)&VAR15);
        }
    }
    return VAR16;
}