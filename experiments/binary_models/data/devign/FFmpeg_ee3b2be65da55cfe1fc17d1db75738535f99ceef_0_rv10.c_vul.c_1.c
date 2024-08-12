static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR6 = FUN2(&VAR2->VAR8, 8);
    if ((VAR6 & 0xc0) == 0xc0)
    {
        int VAR9, VAR10;
        VAR7 = 1;
        VAR9 = FUN3(&VAR2->VAR8);
        VAR10 = FUN3(&VAR2->VAR8);
    }
    else
    {
        int VAR11, VAR12, VAR10;
        VAR7 = 0;
        VAR11 = FUN2(&VAR2->VAR8, 8);
        VAR12 = FUN3(&VAR2->VAR8);
        VAR10 = FUN3(&VAR2->VAR8);
    }
    FUN2(&VAR2->VAR8, 8);
    VAR5 = FUN2(&VAR2->VAR8, 1);
    if (FUN2(&VAR2->VAR8, 1))
        VAR2->VAR13 = VAR14;
    else
        VAR2->VAR13 = VAR15;
    VAR4 = FUN2(&VAR2->VAR8, 1);
    FUN4("", VAR2->VAR13, VAR4);
    if (VAR4)
        return -1;
    VAR2->VAR16 = FUN2(&VAR2->VAR8, 5);
    if (VAR2->VAR13 == VAR15)
    {
        if (VAR2->VAR17 == 3)
        {
            VAR2->VAR18[0] = FUN2(&VAR2->VAR8, 8);
            VAR2->VAR18[1] = FUN2(&VAR2->VAR8, 8);
            VAR2->VAR18[2] = FUN2(&VAR2->VAR8, 8);
            FUN4("", VAR2->VAR18[0], VAR2->VAR18[1], VAR2->VAR18[2]);
        }
    }
    if (!VAR7)
    {
        VAR2->VAR19 = FUN2(&VAR2->VAR8, 6);
        VAR2->VAR20 = FUN2(&VAR2->VAR8, 6);
        VAR3 = FUN2(&VAR2->VAR8, 12);
    }
    else
    {
        VAR2->VAR19 = 0;
        VAR2->VAR20 = 0;
        VAR3 = VAR2->VAR21 * VAR2->VAR22;
    }
    FUN2(&VAR2->VAR8, 3);
    VAR2->VAR23 = 1;
    VAR2->VAR24 = 1;
    VAR2->VAR25 = 1;
    return VAR3;
}