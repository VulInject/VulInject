void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3->VAR4, VAR2->VAR5, VAR2->VAR6);
    if (!VAR2->VAR7)
    {
        return;
    }
    FUN3(VAR2);
    FUN4(VAR2);
    VAR2->VAR8 = true;
    if (VAR2->VAR9)
    {
        FUN5(VAR2->VAR9);
    }
    else
    {
        FUN6(VAR2);
    }