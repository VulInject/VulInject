int FUN1(int VAR1, VAR2 *VAR3, VAR2 *VAR4, void *VAR5)
{
    static IOTrampoline VAR6[VAR7];
    VAR8 *VAR9 = &VAR6[VAR1];
    if (VAR9->VAR10 != 0)
    {
        FUN2(VAR9->VAR11);
        FUN3(VAR9->VAR10);
    }
    if (VAR5)
    {
        GIOCondition VAR12 = 0;
        VAR9->VAR3 = VAR3;
        VAR9->VAR4 = VAR4;
        VAR9->VAR5 = VAR5;
        if (VAR3)
        {
            VAR12 |= VAR13 | VAR14;
        }
        if (VAR4)
        {
            VAR12 |= VAR15 | VAR14;
        }
        VAR9->VAR11 = FUN4(VAR1);
        VAR9->VAR10 = FUN5(VAR9->VAR11, VAR12, VAR16, VAR9);
    }
    return 0;
}