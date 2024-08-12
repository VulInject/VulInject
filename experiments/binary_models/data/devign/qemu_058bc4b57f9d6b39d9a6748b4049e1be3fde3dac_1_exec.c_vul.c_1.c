static void FUN1(VAR1 *VAR2, unsigned VAR3)
{
    unsigned VAR4;
    VAR1 *VAR5;
    if (VAR2->VAR6 == VAR7)
    {
        return;
    }
    VAR5 = VAR8[VAR2->VAR6];
    for (VAR4 = 0; VAR4 < VAR9; ++VAR4)
    {
        if (!VAR5[VAR4].VAR10)
        {
            FUN1(&VAR5[VAR4], VAR3 - 1);
        }
        else
        {
            FUN2(VAR5[VAR4].VAR6);
        }
    }
    VAR2->VAR10 = 0;
    VAR2->VAR6 = VAR7;
}