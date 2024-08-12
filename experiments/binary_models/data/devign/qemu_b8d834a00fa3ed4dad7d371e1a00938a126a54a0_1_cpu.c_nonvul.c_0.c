static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    FeatureWord VAR7;
    VAR8 *VAR9 = NULL;
    VAR3 **VAR10 = VAR4;
    if (VAR2->VAR11 && !FUN2())
    {
        VAR3 *new = FUN3(VAR3, 1);
        new->VAR12 = FUN4("");
        ;
        *VAR4 = new;
        return;
    }
    VAR6 = FUN5(FUN6(FUN7(FUN8(VAR2))));
    FUN9(VAR6, &VAR9);
    if (VAR9)
    {
        VAR3 *new = FUN3(VAR3, 1);
        new->VAR12 = FUN4("");
        *VAR10 = new;
        VAR10 = &new->VAR10;
    }
    FUN10(VAR6);
    for (VAR7 = 0; VAR7 < VAR13; VAR7++)
    {
        uint32_t VAR14 = VAR6->VAR15[VAR7];
        int VAR16;
        for (VAR16 = 0; VAR16 < 32; VAR16++)
        {
            if (VAR14 & (1UL << VAR16))
            {
                VAR3 *new = FUN3(VAR3, 1);
                new->VAR12 = FUN4(FUN11(VAR7, VAR16));
                *VAR10 = new;
                VAR10 = &new->VAR10;
            }
        }
    }
    FUN12(FUN13(VAR6));
}