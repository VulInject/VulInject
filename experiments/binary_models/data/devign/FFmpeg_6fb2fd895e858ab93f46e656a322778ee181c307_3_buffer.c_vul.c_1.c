void FUN1(VAR1 *VAR2)
{
    if (!VAR2)
        return;
    FUN2(VAR2->VAR3->VAR4 > 0);
    if (!(--VAR2->VAR3->VAR4))
    {
        if (!VAR2->VAR3->free)
        {
            FUN3(VAR2);
            return;
        }
        VAR2->VAR3->free(VAR2->VAR3);
    }
    if (VAR2->VAR5 != VAR2->VAR6)
        FUN4(&VAR2->VAR5);
    if (VAR2->VAR7)
        FUN4(&VAR2->VAR7->VAR8);
    FUN4(&VAR2->VAR7);
    FUN4(&VAR2->VAR9);
    FUN5(VAR2);