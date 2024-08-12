int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int64_t VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    VAR9 = FUN2(VAR2->VAR20);
    if (VAR9 < 0)
    {
        VAR4->VAR21++;
        return VAR9;
    }
    VAR12 = FUN3(VAR7, VAR9);
    if (VAR12 > VAR22)
    {
        VAR4->VAR21++;
        return -VAR23;
    }
    VAR18 = FUN4(VAR12 * sizeof(VAR17));
    VAR4->VAR24.VAR25 = FUN3(VAR7, VAR2->VAR26 * VAR27);
    FUN5(VAR2, VAR4, VAR18, VAR12, 0, VAR7->VAR28);
    VAR19 = FUN6(VAR2, VAR4, VAR18, VAR12, VAR7->VAR29, VAR7->VAR30, VAR31);
    if (VAR19 < 0)
    {
        goto VAR32;
    }
    for (VAR10 = 0; VAR10 < VAR7->VAR33; VAR10++)
    {
        VAR16 = VAR7->VAR34 + VAR10;
        VAR19 = FUN6(VAR2, VAR4, VAR18, VAR12, VAR16->VAR29, VAR16->VAR30, 0);
        if (VAR19 < 0)
        {
            goto VAR32;
        }
    }
    FUN5(VAR2, VAR4, VAR18, VAR12, VAR7->VAR35, VAR7->VAR36);
    FUN5(VAR2, VAR4, VAR18, VAR12, VAR7->VAR37, VAR7->VAR38 * sizeof(VAR39));
    for (VAR10 = 0; VAR10 < VAR7->VAR38; VAR10++)
    {
        uint64_t VAR40, VAR41;
        VAR40 = VAR7->VAR18[VAR10];
        VAR41 = VAR40 >> VAR7->VAR42;
        if (FUN7(VAR7, VAR40))
        {
            fprintf(VAR43, "" VAR44 ""
                            "",
                    VAR10);
            VAR4->VAR45++;
            continue;
        }
        if (VAR41 >= VAR12)
        {
            fprintf(VAR43, "" VAR44 "", VAR10);
            VAR4->VAR45++;
            continue;
        }
        if (VAR40 != 0)
        {
            FUN5(VAR2, VAR4, VAR18, VAR12, VAR40, VAR7->VAR28);
            if (VAR18[VAR41] != 1)
            {
                fprintf(VAR43, "" VAR44 "", VAR5 & VAR46 ? "" : "", VAR10, VAR18[VAR41]);
                if (VAR5 & VAR46)
                {
                    int64_t VAR47;
                    VAR47 = FUN8(VAR2, VAR10, VAR40);
                    if (VAR47 < 0)
                    {
                        VAR4->VAR45++;
                        continue;
                    }
                    if ((VAR47 >> VAR7->VAR42) >= VAR12)
                    {
                        int VAR48 = VAR12;
                        VAR12 = (VAR47 >> VAR7->VAR42) + 1;
                        VAR18 = FUN9(VAR18, VAR12 * sizeof(VAR17));
                        memset(&VAR18[VAR48], 0, (VAR12 - VAR48) * sizeof(VAR17));
                    }
                    VAR18[VAR41]--;
                    FUN5(VAR2, VAR4, VAR18, VAR12, VAR47, VAR7->VAR28);
                    VAR4->VAR49++;
                }
                else
                {
                    VAR4->VAR45++;
                }
            }
        }
    }
    for (VAR10 = 0, VAR11 = 0; VAR10 < VAR12; VAR10++)
    {
        VAR13 = FUN10(VAR2, VAR10);
        if (VAR13 < 0)
        {
            fprintf(VAR43, "" VAR44 "", VAR10, strerror(-VAR13));
            VAR4->VAR21++;
            continue;
        }
        VAR14 = VAR18[VAR10];
        if (VAR13 > 0 || VAR14 > 0)
        {
            VAR11 = VAR10;
        }
        if (VAR13 != VAR14)
        {
            int *VAR50 = NULL;
            if (VAR13 > VAR14 && (VAR5 & VAR51))
            {
                VAR50 = &VAR4->VAR52;
            }
            else if (VAR13 < VAR14 && (VAR5 & VAR46))
            {
                VAR50 = &VAR4->VAR49;
            }
            fprintf(VAR43, "" VAR44 "", VAR50 != NULL ? "" : VAR13 < VAR14 ? ""
                                                                                                                                         : "",
                    VAR10, VAR13, VAR14);
            if (VAR50)
            {
                VAR19 = FUN11(VAR2, VAR10 << VAR7->VAR42, 1, VAR14 - VAR13, VAR53);
                if (VAR19 >= 0)
                {
                    (*VAR50)++;
                    continue;
                }
            }
            if (VAR13 < VAR14)
            {
                VAR4->VAR45++;
            }
            else
            {
                VAR4->VAR54++;
            }
        }
    }
    VAR19 = FUN12(VAR2, VAR4, VAR5);
    if (VAR19 < 0)
    {
        goto VAR32;
    }
    VAR4->VAR55 = (VAR11 + 1) * VAR7->VAR28;
    VAR19 = 0;
VAR32:
    FUN13(VAR18);
    return VAR19;
}