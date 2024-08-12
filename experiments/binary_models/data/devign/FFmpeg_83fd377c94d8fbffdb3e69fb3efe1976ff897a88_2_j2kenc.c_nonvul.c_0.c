static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    if (VAR2->VAR5 - VAR2->VAR6 < 14)
        return -1;
    FUN2(&VAR2->VAR6, VAR7);
    FUN2(&VAR2->VAR6, 12);
    FUN3(&VAR2->VAR6, 0);
    FUN3(&VAR2->VAR6, 0);
    FUN2(&VAR2->VAR6, 1);
    if (VAR2->VAR8->VAR9 == VAR10)
    {
        FUN3(&VAR2->VAR6, 2);
    }
    else
    {
        FUN3(&VAR2->VAR6, 0);
    }
    FUN3(&VAR2->VAR6, VAR4->VAR11 - 1);
    FUN3(&VAR2->VAR6, VAR4->VAR12 - 2);
    FUN3(&VAR2->VAR6, VAR4->VAR13 - 2);
    FUN3(&VAR2->VAR6, 0);
    FUN3(&VAR2->VAR6, VAR4->VAR14 == VAR15);
    return 0;
}