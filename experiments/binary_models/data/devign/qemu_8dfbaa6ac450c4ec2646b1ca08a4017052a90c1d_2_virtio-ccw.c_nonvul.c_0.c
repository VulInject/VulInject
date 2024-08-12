static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    if (!VAR2->VAR7)
    {
        return;
    }
    VAR4 = FUN2(&VAR2->VAR8);
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        if (!FUN3(VAR4, VAR5))
        {
            continue;
        }
        VAR6 = FUN4(VAR2, VAR5, false, false);
        assert(VAR6 >= 0);
    }
    VAR2->VAR7 = false;
}