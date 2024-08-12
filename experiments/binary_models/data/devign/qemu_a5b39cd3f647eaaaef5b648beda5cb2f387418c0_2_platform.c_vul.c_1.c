static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    FUN3(&VAR6->VAR7);
    FUN4(VAR4, &VAR6->VAR8, VAR9)
    {
        if (VAR4->VAR10 == VAR11)
        {
            FUN5(VAR4->VAR12, FUN6(VAR4->VAR13));
            VAR4->VAR10 = VAR14;
            FUN7(VAR4->VAR15, 0);
            if (VAR4->VAR16 & VAR17)
            {
                FUN8(VAR2, VAR4->VAR12);
            }
            break;
        }
    }
    if (!FUN9(&VAR6->VAR18))
    {
        VAR4 = FUN10(&VAR6->VAR18);
        FUN11(VAR4);
        FUN12(&VAR6->VAR18, VAR19);
    }
    FUN13(&VAR6->VAR7);
}