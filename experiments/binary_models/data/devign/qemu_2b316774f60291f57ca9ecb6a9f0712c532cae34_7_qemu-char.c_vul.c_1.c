static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = VAR7->VAR5;
    int VAR10;
    uint8_t VAR11[VAR12];
    GIOStatus VAR13;
    gsize VAR14;
    VAR10 = sizeof(VAR11);
    if (VAR10 > VAR9->VAR15)
    {
        VAR10 = VAR9->VAR15;
    }
    if (VAR10 == 0)
    {
        return VAR16;
    }
    VAR13 = FUN2(VAR3, (VAR17 *)VAR11, VAR10, &VAR14, NULL);
    if (VAR13 == VAR18)
    {
        if (VAR9->VAR19)
        {
            FUN3(VAR9->VAR19);
            VAR9->VAR19 = 0;
        }
        FUN4(VAR7, VAR20);
        return VAR21;
    }
    if (VAR13 == VAR22)
    {
        FUN5(VAR7, VAR11, VAR14);
    }
    return VAR16;
}