void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        return;
    }
    VAR2->VAR3 = false;
    FUN2(VAR2);
    if (VAR2->VAR4)
    {
        FUN3(VAR2->VAR4);
        VAR2->VAR4 = NULL;
    }
    else
    {
        FUN4(&VAR2->VAR5);
        FUN5(&VAR2->VAR6);
    }
    FUN6(&VAR2->VAR7);
    VAR2->VAR8->VAR9->FUN7(VAR2->VAR8->VAR10, 0, false);
    FUN8(&VAR2->VAR5);
    VAR2->VAR8->VAR9->FUN9(VAR2->VAR8->VAR10, 1, false);
    FUN10(&VAR2->VAR11);
}