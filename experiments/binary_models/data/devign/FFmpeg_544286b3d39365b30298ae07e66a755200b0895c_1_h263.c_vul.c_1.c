void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2(&VAR2->VAR5);
    FUN3(&VAR2->VAR5, 22, 0x20);
    FUN3(&VAR2->VAR5, 8, ((VAR2->VAR3 * 30 * VAR6) / VAR2->VAR7) & 0xff);
    FUN3(&VAR2->VAR5, 1, 1);
    FUN3(&VAR2->VAR5, 1, 0);
    FUN3(&VAR2->VAR5, 1, 0);
    FUN3(&VAR2->VAR5, 1, 0);
    FUN3(&VAR2->VAR5, 1, 0);
    VAR4 = FUN4(VAR2->VAR8, VAR2->VAR9);
    if (!VAR2->VAR10)
    {
        FUN3(&VAR2->VAR5, 3, VAR4);
        FUN3(&VAR2->VAR5, 1, (VAR2->VAR11 == VAR12));
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 5, VAR2->VAR13);
        FUN3(&VAR2->VAR5, 1, 0);
    }
    else
    {
        FUN3(&VAR2->VAR5, 3, 7);
        FUN3(&VAR2->VAR5, 3, 1);
        if (VAR4 == 7)
            FUN3(&VAR2->VAR5, 3, 6);
        else
            FUN3(&VAR2->VAR5, 3, VAR4);
        FUN3(&VAR2->VAR5, 1, 0);
        VAR14 = (VAR2->VAR11 == VAR12) && VAR2->VAR15;
        FUN3(&VAR2->VAR5, 1, VAR14);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 1);
        FUN3(&VAR2->VAR5, 3, 0);
        FUN3(&VAR2->VAR5, 3, VAR2->VAR11 == VAR12);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 1, 0);
        FUN3(&VAR2->VAR5, 2, 0);
        FUN3(&VAR2->VAR5, 1, 1);
        FUN3(&VAR2->VAR5, 1, 0);
        if (VAR4 == 7)
        {
            FUN3(&VAR2->VAR5, 4, 2);
            FUN3(&VAR2->VAR5, 9, (VAR2->VAR8 >> 2) - 1);
            FUN3(&VAR2->VAR5, 1, 1);
            FUN3(&VAR2->VAR5, 9, (VAR2->VAR9 >> 2));
        }
        if (VAR14)
            FUN3(&VAR2->VAR5, 1, 1);
        FUN3(&VAR2->VAR5, 5, VAR2->VAR13);
    }
    FUN3(&VAR2->VAR5, 1, 0);
}