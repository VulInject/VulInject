static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR2->VAR13; VAR12++)
    {
        VAR11 = VAR2->VAR14[VAR12];
        VAR7 = VAR11->VAR5;
        if (VAR7->VAR15 > 0)
        {
            FUN2(VAR2, VAR11, VAR7->VAR16, VAR7->VAR15, VAR7->VAR17);
        }
    }
    FUN3(&VAR2->VAR18);
    for (VAR12 = 0; VAR12 < VAR4->VAR19; VAR12++)
    {
        VAR9 = VAR4->VAR20[VAR12];
        FUN4(&VAR9->VAR21);
        FUN4(&VAR9->VAR22);
        FUN5(VAR9);
    }
    FUN5(VAR4->VAR20);
    for (VAR12 = 0; VAR12 < VAR2->VAR13; VAR12++)
    {
        VAR11 = VAR2->VAR14[VAR12];
        FUN5(VAR11->VAR5);
    }
    return 0;
}