static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR6 *VAR13 = NULL;
    int VAR14;
    VAR12 = FUN2(&VAR15, NULL, 0, &VAR16);
    FUN3(VAR12, VAR4, &VAR13);
    if (VAR13)
    {
        FUN4(VAR7, VAR13);
        VAR14 = -VAR17;
        goto VAR18;
        VAR2->VAR19 = FUN5(FUN6(VAR12, ""), VAR4, "", VAR2, &VAR20, false, &VAR13);
        if (VAR13)
        {
            VAR14 = -VAR17;
            FUN4(VAR7, VAR13);
            goto VAR18;
            VAR9->VAR21 = FUN5(FUN6(VAR12, ""), VAR4, "", VAR2, &VAR22, false, &VAR13);
            if (VAR13)
            {
                VAR14 = -VAR17;
                FUN4(VAR7, VAR13);
                goto VAR18;
                VAR14 = 0;
            VAR18:
                FUN7(VAR12);
                return VAR14;