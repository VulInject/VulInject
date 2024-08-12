static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (!VAR2)
        return;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        if (!VAR2->VAR6[VAR3])
            continue;
        for (VAR4 = 0; VAR4 < VAR2->VAR6[VAR3]->VAR7; VAR4++)
        {
            FUN2(&(VAR2->VAR6[VAR3]->VAR8[VAR4]->VAR9));
            FUN2(&(VAR2->VAR6[VAR3]->VAR8[VAR4]));
        }
        FUN2(&VAR2->VAR6[VAR3]->VAR8);
        FUN2(&(VAR2->VAR6[VAR3]->VAR10));
        FUN2(&VAR2->VAR6[VAR3]);
    }
    FUN2(&VAR2->VAR6);
    VAR2->VAR5 = 0;
}