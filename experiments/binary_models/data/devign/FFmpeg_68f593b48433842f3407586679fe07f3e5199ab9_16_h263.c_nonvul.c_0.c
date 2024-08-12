int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (VAR2->VAR5 == VAR6)
        FUN2(&VAR2->VAR7);
    FUN3(&VAR2->VAR7);
    if (FUN4(&VAR2->VAR7, 16) == 0)
    {
        if (VAR2->VAR5 == VAR6)
            VAR4 = FUN5(VAR2);
        else
            VAR4 = FUN6(VAR2);
        if (VAR4 >= 0)
            return 0;
    }
    VAR2->VAR7 = VAR2->VAR8;
    FUN3(&VAR2->VAR7);
    VAR3 = VAR2->VAR7.VAR9 - FUN7(&VAR2->VAR7);
    for (; VAR3 > 16 + 1 + 5 + 5; VAR3 -= 8)
    {
        if (FUN4(&VAR2->VAR7, 16) == 0)
        {
            GetBitContext VAR10 = VAR2->VAR7;
            if (VAR2->VAR5 == VAR6)
                VAR4 = FUN5(VAR2);
            else
                VAR4 = FUN6(VAR2);
            if (VAR4 >= 0)
                return 0;
            VAR2->VAR7 = VAR10;
        }
        FUN8(&VAR2->VAR7, 8);
    }
    return -1;
}