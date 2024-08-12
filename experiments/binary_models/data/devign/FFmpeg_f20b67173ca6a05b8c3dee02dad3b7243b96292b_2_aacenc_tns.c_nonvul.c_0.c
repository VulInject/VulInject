void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    const int VAR10 = VAR4->VAR11.VAR12[0] == VAR13;
    if (!VAR4->VAR14.VAR15)
        return;
    for (VAR5 = 0; VAR5 < VAR4->VAR11.VAR16; VAR5++)
    {
        FUN2(&VAR2->VAR17, 2 - VAR10, VAR4->VAR14.VAR18[VAR5]);
        if (VAR4->VAR14.VAR18[VAR5])
        {
            FUN2(&VAR2->VAR17, 1, 1);
            for (VAR7 = 0; VAR7 < VAR4->VAR14.VAR18[VAR5]; VAR7++)
            {
                FUN2(&VAR2->VAR17, 6 - 2 * VAR10, VAR4->VAR14.VAR19[VAR5][VAR7]);
                FUN2(&VAR2->VAR17, 5 - 2 * VAR10, VAR4->VAR14.VAR20[VAR5][VAR7]);
                if (VAR4->VAR14.VAR20[VAR5][VAR7])
                {
                    VAR9 = FUN3(VAR4->VAR14.VAR21[VAR5][VAR7], VAR4->VAR14.VAR20[VAR5][VAR7]);
                    FUN2(&VAR2->VAR17, 1, !!VAR4->VAR14.VAR22[VAR5][VAR7]);
                    FUN2(&VAR2->VAR17, 1, !!VAR9);
                    VAR8 = 4 - VAR9;
                    for (VAR6 = 0; VAR6 < VAR4->VAR14.VAR20[VAR5][VAR7]; VAR6++)
                        FUN2(&VAR2->VAR17, VAR8, VAR4->VAR14.VAR21[VAR5][VAR7][VAR6]);
                }
            }
        }
    }
}