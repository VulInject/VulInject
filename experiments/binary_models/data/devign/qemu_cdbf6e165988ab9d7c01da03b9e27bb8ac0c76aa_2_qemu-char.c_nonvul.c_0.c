static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = VAR7->VAR5;
    uint8_t VAR10[VAR11];
    int VAR12, VAR13;
    if (!VAR9->VAR14 || VAR9->VAR15 <= 0)
    {
        return VAR16;
    }
    VAR12 = sizeof(VAR10);
    if (VAR12 > VAR9->VAR15)
        VAR12 = VAR9->VAR15;
    VAR13 = FUN2(VAR7, (void *)VAR10, VAR12);
    if (VAR13 == 0)
    {
        VAR9->VAR14 = 0;
        if (VAR9->VAR17)
        {
            VAR9->VAR18 = FUN3(VAR9->VAR17, VAR19, VAR20, VAR7);
        }
        if (VAR9->VAR21)
        {
            FUN4(VAR9->VAR21);
            VAR9->VAR21 = 0;
        }
        FUN5(VAR9->VAR3);
        VAR9->VAR3 = NULL;
        FUN6(VAR9->VAR22);
        VAR9->VAR22 = -1;
        FUN7(VAR7, VAR23);
    }
    else if (VAR13 > 0)
    {
        if (VAR9->VAR24)
            FUN8(VAR7, VAR9, VAR10, &VAR13);
        if (VAR13 > 0)
            FUN9(VAR7, VAR10, VAR13);
    }
    return VAR16;
}