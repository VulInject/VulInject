int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR4->VAR7; VAR6++)
        FUN2(&VAR4->VAR8[VAR6]);
    for (VAR6 = 0; VAR6 < VAR4->VAR7; VAR6++)
        FUN3(VAR4->VAR9[VAR6]);
    if (VAR4->VAR10)
    {
        FUN4(&VAR4->VAR11);
    }
    if (VAR4->VAR12)
    {
        FUN4(&VAR4->VAR13);
    }
    for (VAR6 = 0; VAR6 < 2; VAR6++)
    {
        FUN4(&VAR4->VAR14[VAR6]);
        FUN3(VAR4->VAR15[VAR6]);
        FUN3(VAR4->VAR16[VAR6]);
    }
    return 0;