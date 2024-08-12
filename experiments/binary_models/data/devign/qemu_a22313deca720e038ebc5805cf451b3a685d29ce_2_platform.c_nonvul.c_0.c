static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR1 *VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    bool VAR7 = false;
    FUN2(&VAR6->VAR8);
    if (VAR2->VAR9 == VAR10)
    {
        FUN3(VAR4, &VAR6->VAR11, VAR12)
        {
            if (VAR4->VAR9 == VAR13 || VAR4->VAR9 == VAR14)
            {
                VAR7 = true;
                break;
            }
        }
    }
    if (VAR7)
    {
        VAR2->VAR9 = VAR14;
        FUN4(VAR2->VAR15);
        FUN5(&VAR6->VAR16, VAR2, VAR17);
        VAR3 = FUN6(VAR2->VAR18);
        FUN7(&VAR6->VAR8);
        return;
    }
    FUN8(VAR2->VAR15, FUN9(VAR2->VAR18));
    VAR3 = FUN6(VAR2->VAR18);
    if (!VAR3)
    {
        FUN10("", FUN9(VAR2->VAR18), VAR3);
    }
    VAR2->VAR9 = VAR13;
    FUN11(VAR6, false);
    FUN12(VAR2->VAR19, 1);
    if (VAR6->VAR20)
    {
        FUN13(VAR6->VAR21, FUN14(VAR22) + VAR6->VAR20);
    }
    FUN7(&VAR6->VAR8);
}