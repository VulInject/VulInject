void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        VAR9 *VAR10 = VAR2->VAR10 + VAR5;
        for (VAR6 = 0; VAR6 < VAR10->VAR11; VAR6++)
        {
            VAR12 *VAR13 = VAR10->VAR13 + VAR6;
            for (VAR7 = 0; VAR7 < VAR10->VAR14 * VAR10->VAR15; VAR7++)
            {
                VAR16 *VAR17 = VAR13->VAR17 + VAR7;
                FUN2(&VAR17->VAR18);
                FUN2(&VAR17->VAR19);
                FUN2(&VAR17->VAR20);
            }
            FUN2(&VAR13->VAR17);
        }
        FUN2(&VAR10->VAR13);
    }
    FUN3(&VAR2->VAR21);
    FUN2(&VAR2->VAR10);
    FUN2(&VAR2->VAR22);
}