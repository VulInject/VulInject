static void FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, bool *VAR6, VAR7 *VAR8, VAR9 *VAR10, int64_t VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    int64_t VAR15;
    uint64_t VAR16, VAR17;
    int VAR18;
    for (VAR15 = 0, *VAR8 = 0; VAR15 < VAR11; VAR15++)
    {
        VAR18 = FUN2(VAR2, VAR15, &VAR16);
        if (VAR18 < 0)
        {
            fprintf(VAR19, "" VAR20 "", VAR15, strerror(-VAR18));
            VAR4->VAR21++;
            continue;
        }
        VAR17 = VAR10[VAR15];
        if (VAR16 > 0 || VAR17 > 0)
        {
            *VAR8 = VAR15;
        }
        if (VAR16 != VAR17)
        {
            int *VAR22 = NULL;
            if (VAR16 == 0)
            {
                *VAR6 = true;
            }
            else if (VAR16 > VAR17 && (VAR5 & VAR23))
            {
                VAR22 = &VAR4->VAR24;
            }
            else if (VAR16 < VAR17 && (VAR5 & VAR25))
            {
                VAR22 = &VAR4->VAR26;
            }
            fprintf(VAR19, "" VAR20 "" VAR27 "" VAR27 "", VAR22 != NULL ? "" : VAR16 < VAR17 ? ""
                                                                                                                                                           : "",
                    VAR15, VAR16, VAR17);
            if (VAR22)
            {
                VAR18 = FUN3(VAR2, VAR15 << VAR13->VAR28, 1, FUN4(VAR16, VAR17), VAR16 > VAR17, VAR29);
                if (VAR18 >= 0)
                {
                    (*VAR22)++;
                    continue;
                }
            }
            if (VAR16 < VAR17)
            {
                VAR4->VAR30++;
            }
            else
            {
                VAR4->VAR31++;
            }
        }
    }
}