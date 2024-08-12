static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    FUN2(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR8);
    if (VAR2->VAR8)
    {
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR9, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR10, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR11, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR12, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR13, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR14, 0);
        FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR15, 0);
        FUN2(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR16);
        for (VAR3 = 0; VAR3 < 2; VAR3++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR12; VAR4++)
            {
                for (VAR5 = VAR4 ? 1 : 0; VAR5 < 4; VAR5++)
                {
                    if (VAR5 == 2)
                        continue;
                    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR17[VAR3].VAR18[VAR4][VAR5].VAR19, 1);
                }
            }
        }
    }
    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR20, 0);
    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR19, 1);
    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR21, 0);
    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR22, 1);
    FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR23, 0);
}