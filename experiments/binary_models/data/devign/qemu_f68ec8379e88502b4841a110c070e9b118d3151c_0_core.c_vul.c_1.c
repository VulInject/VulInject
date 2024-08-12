void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == NULL)
    {
        FUN2(VAR2, 0);
        return;
    }
    FUN3(VAR2->VAR3, &VAR2->VAR4, 0, VAR5);
    FUN4(VAR2->VAR3, VAR6, VAR2);