void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR7;
    FUN2(&VAR2->VAR8, 16, 0x0b77);
    FUN2(&VAR2->VAR8, 2, 0);
    FUN2(&VAR2->VAR8, 3, 0);
    FUN2(&VAR2->VAR8, 11, (VAR2->VAR9 / 2) - 1);
    if (VAR2->VAR10.VAR11)
    {
        FUN2(&VAR2->VAR8, 2, 0x3);
        FUN2(&VAR2->VAR8, 2, VAR2->VAR10.VAR12);
    }
    else
    {
        FUN2(&VAR2->VAR8, 2, VAR2->VAR10.VAR12);
        FUN2(&VAR2->VAR8, 2, 0x3);
    }
    FUN2(&VAR2->VAR8, 3, VAR2->VAR13);
    FUN2(&VAR2->VAR8, 1, VAR2->VAR14);
    FUN2(&VAR2->VAR8, 5, VAR2->VAR15);
    FUN2(&VAR2->VAR8, 5, -VAR6->VAR16);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, !VAR2->VAR17);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 2, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    FUN2(&VAR2->VAR8, 1, 0);
    if (VAR2->VAR13 > VAR18)
    {
        FUN2(&VAR2->VAR8, 1, VAR2->VAR19[0].VAR20);
        for (VAR3 = 1; VAR3 < VAR21; VAR3++)
        {
            VAR22 *VAR23 = &VAR2->VAR19[VAR3];
            FUN2(&VAR2->VAR8, 1, VAR23->VAR24);
            if (VAR23->VAR24)
                FUN2(&VAR2->VAR8, 1, VAR23->VAR20);
        }
    }
    if (VAR2->VAR17)
    {
        for (VAR4 = !VAR2->VAR25; VAR4 <= VAR2->VAR26; VAR4++)
            FUN2(&VAR2->VAR8, 5, VAR2->VAR27[VAR4]);
    }
    else
    {
        for (VAR3 = 0; VAR3 < VAR21; VAR3++)
            for (VAR4 = !VAR2->VAR19[VAR3].VAR20; VAR4 <= VAR2->VAR26; VAR4++)
                FUN2(&VAR2->VAR8, 2, VAR2->VAR28[VAR4][VAR3]);
    }
    if (VAR2->VAR14)
    {
        for (VAR3 = 0; VAR3 < VAR21; VAR3++)
            FUN2(&VAR2->VAR8, 1, VAR2->VAR28[VAR2->VAR29][VAR3]);
    }
    for (VAR4 = 1; VAR4 <= VAR2->VAR26; VAR4++)
    {
        if (VAR2->VAR17)
            FUN2(&VAR2->VAR8, 5, VAR2->VAR27[VAR4]);
        else
            FUN2(&VAR2->VAR8, 5, 0);
    }
    FUN2(&VAR2->VAR8, 6, VAR2->VAR30);
    FUN2(&VAR2->VAR8, 4, VAR2->VAR31[1]);
    FUN2(&VAR2->VAR8, 1, 0);
}