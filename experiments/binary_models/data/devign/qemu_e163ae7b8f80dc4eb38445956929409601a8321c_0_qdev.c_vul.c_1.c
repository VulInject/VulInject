void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    while ((VAR4 = FUN2(&VAR2->VAR5)) != NULL)
    {
        FUN3(VAR4);
    }
    if (VAR2->VAR6)
    {
        FUN4(VAR2, VAR7);
        VAR2->VAR6->VAR8--;
    }
    if (VAR2->VAR9)
    {
        FUN5(VAR2);
    }