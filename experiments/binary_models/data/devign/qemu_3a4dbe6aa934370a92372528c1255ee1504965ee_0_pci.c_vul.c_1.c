static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3.VAR4);
    if (VAR2->VAR5)
    {
        FUN2(VAR2->VAR5);
        VAR2->VAR5 = NULL;
    }
    FUN3(&VAR2->VAR3);