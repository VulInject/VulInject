static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    FUN2(&VAR4->VAR6);
    FUN2(&VAR4->VAR7);
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        VAR10 *VAR11 = VAR2->VAR12[VAR8];
        VAR13 *VAR14 = VAR11->VAR5;
        if (VAR14)
        {
            FUN3(VAR14->VAR15);
            FUN3(VAR14);
        }
        FUN3(VAR11->VAR16->VAR17);
    }
    return 0;