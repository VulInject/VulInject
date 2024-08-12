static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    for (VAR6 = 0; VAR6 < VAR2->VAR8; VAR6++)
    {
        VAR9 *VAR10 = VAR2->VAR11[VAR6];
        VAR12 *VAR13 = VAR10->VAR5;
        FUN2(&VAR13->VAR14);
        for (VAR7 = 0; VAR7 < VAR13->VAR15; VAR7++)
        {
            FUN2(&VAR13->VAR16[VAR7].VAR17);
            FUN2(&VAR13->VAR16[VAR7].VAR18);
        }
        FUN2(&VAR13->VAR16);
        if (VAR13->VAR19 && VAR13->VAR19 != VAR2->VAR19)
            FUN3(VAR2, &VAR13->VAR19);
        FUN2(&VAR13->VAR20);
        FUN2(&VAR13->VAR21);
        FUN2(&VAR13->VAR22);
        FUN2(&VAR13->VAR23);
        FUN2(&VAR13->VAR24);
        FUN2(&VAR13->VAR25);
        FUN2(&VAR13->VAR26);
        FUN2(&VAR13->VAR27);
    }
    if (VAR4->VAR28)
    {
        FUN4(VAR4->VAR29);
        VAR4->VAR29 = NULL;
    }
    FUN2(&VAR4->VAR30);
    return 0;
}