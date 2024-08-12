static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR4->VAR7; VAR6++)
    {
        VAR8 *VAR9 = &VAR4->VAR10[VAR6];
        FUN2(&VAR9->VAR11);
    }
    return 0;