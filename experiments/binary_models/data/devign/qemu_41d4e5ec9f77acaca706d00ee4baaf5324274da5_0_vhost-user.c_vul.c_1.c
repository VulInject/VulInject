static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    if (VAR4->VAR5)
    {
        FUN3(VAR4->VAR5);
        FUN4(VAR4->VAR5);
        VAR4->VAR5 = NULL;
        if (VAR2->VAR6 == 0)
        {
            FUN5(&VAR4->VAR7, true);
            FUN6(VAR2);