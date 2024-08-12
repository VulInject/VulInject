static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19 = 0;
    VAR15 = VAR7 * sizeof(VAR12);
    VAR19 += FUN2(VAR2, VAR4, VAR5, VAR6, VAR15);
    if (VAR15 == 0)
    {
        VAR13 = NULL;
    }
    else
    {
        VAR13 = FUN3(VAR15);
        if (FUN4(VAR2->VAR20, VAR6, VAR13, VAR15) != VAR15)
            goto VAR21;
        for (VAR16 = 0; VAR16 < VAR7; VAR16++)
            FUN5(&VAR13[VAR16]);
    }
    for (VAR16 = 0; VAR16 < VAR7; VAR16++)
    {
        VAR14 = VAR13[VAR16];
        if (VAR14)
        {
            if (VAR8)
            {
                VAR17 = FUN6(VAR2, (VAR14 & ~VAR22) >> VAR10->VAR23);
                if (VAR17 < 0)
                {
                    fprintf(VAR24, "" VAR25 "", VAR14, strerror(-VAR17));
                }
                if ((VAR17 == 1) != ((VAR14 & VAR22) != 0))
                {
                    fprintf(VAR24, "" VAR25 "", VAR14, VAR17);
                    VAR19++;
                }
            }
            VAR14 &= ~VAR22;
            VAR19 += FUN2(VAR2, VAR4, VAR5, VAR14, VAR10->VAR26);
            if (VAR14 & (VAR10->VAR26 - 1))
            {
                fprintf(VAR24, "" VAR25 ""
                                "",
                        VAR14);
                VAR19++;
            }
            VAR18 = FUN7(VAR2, VAR4, VAR5, VAR14, VAR8);
            if (VAR18 < 0)
            {
                goto VAR21;
            }
            VAR19 += VAR18;
        }
    }
    FUN8(VAR13);
    return VAR19;
VAR21:
    fprintf(VAR24, "");
    FUN8(VAR13);
    return -VAR27;
}