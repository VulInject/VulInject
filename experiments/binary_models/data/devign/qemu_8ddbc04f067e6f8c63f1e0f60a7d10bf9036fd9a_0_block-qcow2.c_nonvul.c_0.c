static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13, *VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR14 = NULL;
    VAR17 = VAR7 * sizeof(VAR12);
    FUN2(VAR2, VAR4, VAR5, VAR6, VAR17);
    VAR13 = FUN3(VAR17);
    if (FUN4(VAR10->VAR23, VAR6, VAR13, VAR17) != VAR17)
        goto VAR24;
    for (VAR19 = 0; VAR19 < VAR7; VAR19++)
        FUN5(&VAR13[VAR19]);
    VAR18 = VAR10->VAR18 * sizeof(VAR12);
    VAR14 = FUN3(VAR18);
    for (VAR19 = 0; VAR19 < VAR7; VAR19++)
    {
        VAR15 = VAR13[VAR19];
        if (VAR15)
        {
            if (VAR8)
            {
                VAR22 = FUN6(VAR2, (VAR15 & ~VAR25) >> VAR10->VAR26);
                if ((VAR22 == 1) != ((VAR15 & VAR25) != 0))
                {
                    fprintf(VAR27, "" VAR28 "", VAR15, VAR22);
                }
            }
            VAR15 &= ~VAR25;
            if (FUN4(VAR10->VAR23, VAR15, VAR14, VAR18) != VAR18)
                goto VAR24;
            for (VAR20 = 0; VAR20 < VAR10->VAR18; VAR20++)
            {
                VAR16 = FUN7(VAR14[VAR20]);
                if (VAR16 != 0)
                {
                    if (VAR16 & VAR29)
                    {
                        if (VAR16 & VAR25)
                        {
                            fprintf(VAR27, "" VAR30 ""
                                            ""
                                            "",
                                    VAR16 >> VAR10->VAR26);
                            VAR16 &= ~VAR25;
                        }
                        VAR21 = ((VAR16 >> VAR10->VAR31) & VAR10->VAR32) + 1;
                        VAR16 &= VAR10->VAR33;
                        FUN2(VAR2, VAR4, VAR5, VAR16 & ~511, VAR21 * 512);
                    }
                    else
                    {
                        if (VAR8)
                        {
                            VAR22 = FUN6(VAR2, (VAR16 & ~VAR25) >> VAR10->VAR26);
                            if ((VAR22 == 1) != ((VAR16 & VAR25) != 0))
                            {
                                fprintf(VAR27, "" VAR28 "", VAR16, VAR22);
                            }
                        }
                        VAR16 &= ~VAR25;
                        FUN2(VAR2, VAR4, VAR5, VAR16, VAR10->VAR34);
                    }
                }
            }
            FUN2(VAR2, VAR4, VAR5, VAR15, VAR10->VAR34);
        }
    }
    FUN8(VAR13);
    FUN8(VAR14);
    return 0;
VAR24:
    fprintf(VAR27, "");
    FUN8(VAR13);
    FUN8(VAR14);
    return -VAR35;
}