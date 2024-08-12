static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8, int64_t VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = NULL, VAR17, VAR18;
    int VAR19, VAR20;
    VAR18 = VAR10 * sizeof(VAR15);
    VAR20 = FUN2(VAR2, VAR4, VAR6, VAR8, VAR9, VAR18);
    if (VAR20 < 0)
    {
        goto VAR21;
    }
    if (VAR18 > 0)
    {
        VAR16 = FUN3(VAR18);
        if (VAR16 == NULL)
        {
            VAR20 = -VAR22;
            VAR4->VAR23++;
            goto VAR21;
        }
        VAR20 = FUN4(VAR2->VAR24, VAR9, VAR16, VAR18);
        if (VAR20 < 0)
        {
            fprintf(VAR25, "");
            VAR4->VAR23++;
            goto VAR21;
        }
        for (VAR19 = 0; VAR19 < VAR10; VAR19++)
            FUN5(&VAR16[VAR19]);
    }
    for (VAR19 = 0; VAR19 < VAR10; VAR19++)
    {
        VAR17 = VAR16[VAR19];
        if (VAR17)
        {
            VAR17 &= VAR26;
            VAR20 = FUN2(VAR2, VAR4, VAR6, VAR8, VAR17, VAR13->VAR27);
            if (VAR20 < 0)
            {
                goto VAR21;
            }
            if (FUN6(VAR13, VAR17))
            {
                fprintf(VAR25, "" VAR28 ""
                                "",
                        VAR17);
                VAR4->VAR29++;
            }
            VAR20 = FUN7(VAR2, VAR4, VAR6, VAR8, VAR17, VAR11);
            if (VAR20 < 0)
            {
                goto VAR21;
            }
        }
    }
    FUN8(VAR16);
    return 0;
VAR21:
    FUN8(VAR16);
    return VAR20;
}