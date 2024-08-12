static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4)
        for (VAR3 = 0; VAR3 < VAR5; VAR3++)
        {
            FUN2(&VAR2->VAR4[VAR3].VAR6);
            FUN2(&VAR2->VAR4[VAR3].VAR7);
        }
    FUN2(&VAR2->VAR4);
    FUN2(&VAR2->VAR8);
    FUN2(&VAR2->VAR9);
    FUN2(&VAR2->VAR10);
    FUN2(&VAR2->VAR11);
    VAR2->VAR12 = NULL;