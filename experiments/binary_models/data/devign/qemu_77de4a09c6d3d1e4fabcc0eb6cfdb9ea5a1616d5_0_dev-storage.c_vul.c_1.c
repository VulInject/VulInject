static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8 = VAR6->VAR9.VAR8;
    VAR10 *VAR11;
    VAR3 *VAR12 = NULL;
    if (!VAR8)
    {
        FUN3(VAR4, "");
        return;
    }
    FUN4(&VAR6->VAR9, &VAR2->VAR13);
    FUN5(VAR8, &VAR6->VAR2.VAR14);
    VAR6->VAR9.VAR8 = NULL;
    FUN6(VAR2);
    FUN7(VAR2);
    FUN8(&VAR6->VAR15, sizeof(VAR6->VAR15), FUN9(VAR2), &VAR16, NULL);
    VAR11 = FUN10(&VAR6->VAR15, VAR8, 0, !!VAR6->VAR17, VAR6->VAR9.VAR18, VAR2->VAR13, &VAR12);
    if (!VAR11)
    {
        FUN11(VAR4, VAR12);
        return;
    }
    VAR6->VAR15.VAR19.VAR20 = 0;
    FUN12(VAR2);
    if (FUN13(VAR8))
    {
        if (VAR21)
        {
            FUN14(VAR21, VAR8, VAR22, VAR6);
            VAR6->VAR2.VAR23 = 0;
        }
        else
        {
            VAR24 = 0;
        }
    }
}