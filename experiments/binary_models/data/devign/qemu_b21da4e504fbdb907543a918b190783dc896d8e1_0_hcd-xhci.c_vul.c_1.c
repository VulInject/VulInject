static VAR1 FUN1(VAR2 *VAR3, unsigned int VAR4, unsigned int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    FUN2(VAR4, VAR5);
    assert(VAR4 >= 1 && VAR4 <= VAR3->VAR11);
    assert(VAR5 >= 1 && VAR5 <= 31);
    VAR7 = &VAR3->VAR12[VAR4 - 1];
    if (!VAR7->VAR13[VAR5 - 1])
    {
        FUN3("", VAR4, VAR5);
        return VAR14;
        FUN4(VAR3, VAR4, VAR5);
        VAR9 = VAR7->VAR13[VAR5 - 1];
        if (VAR9->VAR15)
        {
            FUN5(VAR9);
            FUN6(VAR3, VAR9, NULL, VAR16);
            FUN7(VAR9->VAR17);
            FUN8(VAR9);
            VAR7->VAR13[VAR5 - 1] = NULL;
            return VAR14