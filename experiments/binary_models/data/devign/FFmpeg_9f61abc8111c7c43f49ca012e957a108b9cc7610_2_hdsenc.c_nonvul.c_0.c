static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    if (!VAR4->VAR8)
        return;
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
    {
        VAR10 *VAR11 = &VAR4->VAR8[VAR6];
        if (VAR11->VAR12)
            FUN2(VAR2, &VAR11->VAR12);
        if (VAR11->VAR13 && VAR11->VAR14)
            FUN3(VAR11->VAR13);
        if (VAR11->VAR13 && VAR11->VAR13->VAR15)
            FUN4(VAR11->VAR13->VAR15);
        if (VAR11->VAR13)
            FUN5(VAR11->VAR13);
        FUN4(VAR11->VAR16);
        for (VAR7 = 0; VAR7 < VAR11->VAR17; VAR7++)
            FUN4(VAR11->VAR18[VAR7]);
        for (VAR7 = 0; VAR7 < VAR11->VAR19; VAR7++)
            FUN4(VAR11->VAR20[VAR7]);
        FUN4(VAR11->VAR20);
    }
    FUN6(&VAR4->VAR8);
}