static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = VAR6->VAR9.VAR8;
    VAR10 *VAR11;
    VAR3 *VAR12 = NULL;
    if (!VAR8)
    {
        FUN3(VAR4, "");
        return;
    }
    if (FUN4(VAR8))
    {
        FUN5(FUN4(VAR8), NULL, &VAR12);
        if (VAR12)
        {
            if (FUN6())
            {
                FUN7(VAR4, VAR12);
                return;
            }
            FUN8(VAR12);
            VAR12 = NULL;
            if (VAR13)
            {
                FUN9(VAR13, FUN4(VAR8), VAR14, VAR6);
                VAR6->VAR2.VAR15 = 0;
            }
            else
            {
                VAR16 = 0;
            }
        }
    }
    FUN10(&VAR6->VAR9, &VAR2->VAR17);
    FUN11(&VAR6->VAR9);
    FUN12(VAR8, &VAR6->VAR2.VAR18);
    VAR6->VAR9.VAR8 = NULL;
    FUN13(VAR2);
    FUN14(VAR2);
    FUN15(&VAR6->VAR19, sizeof(VAR6->VAR19), FUN16(VAR2), &VAR20, NULL);
    VAR11 = FUN17(&VAR6->VAR19, VAR8, 0, !!VAR6->VAR21, VAR6->VAR9.VAR22, VAR2->VAR17, &VAR12);
    if (!VAR11)
    {
        FUN7(VAR4, VAR12);
        return;
    }
    FUN18(VAR2);
    VAR6->VAR11 = VAR11;
}