static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = FUN2(FUN3(VAR7));
    VAR10 *VAR11 = NULL;
    ssize_t VAR12;
    VAR12 = FUN4(VAR9->VAR13, (char *)VAR9->VAR14.VAR15, VAR9->VAR14.VAR16, &VAR11);
    if (VAR12 < 0)
    {
        FUN5(VAR3);
        FUN6(VAR7, VAR11);
        FUN7(VAR7);
        return VAR17;
    }
    FUN8(&VAR9->VAR14, VAR12);
    if (VAR9->VAR14.VAR16 == 0)
    {
        FUN9(VAR3);
        FUN7(VAR7);
        return VAR17;
    }
    FUN10(VAR3, VAR18);
    return VAR19;
}