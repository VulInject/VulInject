static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int64_t VAR8, VAR9 *VAR10, void *VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    bool VAR15 = (VAR4 == VAR13->VAR4);
    VAR3 *VAR16 = NULL;
    int VAR17;
    int VAR18, VAR19;
    if (!VAR15)
    {
        VAR16 = FUN2(VAR2->VAR20->VAR2, VAR13->VAR21);
        if (VAR16 == NULL)
        {
            return -VAR22;
        }
    }
    for (VAR18 = 0; VAR18 < VAR5; VAR18++)
    {
        uint64_t VAR23 = VAR4[VAR18] & VAR24;
        bool VAR25 = false;
        uint64_t VAR26;
        if (!VAR23)
        {
            (*VAR7)++;
            if (VAR10)
            {
                FUN3(VAR2, *VAR7, VAR8, VAR11);
            }
            continue;
        }
        if (FUN4(VAR13, VAR23))
        {
            FUN5(VAR2, true, -1, -1, "" VAR27 "", VAR23, VAR18);
            VAR17 = -VAR28;
            goto VAR29;
        }
        if (VAR15)
        {
            VAR17 = FUN6(VAR2, VAR13->VAR30, VAR23, (void **)&VAR16);
        }
        else
        {
            VAR17 = FUN7(VAR2->VAR20, VAR23 / VAR31, (void *)VAR16, VAR13->VAR32);
        }
        if (VAR17 < 0)
        {
            goto VAR29;
        }
        VAR17 = FUN8(VAR2, VAR23 >> VAR13->VAR33, &VAR26);
        if (VAR17 < 0)
        {
            goto VAR29;
        }
        for (VAR19 = 0; VAR19 < VAR13->VAR34; VAR19++)
        {
            uint64_t VAR35 = FUN9(VAR16[VAR19]);
            int64_t VAR36 = VAR35 & VAR37;
            QCow2ClusterType VAR38 = FUN10(VAR35);
            if (VAR38 != VAR39 && VAR38 != VAR40)
            {
                continue;
            }
            if (VAR38 == VAR39)
            {
                if (!VAR2->VAR41)
                {
                    VAR16[VAR19] = 0;
                    VAR25 = true;
                    continue;
                }
                VAR36 = FUN11(VAR2, VAR13->VAR21);
                if (VAR36 < 0)
                {
                    VAR17 = VAR36;
                    goto VAR29;
                }
                if (VAR26 > 1)
                {
                    VAR17 = FUN12(VAR2, VAR36 >> VAR13->VAR33, FUN13(1, VAR26), false, VAR42);
                    if (VAR17 < 0)
                    {
                        FUN14(VAR2, VAR36, VAR13->VAR21, VAR42);
                        goto VAR29;
                    }
                }
            }
            if (FUN4(VAR13, VAR36))
            {
                FUN5(VAR2, true, -1, -1, ""
                                                          "" VAR27 "" VAR27 "",
                                        VAR36, VAR23, VAR19);
                if (VAR38 == VAR39)
                {
                    FUN14(VAR2, VAR36, VAR13->VAR21, VAR43);
                }
                VAR17 = -VAR28;
                goto VAR29;
            }
            VAR17 = FUN15(VAR2, 0, VAR36, VAR13->VAR21);
            if (VAR17 < 0)
            {
                if (VAR38 == VAR39)
                {
                    FUN14(VAR2, VAR36, VAR13->VAR21, VAR43);
                }
                goto VAR29;
            }
            VAR17 = FUN16(VAR2->VAR20, VAR36, VAR13->VAR21, 0);
            if (VAR17 < 0)
            {
                if (VAR38 == VAR39)
                {
                    FUN14(VAR2, VAR36, VAR13->VAR21, VAR43);
                }
                goto VAR29;
            }
            if (VAR26 == 1)
            {
                VAR16[VAR19] = FUN17(VAR36 | VAR44);
            }
            else
            {
                VAR16[VAR19] = FUN17(VAR36);
            }
            VAR25 = true;
        }
        if (VAR15)
        {
            if (VAR25)
            {
                FUN18(VAR2, VAR13->VAR30, VAR16);
                FUN19(VAR13->VAR30);
            }
            FUN20(VAR2, VAR13->VAR30, (void **)&VAR16);
        }
        else
        {
            if (VAR25)
            {
                VAR17 = FUN15(VAR2, VAR45 | VAR46, VAR23, VAR13->VAR21);
                if (VAR17 < 0)
                {
                    goto VAR29;
                }
                VAR17 = FUN21(VAR2->VAR20, VAR23 / VAR31, (void *)VAR16, VAR13->VAR32);
                if (VAR17 < 0)
                {
                    goto VAR29;
                }
            }
        }
        (*VAR7)++;
        if (VAR10)
        {
            FUN3(VAR2, *VAR7, VAR8, VAR11);
        }
    }
    VAR17 = 0;
VAR29:
    if (VAR16)
    {
        if (!VAR15)
        {
            FUN22(VAR16);
        }
        else
        {
            FUN20(VAR2, VAR13->VAR30, (void **)&VAR16);
        }
    }
    return VAR17;
}