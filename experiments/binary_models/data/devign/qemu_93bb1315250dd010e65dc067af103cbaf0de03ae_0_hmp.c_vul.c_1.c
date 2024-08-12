void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    VAR6 = FUN2(&VAR8);
    assert(!VAR8);
    if (!VAR6)
    {
        FUN3(VAR2, "");
        return;
    }
    while (VAR6)
    {
        if (strcmp(VAR6->VAR9->VAR10, "") == 0)
        {
            FUN3(VAR2, "" VAR11 "" VAR11 "" VAR11 "", VAR6->VAR9->VAR12, VAR6->VAR9->VAR13, VAR6->VAR9->VAR14, VAR6->VAR9->VAR15);
        }
        else
        {
            FUN3(VAR2, "" VAR11 "" VAR11 "" VAR11 "", VAR6->VAR9->VAR10, VAR6->VAR9->VAR12, VAR6->VAR9->VAR13, VAR6->VAR9->VAR14, VAR6->VAR9->VAR15);
        }
        VAR6 = VAR6->VAR16;
    }