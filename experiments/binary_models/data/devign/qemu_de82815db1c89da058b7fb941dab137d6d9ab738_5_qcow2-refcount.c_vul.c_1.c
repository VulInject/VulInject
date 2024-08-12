static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15, VAR16, VAR17;
    int VAR18, VAR19;
    VAR17 = VAR9 * sizeof(VAR14);
    FUN2(VAR2, VAR4, VAR6, VAR7, VAR8, VAR17);
    if (VAR17 == 0)
    {
        VAR15 = NULL;
    }
    else
    {
        VAR15 = FUN3(VAR17);
        if (FUN4(VAR2->VAR20, VAR8, VAR15, VAR17) != VAR17)
            goto VAR21;
        for (VAR18 = 0; VAR18 < VAR9; VAR18++)
            FUN5(&VAR15[VAR18]);
    }
    for (VAR18 = 0; VAR18 < VAR9; VAR18++)
    {
        VAR16 = VAR15[VAR18];
        if (VAR16)
        {
            VAR16 &= VAR22;
            FUN2(VAR2, VAR4, VAR6, VAR7, VAR16, VAR12->VAR23);
            if (FUN6(VAR12, VAR16))
            {
                fprintf(VAR24, "" VAR25 ""
                                "",
                        VAR16);
                VAR4->VAR26++;
            }
            VAR19 = FUN7(VAR2, VAR4, VAR6, VAR7, VAR16, VAR10);
            if (VAR19 < 0)
            {
                goto VAR21;
            }
        }
    }
    FUN8(VAR15);
    return 0;
VAR21:
    fprintf(VAR24, "");
    VAR4->VAR27++;
    FUN8(VAR15);
    return -VAR28;
}