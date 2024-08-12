static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4;
    int VAR5;
    VAR3 = FUN2(&VAR2->VAR6, 16);
    if (VAR3)
        return -1;
    FUN3(&VAR2->VAR6, 16);
    VAR5 = FUN4(&VAR2->VAR6);
    for (; VAR5 > 13; VAR5--)
    {
        if (FUN5(&VAR2->VAR6))
            break;
    }
    if (VAR5 <= 13)
        return -1;
    if (VAR2->VAR7)
    {
        if (FUN6(&VAR2->VAR6, "") == 0)
            return -1;
        FUN7(VAR2);
        if (VAR2->VAR8 > 1583)
            if (FUN6(&VAR2->VAR6, "") == 0)
                return -1;
        VAR2->VAR9 = FUN8(&VAR2->VAR6, 5);
        if (FUN6(&VAR2->VAR6, "") == 0)
            return -1;
        FUN3(&VAR2->VAR6, 2);
    }
    else
    {
        VAR4 = FUN8(&VAR2->VAR6, 5);
        VAR2->VAR10 = 0;
        VAR2->VAR11 = VAR2->VAR12 * VAR4;
        FUN3(&VAR2->VAR6, 2);
        VAR2->VAR9 = FUN8(&VAR2->VAR6, 5);
    }
    if (VAR2->VAR11 >= VAR2->VAR13)
        return -1;
    if (VAR2->VAR9 == 0)
        return -1;
    return 0;
}