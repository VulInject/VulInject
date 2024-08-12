void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2)
        return;
    if (VAR2->VAR4)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
            FUN2(&VAR2->VAR4[VAR3]);
        FUN2(&VAR2->VAR4);
    }
    if (VAR2->VAR6)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
            FUN2(&VAR2->VAR6[VAR3]);
        FUN2(&VAR2->VAR6);
    }
    if (VAR8 && VAR2->VAR9)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
            FUN2(&VAR2->VAR9[VAR3]);
        FUN2(&VAR2->VAR9);
    }
    FUN2(&VAR2->VAR10);
    FUN2(&VAR2->VAR11);
    FUN2(&VAR2->VAR12);
    FUN2(&VAR2->VAR13);
    FUN2(&VAR2->VAR14);
    FUN2(&VAR2->VAR15);
    FUN2(&VAR2->VAR16);
    FUN2(&VAR2->VAR17);
    FUN2(&VAR2->VAR18);
    FUN2(&VAR2->VAR19);
    if (VAR2->VAR20)
        FUN3(VAR2->VAR20, VAR2->VAR21);
    if (VAR2->VAR22)
        FUN3(VAR2->VAR22, VAR2->VAR23);
    if (VAR2->VAR20)
        FUN4(VAR2->VAR20, 0, VAR24);
    if (VAR2->VAR22)
        FUN4(VAR2->VAR22, 0, VAR24);
    FUN5(VAR2->VAR20);
    FUN5(VAR2->VAR22);
    VAR2->VAR20 = NULL;
    VAR2->VAR22 = NULL;
    FUN2(&VAR2->VAR25);
    FUN5(VAR2);
}