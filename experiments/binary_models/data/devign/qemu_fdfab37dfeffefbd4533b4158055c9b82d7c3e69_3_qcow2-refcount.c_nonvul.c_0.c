static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2(VAR2, VAR7->VAR11);
    int VAR12;
    uint64_t VAR13;
    int VAR14, VAR15;
    for (VAR14 = 0; VAR14 < VAR7->VAR16; VAR14++)
    {
        uint64_t VAR17 = VAR7->VAR18[VAR14];
        uint64_t VAR19 = VAR17 & VAR20;
        bool VAR21 = false;
        if (!VAR19)
        {
            continue;
        }
        VAR12 = FUN3(VAR2, VAR19 >> VAR7->VAR22, &VAR13);
        if (VAR12 < 0)
        {
            continue;
        }
        if ((VAR13 == 1) != ((VAR17 & VAR23) != 0))
        {
            fprintf(VAR24, ""
                            "" VAR25 "" VAR26 "",
                    VAR5 & VAR27 ? "" : "", VAR14, VAR17, VAR13);
            if (VAR5 & VAR27)
            {
                VAR7->VAR18[VAR14] = VAR13 == 1 ? VAR17 | VAR23 : VAR17 & ~VAR23;
                VAR12 = FUN4(VAR2, VAR14);
                if (VAR12 < 0)
                {
                    VAR4->VAR28++;
                    goto VAR29;
                }
                VAR4->VAR30++;
            }
            else
            {
                VAR4->VAR31++;
            }
        }
        VAR12 = FUN5(VAR2->VAR32, VAR19, VAR10, VAR7->VAR33 * sizeof(VAR9));
        if (VAR12 < 0)
        {
            fprintf(VAR24, "", strerror(-VAR12));
            VAR4->VAR28++;
            goto VAR29;
        }
        for (VAR15 = 0; VAR15 < VAR7->VAR33; VAR15++)
        {
            uint64_t VAR34 = FUN6(VAR10[VAR15]);
            uint64_t VAR35 = VAR34 & VAR36;
            QCow2ClusterType VAR37 = FUN7(VAR34);
            if (VAR37 == VAR38 || VAR37 == VAR39)
            {
                VAR12 = FUN3(VAR2, VAR35 >> VAR7->VAR22, &VAR13);
                if (VAR12 < 0)
                {
                    continue;
                }
                if ((VAR13 == 1) != ((VAR34 & VAR23) != 0))
                {
                    fprintf(VAR24, ""
                                    "" VAR25 "" VAR26 "",
                            VAR5 & VAR27 ? "" : "", VAR34, VAR13);
                    if (VAR5 & VAR27)
                    {
                        VAR10[VAR15] = FUN8(VAR13 == 1 ? VAR34 | VAR23 : VAR34 & ~VAR23);
                        VAR21 = true;
                        VAR4->VAR30++;
                    }
                    else
                    {
                        VAR4->VAR31++;
                    }
                }
            }
        }
        if (VAR21)
        {
            VAR12 = FUN9(VAR2, VAR40, VAR19, VAR7->VAR11);
            if (VAR12 < 0)
            {
                fprintf(VAR24, ""
                                "",
                        strerror(-VAR12));
                VAR4->VAR28++;
                goto VAR29;
            }
            VAR12 = FUN10(VAR2->VAR32, VAR19, VAR10, VAR7->VAR11);
            if (VAR12 < 0)
            {
                fprintf(VAR24, "", strerror(-VAR12));
                VAR4->VAR28++;
                goto VAR29;
            }
        }
    }
    VAR12 = 0;
VAR29:
    FUN11(VAR10);
    return VAR12;
}