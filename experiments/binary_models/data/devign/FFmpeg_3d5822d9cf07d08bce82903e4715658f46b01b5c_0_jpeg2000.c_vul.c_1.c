void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    for (VAR5 = 0; VAR2->VAR8 && VAR5 < VAR4->VAR9; VAR5++)
    {
        VAR10 *VAR8;
        if (!VAR2->VAR8)
            continue;
        VAR8 = VAR2->VAR8 + VAR5;
        for (VAR6 = 0; VAR6 < VAR8->VAR11; VAR6++)
        {
            VAR12 *VAR13;
            if (!VAR8->VAR13)
                continue;
            VAR13 = VAR8->VAR13 + VAR6;
            for (VAR7 = 0; VAR7 < VAR8->VAR14 * VAR8->VAR15; VAR7++)
            {
                if (VAR13->VAR16)
                {
                    VAR17 *VAR16 = VAR13->VAR16 + VAR7;
                    FUN2(&VAR16->VAR18);
                    FUN2(&VAR16->VAR19);
                    FUN2(&VAR16->VAR20);
                }
            }
            FUN2(&VAR13->VAR16);
        }
        FUN2(&VAR8->VAR13);
    }
    FUN3(&VAR2->VAR21);
    FUN2(&VAR2->VAR8);
    FUN2(&VAR2->VAR22);
    FUN2(&VAR2->VAR23);
}