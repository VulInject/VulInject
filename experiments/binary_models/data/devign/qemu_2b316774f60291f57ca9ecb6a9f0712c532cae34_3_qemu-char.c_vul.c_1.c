static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = VAR7->VAR5;
    gsize VAR10 = 0;
    GIOStatus VAR11;
    if (VAR9->VAR12 == 0)
    {
        return VAR13;
    }
    VAR11 = FUN2(VAR9->VAR3, (VAR14 *)VAR9->VAR15, sizeof(VAR9->VAR15), &VAR10, NULL);
    VAR9->VAR16 = VAR10;
    VAR9->VAR17 = VAR9->VAR16;
    if (VAR11 != VAR18)
    {
        if (VAR9->VAR19)
        {
            FUN3(VAR9->VAR19);
            VAR9->VAR19 = 0;
        }
        return VAR20;
    }
    VAR9->VAR17 = 0;
    while (VAR9->VAR12 > 0 && VAR9->VAR17 < VAR9->VAR16)
    {
        FUN4(VAR7, &VAR9->VAR15[VAR9->VAR17], 1);
        VAR9->VAR17++;
        VAR9->VAR12 = FUN5(VAR7);
    }
    return VAR13;
}