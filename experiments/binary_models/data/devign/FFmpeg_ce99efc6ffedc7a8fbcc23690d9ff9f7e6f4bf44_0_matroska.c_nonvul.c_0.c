FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = 0;
    FUN2(VAR4->VAR7);
    FUN2(VAR4->VAR8);
    FUN2(VAR4->VAR9);
    if (VAR4->VAR10 != NULL)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR11; VAR6++)
        {
            FUN3(VAR4->VAR10[VAR6]);
            FUN2(VAR4->VAR10[VAR6]);
        }
        FUN2(VAR4->VAR10);
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR12; VAR6++)
    {
        VAR13 *VAR14 = VAR4->VAR15[VAR6];
        FUN2(VAR14->VAR16);
        FUN2(VAR14->VAR17);
        FUN2(VAR14->VAR18);
        FUN2(VAR14->VAR19);
        FUN2(VAR14->VAR20);
        FUN2(VAR14);
    }
    return 0;
}