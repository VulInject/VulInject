static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR4->VAR6[0] && VAR4->VAR7 != VAR8)
    {
        FUN2(VAR2, VAR4);
    }
    FUN3(&VAR4->VAR9);
    FUN3(&VAR4->VAR10);
    FUN3(&VAR4->VAR11);
    FUN3(&VAR4->VAR12);
    FUN3(&VAR4->VAR13);
    FUN3(&VAR4->VAR14);
    FUN3(&VAR4->VAR15);
    FUN3(&VAR4->VAR16);
    VAR4->VAR17 = NULL;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        FUN3(&VAR4->VAR18[VAR5]);
        FUN3(&VAR4->VAR19[VAR5]);
    }
    if (VAR4->VAR7 == VAR8)
    {
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            VAR4->VAR20[VAR5] = VAR4->VAR6[VAR5] = NULL;
        }
        VAR4->VAR7 = 0;
    }
}