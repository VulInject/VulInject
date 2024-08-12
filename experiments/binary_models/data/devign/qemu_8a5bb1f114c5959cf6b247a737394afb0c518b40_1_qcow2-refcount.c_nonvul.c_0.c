static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, bool *VAR6, void **VAR7, VAR8 *VAR9)
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
            *VAR6 = true;
            continue;
        }
        if (VAR18 >= *VAR9)
        {
            fprintf(VAR20, "" VAR21 "", VAR5 & VAR23 ? "" : "", VAR13);
            if (VAR5 & VAR23)
            {
                int64_t VAR24;
                VAR25 *VAR26 = NULL;
                if (VAR17 > VAR27 - VAR11->VAR28)
                {
                    VAR15 = -VAR29;
                    goto VAR30;
                }
                VAR15 = FUN3(VAR2->VAR31, VAR17 + VAR11->VAR28, &VAR26);
                if (VAR15 < 0)
                {
                    FUN4(VAR26);
                    goto VAR30;
                }
                VAR14 = FUN5(VAR2->VAR31->VAR2);
                if (VAR14 < 0)
                {
                    VAR15 = VAR14;
                    goto VAR30;
                }
                VAR24 = FUN6(VAR11, VAR14);
                assert(VAR24 >= *VAR9);
                VAR15 = FUN7(VAR11, VAR7, VAR9, VAR24);
                if (VAR15 < 0)
                {
                    VAR4->VAR32++;
                    return VAR15;
                }
                if (VAR18 >= *VAR9)
                {
                    VAR15 = -VAR29;
                    goto VAR30;
                }
                VAR4->VAR33++;
                VAR15 = FUN8(VAR2, VAR4, VAR7, VAR9, VAR17, VAR11->VAR28);
                if (VAR15 < 0)
                {
                    return VAR15;
                }
                continue;
            VAR30:
                VAR4->VAR22++;
                *VAR6 = true;
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
            VAR15 = FUN8(VAR2, VAR4, VAR7, VAR9, VAR17, VAR11->VAR28);
            if (VAR15 < 0)
            {
                return VAR15;
            }
            if (VAR11->FUN9(*VAR7, VAR18) != 1)
            {
                fprintf(VAR20, "" VAR21 "" VAR34 "", VAR13, VAR11->FUN9(*VAR7, VAR18));
                VAR4->VAR22++;
                *VAR6 = true;
            }
        }
    }
    return 0;
}