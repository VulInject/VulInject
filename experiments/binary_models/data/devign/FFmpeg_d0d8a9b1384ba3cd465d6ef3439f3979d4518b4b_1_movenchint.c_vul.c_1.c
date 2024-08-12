void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    FUN2(&VAR2->VAR7);
    FUN3(&VAR2->VAR8);
    if (!VAR4)
        return;
    if (VAR4->VAR9)
    {
        FUN4(VAR4);
        FUN5(VAR4->VAR9, &VAR6);
        FUN6(VAR6);
    }
    FUN7(&VAR4->VAR10[0]->VAR11);
    FUN7(&VAR4->VAR11);
    FUN6(VAR4->VAR10[0]);
    FUN2(&VAR4);