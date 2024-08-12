static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = VAR7->VAR5;
    gsize VAR10, VAR11;
    uint8_t VAR12[VAR13];
    GIOStatus VAR14;
    VAR11 = sizeof(VAR12);
    if (VAR11 > VAR9->VAR15)
        VAR11 = VAR9->VAR15;
    if (VAR11 == 0)
    {
        return VAR16;
    }
    VAR14 = FUN2(VAR9->VAR17, (VAR18 *)VAR12, VAR11, &VAR10, NULL);
    if (VAR14 != VAR19)
    {
        FUN3(VAR7, 0);
        return VAR20;
    }
    else
    {
        FUN3(VAR7, 1);
        FUN4(VAR7, VAR12, VAR10);
    }
    return VAR16;
}