static void FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, VAR6 *VAR7, VAR8 *VAR9, int64_t VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int64_t VAR14;
    int VAR15, VAR16, VAR17;
    for (VAR14 = 0, *VAR7 = 0; VAR14 < VAR10; VAR14++)
    {
        VAR15 = FUN2(VAR2, VAR14);
        if (VAR15 < 0)
        {
            fprintf(VAR18, "" VAR19 "", VAR14, strerror(-VAR15));
            VAR4->VAR20++;
            continue;
        }
        VAR16 = VAR9[VAR14];
        if (VAR15 > 0 || VAR16 > 0)
        {
            *VAR7 = VAR14;
        }
        if (VAR15 != VAR16)
        {
            int *VAR21 = NULL;
            if (VAR15 > VAR16 && (VAR5 & VAR22))
            {
                VAR21 = &VAR4->VAR23;
            }
            else if (VAR15 < VAR16 && (VAR5 & VAR24))
            {
                VAR21 = &VAR4->VAR25;
            }
            fprintf(VAR18, "" VAR19 "", VAR21 != NULL ? "" : VAR15 < VAR16 ? ""
                                                                                                                                         : "",
                    VAR14, VAR15, VAR16);
            if (VAR21)
            {
                VAR17 = FUN3(VAR2, VAR14 << VAR12->VAR26, 1, VAR16 - VAR15, VAR27);
                if (VAR17 >= 0)
                {
                    (*VAR21)++;
                    continue;
                }
            }
            if (VAR15 < VAR16)
            {
                VAR4->VAR28++;
            }
            else
            {
                VAR4->VAR29++;
            }
        }
    }
}