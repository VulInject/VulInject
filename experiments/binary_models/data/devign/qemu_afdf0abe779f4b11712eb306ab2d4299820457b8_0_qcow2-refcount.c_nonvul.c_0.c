static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20;
    VAR17 = VAR9 * sizeof(VAR14);
    FUN2(VAR2, VAR4, VAR6, VAR7, VAR8, VAR17);
    if (VAR17 == 0)
    {
        VAR15 = NULL;
    }
    else
    {
        VAR15 = FUN3(VAR17);
        if (FUN4(VAR2->VAR21, VAR8, VAR15, VAR17) != VAR17)
            goto VAR22;
        for (VAR18 = 0; VAR18 < VAR9; VAR18++)
            FUN5(&VAR15[VAR18]);
    }
    for (VAR18 = 0; VAR18 < VAR9; VAR18++)
    {
        VAR16 = VAR15[VAR18];
        if (VAR16)
        {
            if (VAR10)
            {
                VAR19 = FUN6(VAR2, (VAR16 & ~VAR23) >> VAR12->VAR24);
                if (VAR19 < 0)
                {
                    fprintf(VAR25, "" VAR26 "", VAR16, strerror(-VAR19));
                    goto VAR22;
                }
                if ((VAR19 == 1) != ((VAR16 & VAR23) != 0))
                {
                    fprintf(VAR25, "" VAR26 "", VAR16, VAR19);
                    VAR4->VAR27++;
                }
            }
            VAR16 &= VAR28;
            FUN2(VAR2, VAR4, VAR6, VAR7, VAR16, VAR12->VAR29);
            if (VAR16 & (VAR12->VAR29 - 1))
            {
                fprintf(VAR25, "" VAR26 ""
                                "",
                        VAR16);
                VAR4->VAR27++;
            }
            VAR20 = FUN7(VAR2, VAR4, VAR6, VAR7, VAR16, VAR10);
            if (VAR20 < 0)
            {
                goto VAR22;
            }
        }
    }
    FUN8(VAR15);
    return 0;
VAR22:
    fprintf(VAR25, "");
    VAR4->VAR30++;
    FUN8(VAR15);
    return -VAR31;
}