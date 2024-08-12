static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    if (VAR2->VAR5 == NULL)
    {
        return;
    }
    FUN2(&VAR2->VAR6);
    while (VAR2->VAR5 != NULL)
    {
        VAR4 = VAR2->VAR5;
        VAR2->VAR5 = VAR4->VAR7;
        if (!VAR2->VAR5)
        {
            VAR2->VAR8 = NULL;
        }
        FUN3(&VAR2->VAR6);
        VAR4->FUN4(VAR4->VAR9);
        FUN2(&VAR2->VAR6);
        if (VAR4->free)
        {
            FUN5(VAR4);
        }
        else
        {
            FUN6(&VAR4->VAR10, true);
        }
    }
    FUN3(&VAR2->VAR6);
    FUN7(&VAR11);
}