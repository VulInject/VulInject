static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    if (FUN2(&VAR4->VAR7, 15) == 0)
    {
        VAR6 = FUN3(VAR2);
        if (VAR6 >= 0)
            return 0;
    }
    VAR4->VAR7 = VAR4->VAR8;
    FUN4(&VAR4->VAR7);
    VAR5 = VAR4->VAR7.VAR9 - FUN5(&VAR4->VAR7);
    for (; VAR5 > 15 + 1 + 4 + 5; VAR5 -= 8)
    {
        if (FUN2(&VAR4->VAR7, 15) == 0)
        {
            GetBitContext VAR10 = VAR4->VAR7;
            VAR6 = FUN3(VAR2);
            if (VAR6 >= 0)
                return 0;
            VAR4->VAR7 = VAR10;
        }
        FUN6(&VAR4->VAR7, 8);
    }
    return -1;
}