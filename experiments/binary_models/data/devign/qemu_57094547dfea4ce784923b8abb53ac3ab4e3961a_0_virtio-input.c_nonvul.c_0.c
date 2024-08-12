void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    if (!VAR2->VAR9)
    {
        return;
    }
    if (VAR2->VAR10 == VAR2->VAR11)
    {
        VAR2->VAR11++;
        VAR2->VAR12 = FUN2(VAR2->VAR12, VAR2->VAR11 * sizeof(VAR2->VAR12[0]));
    }
    VAR2->VAR12[VAR2->VAR10++].VAR4 = *VAR4;
    if (VAR4->VAR13 != FUN3(VAR14) || VAR4->VAR15 != FUN3(VAR16))
    {
        return;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
    {
        VAR6 = FUN4(VAR2->VAR17, sizeof(VAR5));
        if (!VAR6)
        {
            while (--VAR7 >= 0)
            {
                FUN5(VAR2->VAR17, VAR2->VAR12[VAR7].VAR6, 0);
            }
            VAR2->VAR10 = 0;
            FUN6();
            return;
        }
        VAR2->VAR12[VAR7].VAR6 = VAR6;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
    {
        VAR6 = VAR2->VAR12[VAR7].VAR6;
        VAR8 = FUN7(VAR6->VAR18, VAR6->VAR19, 0, &VAR2->VAR12[VAR7].VAR4, sizeof(VAR3));
        FUN8(VAR2->VAR17, VAR6, VAR8);
        FUN9(VAR6);
    }
    FUN10(FUN11(VAR2), VAR2->VAR17);
    VAR2->VAR10 = 0;
}