static void FUN1(VAR1 *VAR2, unsigned VAR3)
{
    unsigned VAR4;
    VAR1 *VAR5;
    if (VAR2->VAR6.VAR7 == VAR8)
    {
        return;
    }
    VAR5 = VAR9[VAR2->VAR6.VAR7];
    for (VAR4 = 0; VAR4 < VAR10; ++VAR4)
    {
        if (VAR3 > 0)
        {
            FUN1(&VAR5[VAR4], VAR3 - 1);
        }
        else
        {
            FUN2(VAR5[VAR4].VAR6.VAR11);
        }
    }
    VAR2->VAR6.VAR7 = VAR8;
}