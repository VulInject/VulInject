static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    if (VAR4->VAR8)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR9; VAR6++)
            FUN2(&VAR4->VAR8[VAR6].VAR10);
        FUN3(&VAR4->VAR8);
        VAR4->VAR9 = 0;
    }
    if (!VAR4->VAR11)
        return;
    for (VAR6 = 0; VAR6 < VAR2->VAR12; VAR6++)
    {
        VAR13 *VAR14 = &VAR4->VAR11[VAR6];
        if (VAR14->VAR15 && VAR14->VAR16)
            FUN4(VAR14->VAR15);
        if (VAR14->VAR15 && VAR14->VAR15->VAR17)
            FUN5(&VAR14->VAR15->VAR17);
        FUN6(VAR2, &VAR14->VAR18);
        if (VAR14->VAR15)
            FUN7(VAR14->VAR15);
        for (VAR7 = 0; VAR7 < VAR14->VAR19; VAR7++)
            FUN8(VAR14->VAR20[VAR7]);
        FUN8(VAR14->VAR20);
    }
    FUN3(&VAR4->VAR11);