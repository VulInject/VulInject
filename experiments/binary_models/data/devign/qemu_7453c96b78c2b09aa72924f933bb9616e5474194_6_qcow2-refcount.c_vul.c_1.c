static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, bool *VAR6, VAR7 **VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int64_t VAR14, VAR15;
    int VAR16;
    for (VAR14 = 0; VAR14 < VAR12->VAR17; VAR14++)
    {
        uint64_t VAR18, VAR19;
        VAR18 = VAR12->VAR8[VAR14];
        VAR19 = VAR18 >> VAR12->VAR20;
        if (FUN2(VAR12, VAR18))
        {
            fprintf(VAR21, "" VAR22 ""
                            "",
                    VAR14);
            VAR4->VAR23++;
            *VAR6 = true;
            continue;
        }
        if (VAR19 >= *VAR10)
        {
            fprintf(VAR21, "" VAR22 "", VAR5 & VAR24 ? "" : "", VAR14);
            if (VAR5 & VAR24)
            {
                int64_t VAR25;
                if (VAR18 > VAR26 - VAR12->VAR27)
                {
                    VAR16 = -VAR28;
                    goto VAR29;
                }
                VAR16 = FUN3(VAR2->VAR30, VAR18 + VAR12->VAR27);
                if (VAR16 < 0)
                {
                    goto VAR29;
                }
                VAR15 = FUN4(VAR2->VAR30);
                if (VAR15 < 0)
                {
                    VAR16 = VAR15;
                    goto VAR29;
                }
                VAR25 = FUN5(VAR12, VAR15);
                assert(VAR25 >= *VAR10);
                VAR16 = FUN6(VAR12, VAR8, VAR10, VAR25);
                if (VAR16 < 0)
                {
                    VAR4->VAR31++;
                    return VAR16;
                }
                if (VAR19 >= *VAR10)
                {
                    VAR16 = -VAR28;
                    goto VAR29;
                }
                VAR4->VAR32++;
                VAR16 = FUN7(VAR2, VAR4, VAR8, VAR10, VAR18, VAR12->VAR27);
                if (VAR16 < 0)
                {
                    return VAR16;
                }
                continue;
            VAR29:
                VAR4->VAR23++;
                *VAR6 = true;
                fprintf(VAR21, "", strerror(-VAR16));
            }
            else
            {
                VAR4->VAR23++;
            }
            continue;
        }
        if (VAR18 != 0)
        {
            VAR16 = FUN7(VAR2, VAR4, VAR8, VAR10, VAR18, VAR12->VAR27);
            if (VAR16 < 0)
            {
                return VAR16;
            }
            if ((*VAR8)[VAR19] != 1)
            {
                fprintf(VAR21, "" VAR22 "", VAR14, (*VAR8)[VAR19]);
                VAR4->VAR23++;
                *VAR6 = true;
            }
        }
    }
    return 0;
}