static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = FUN2(FUN3(VAR7));
    VAR10 *VAR11 = NULL;
    int VAR12;
    VAR12 = FUN4(VAR9, &VAR11);
    if (VAR12 < 0)
    {
        FUN5(VAR3);
        FUN6(VAR7, VAR11);
        FUN7(VAR11);
        return VAR13;
    }
    if (VAR12 == 0)
    {
        FUN8(VAR3, VAR14);
        return VAR15;
    }
    FUN9(FUN10(VAR7));
    FUN11(VAR3);
    FUN12(VAR9->VAR16, VAR17, VAR18, VAR7, (VAR19)VAR20);
    return VAR13;
}