static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2(FUN3(VAR3), NULL);
    if (!VAR7)
    {
        return VAR8;
    }
    if (VAR9 >= VAR10)
    {
        FUN4(FUN5(VAR7));
        return VAR8;
    }
    VAR11++;
    FUN6();
    FUN7(VAR12 ? NULL : VAR13, VAR7, VAR14, NULL, VAR15);
    FUN4(FUN5(VAR7));
    return VAR8;
}