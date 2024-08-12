static void FUN1(VAR1 *VAR2, unsigned VAR3, unsigned VAR4)
{
    VAR5 *VAR6, *VAR7;
    int VAR8 = FUN2(VAR4);
    VAR9 *VAR10 = FUN3(VAR2, VAR3);
    if (!VAR10)
    {
        return;
    }
    VAR2->VAR11[VAR3].VAR12 &= ~(1U << VAR8);
    VAR2->VAR11[VAR3].VAR13 &= ~(1U << VAR8);
    FUN4(VAR6, &VAR10->VAR14.VAR15, VAR16, VAR7)
    {
        VAR17 *VAR18 = VAR6->VAR19;
        VAR20 *VAR21 = FUN5(VAR18);
        if (FUN6(VAR21->VAR22) == VAR8)
        {
            if (!FUN7(VAR2, VAR21))
            {
                FUN8(FUN9(VAR18));
            }
        }
    }
}