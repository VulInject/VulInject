void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    int VAR4, VAR5;
    int64_t VAR6 = 0;
    const char *VAR7 = FUN2(VAR2->VAR8);
    if (!(strcmp(VAR7, "") && strcmp(VAR7, "") && strcmp(VAR7, "")))
        return;
    for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
    {
        VAR10 *VAR11 = VAR2->VAR12[VAR4];
        for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
        {
            VAR10 *VAR13 = VAR2->VAR12[VAR5];
            int VAR14, VAR15;
            if (VAR4 == VAR5)
                continue;
            for (VAR14 = VAR15 = 0; VAR14 < VAR11->VAR16; VAR14++)
            {
                VAR17 *VAR18 = &VAR11->VAR19[VAR14];
                int64_t VAR20 = FUN3(VAR18->VAR21, VAR11->VAR22, VAR23);
                for (; VAR15 < VAR13->VAR16; VAR15++)
                {
                    VAR17 *VAR24 = &VAR13->VAR19[VAR15];
                    int64_t VAR25 = FUN3(VAR24->VAR21, VAR13->VAR22, VAR23);
                    if (VAR25 - VAR20 < VAR3)
                        continue;
                    VAR6 = FUN4(VAR6, VAR18->VAR26 - VAR24->VAR26);
                    break;
                }
            }
        }
    }
    VAR6 *= 2;
    if (VAR2->VAR27->VAR28 < VAR6 && VAR6 < (1 << 24))
    {
        FUN5(VAR2, VAR29, "" VAR30 "", VAR6);
        FUN6(VAR2->VAR27, VAR6);
        VAR2->VAR27->VAR31 = FUN4(VAR2->VAR27->VAR31, VAR6 / 2);
    }
}