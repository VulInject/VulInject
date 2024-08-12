static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5, *VAR6;
    VAR7 *VAR8 = FUN2(VAR2, VAR3);
    while (VAR2->VAR9[VAR3].VAR10)
    {
        FUN3(VAR2, VAR3, VAR2->VAR9[VAR3].VAR10);
    }
    VAR2->VAR9[VAR3].VAR11 = ~0;
    if (!VAR8)
    {
        return;
    }
    FUN4(VAR5, &VAR8->VAR12.VAR13, VAR14, VAR6)
    {
        VAR15 *VAR16 = VAR5->VAR17;
        VAR18 *VAR19 = FUN5(VAR16);
        int VAR20 = FUN6(VAR19->VAR21);
        if (FUN7(VAR2, VAR19))
        {
            VAR2->VAR9[VAR3].VAR11 &= ~(1U << VAR20);
        }
    }
}