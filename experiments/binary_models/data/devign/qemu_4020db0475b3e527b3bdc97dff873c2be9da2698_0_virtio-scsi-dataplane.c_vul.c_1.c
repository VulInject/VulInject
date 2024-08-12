static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    int VAR7;
    if (VAR2->VAR8)
    {
        FUN4(&VAR2->VAR8->VAR9, VAR4, 0);
    }
    if (VAR2->VAR10)
    {
        FUN4(&VAR2->VAR10->VAR9, VAR4, 1);
    }
    if (VAR2->VAR11)
    {
        for (VAR7 = 0; VAR7 < VAR6->VAR12.VAR13 && VAR2->VAR11[VAR7]; VAR7++)
        {
            FUN4(&VAR2->VAR11[VAR7]->VAR9, VAR4, 2 + VAR7);
        }
        free(VAR2->VAR11);
        VAR2->VAR11 = NULL;
    }