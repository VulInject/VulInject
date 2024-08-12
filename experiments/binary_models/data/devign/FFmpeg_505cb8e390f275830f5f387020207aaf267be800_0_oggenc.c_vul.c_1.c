static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        VAR5 *VAR6 = VAR2->VAR7[VAR3];
        VAR8 *VAR9 = VAR6->VAR10;
        if (VAR6->VAR11->VAR12 == VAR13 || VAR6->VAR11->VAR12 == VAR14 || VAR6->VAR11->VAR12 == VAR15 || VAR6->VAR11->VAR12 == VAR16)
        {
            FUN2(&VAR9->VAR17[0]);
        }
        FUN2(&VAR9->VAR17[1]);
        FUN2(&VAR6->VAR10);
    }