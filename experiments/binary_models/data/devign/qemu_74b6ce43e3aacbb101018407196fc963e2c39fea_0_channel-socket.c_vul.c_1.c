static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (VAR4->VAR5 != -1)
    {
        FUN3(VAR4->VAR5, NULL, 0);
        FUN4(VAR4->VAR5);
        VAR4->VAR5 = -1