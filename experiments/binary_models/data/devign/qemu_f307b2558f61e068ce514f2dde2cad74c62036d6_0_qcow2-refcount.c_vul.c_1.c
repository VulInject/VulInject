static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, VAR6 **VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int64_t VAR13, VAR14;
    int VAR15;
    for (VAR13 = 0; VAR13 < VAR11->VAR16; VAR13++)
    {
        uint64_t VAR17, VAR18;
        VAR17 = VAR11->VAR7[VAR13];
        VAR18 = VAR17 >> VAR11->VAR19;
        if (FUN2(VAR11, VAR17))
        {
            fprintf(VAR20, "" VAR21 ""
                            "",
                    VAR13);
            VAR4->VAR22++;
            continue;
        }
        if (VAR18 >= *VAR9)
        {
            fprintf(VAR20, "" VAR21 "", VAR5 & VAR23 ? "" : "", VAR13);
            if (VAR5 & VAR23)
            {
                int64_t VAR24 = *VAR9;
                VAR6 *VAR25;
                if (VAR17 > VAR26 - VAR11->VAR27)
                {
                    VAR15 = -VAR28;
                    goto VAR29;
                }
                VAR15 = FUN3(VAR2->VAR30, VAR17 + VAR11->VAR27);
                if (VAR15 < 0)
                {
                    goto VAR29;
                }
                VAR14 = FUN4(VAR2->VAR30);
                if (VAR14 < 0)
                {
                    VAR15 = VAR14;
                    goto VAR29;
                }
                *VAR9 = FUN5(VAR11, VAR14);
                assert(*VAR9 >= VAR24);
                VAR25 = FUN6(*VAR7, *VAR9 * sizeof(**VAR7));
                if (!VAR25)
                {
                    *VAR9 = VAR24;
                    VAR4->VAR31++;
                    return -VAR32;
                }
                *VAR7 = VAR25;
                memset(*VAR7 + VAR24, 0, (*VAR9 - VAR24) * sizeof(**VAR7));
                if (VAR18 >= *VAR9)
                {
                    VAR15 = -VAR28;
                    goto VAR29;
                }
                VAR4->VAR33++;
                VAR15 = FUN7(VAR2, VAR4, VAR7, VAR9, VAR17, VAR11->VAR27);
                if (VAR15 < 0)
                {
                    return VAR15;
                }
                continue;
            VAR29:
                VAR4->VAR22++;
                fprintf(VAR20, "", strerror(-VAR15));
            }
            else
            {
                VAR4->VAR22++;
            }
            continue;
        }
        if (VAR17 != 0)
        {
            VAR15 = FUN7(VAR2, VAR4, VAR7, VAR9, VAR17, VAR11->VAR27);
            if (VAR15 < 0)
            {
                return VAR15;
            }
            if ((*VAR7)[VAR18] != 1)
            {
                fprintf(VAR20, "" VAR21 "", VAR5 & VAR23 ? "" : "", VAR13, (*VAR7)[VAR18]);
                if (VAR5 & VAR23)
                {
                    int64_t VAR34;
                    VAR34 = FUN8(VAR2, VAR13, VAR17);
                    if (VAR34 < 0)
                    {
                        VAR4->VAR22++;
                        continue;
                    }
                    if ((VAR34 >> VAR11->VAR19) >= *VAR9)
                    {
                        int VAR24 = *VAR9;
                        *VAR9 = (VAR34 >> VAR11->VAR19) + 1;
                        *VAR7 = FUN9(VAR6, *VAR7, *VAR9);
                        memset(&(*VAR7)[VAR24], 0, (*VAR9 - VAR24) * sizeof(**VAR7));
                    }
                    (*VAR7)[VAR18]--;
                    VAR15 = FUN7(VAR2, VAR4, VAR7, VAR9, VAR34, VAR11->VAR27);
                    if (VAR15 < 0)
                    {
                        return VAR15;
                    }
                    VAR4->VAR33++;
                }
                else
                {
                    VAR4->VAR22++;
                }
            }
        }
    }
    return 0;
}