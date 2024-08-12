int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int64_t VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    VAR9 = FUN2(VAR2->VAR20);
    VAR12 = FUN3(VAR7, VAR9);
    VAR18 = FUN4(VAR12 * sizeof(VAR17));
    FUN5(VAR2, VAR4, VAR18, VAR12, 0, VAR7->VAR21);
    VAR19 = FUN6(VAR2, VAR4, VAR18, VAR12, VAR7->VAR22, VAR7->VAR23, VAR24);
    if (VAR19 < 0)
    {
        goto VAR25;
    }
    for (VAR10 = 0; VAR10 < VAR7->VAR26; VAR10++)
    {
        VAR16 = VAR7->VAR27 + VAR10;
        VAR19 = FUN6(VAR2, VAR4, VAR18, VAR12, VAR16->VAR22, VAR16->VAR23, 0);
        if (VAR19 < 0)
        {
            goto VAR25;
        }
    }
    FUN5(VAR2, VAR4, VAR18, VAR12, VAR7->VAR28, VAR7->VAR29);
    FUN5(VAR2, VAR4, VAR18, VAR12, VAR7->VAR30, VAR7->VAR31 * sizeof(VAR32));
    for (VAR10 = 0; VAR10 < VAR7->VAR31; VAR10++)
    {
        uint64_t VAR33, VAR34;
        VAR33 = VAR7->VAR18[VAR10];
        VAR34 = VAR33 >> VAR7->VAR35;
        if (VAR33 & (VAR7->VAR21 - 1))
        {
            fprintf(VAR36, "" VAR37 ""
                            "",
                    VAR10);
            VAR4->VAR38++;
            continue;
        }
        if (VAR34 >= VAR12)
        {
            fprintf(VAR36, "" VAR37 "", VAR10);
            VAR4->VAR38++;
            continue;
        }
        if (VAR33 != 0)
        {
            FUN5(VAR2, VAR4, VAR18, VAR12, VAR33, VAR7->VAR21);
            if (VAR18[VAR34] != 1)
            {
                fprintf(VAR36, "" VAR37 "", VAR10, VAR18[VAR34]);
                VAR4->VAR38++;
            }
        }
    }
    for (VAR10 = 0, VAR11 = 0; VAR10 < VAR12; VAR10++)
    {
        VAR13 = FUN7(VAR2, VAR10);
        if (VAR13 < 0)
        {
            fprintf(VAR36, "" VAR37 "", VAR10, strerror(-VAR13));
            VAR4->VAR39++;
            continue;
        }
        VAR14 = VAR18[VAR10];
        if (VAR13 > 0 || VAR14 > 0)
        {
            VAR11 = VAR10;
        }
        if (VAR13 != VAR14)
        {
            int *VAR40 = NULL;
            if (VAR13 > VAR14 && (VAR5 & VAR41))
            {
                VAR40 = &VAR4->VAR42;
            }
            else if (VAR13 < VAR14 && (VAR5 & VAR43))
            {
                VAR40 = &VAR4->VAR44;
            }
            fprintf(VAR36, "" VAR37 "", VAR40 != NULL ? "" : VAR13 < VAR14 ? ""
                                                                                                                                         : "",
                    VAR10, VAR13, VAR14);
            if (VAR40)
            {
                VAR19 = FUN8(VAR2, VAR10 << VAR7->VAR35, 1, VAR14 - VAR13);
                if (VAR19 >= 0)
                {
                    (*VAR40)++;
                    continue;
                }
            }
            if (VAR13 < VAR14)
            {
                VAR4->VAR38++;
            }
            else
            {
                VAR4->VAR45++;
            }
        }
    }
    VAR4->VAR46 = (VAR11 + 1) * VAR7->VAR21;
    VAR19 = 0;
VAR25:
    FUN9(VAR18);
    return VAR19;
}