static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3);
    FUN2(VAR2->VAR4);
    if (VAR2->VAR5 != -1)
    {
        close(VAR2->VAR5);
        FUN3(&VAR2->VAR6);
        FUN2(VAR2);