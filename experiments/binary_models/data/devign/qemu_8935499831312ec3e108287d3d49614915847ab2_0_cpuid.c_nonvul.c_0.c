static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6)
{
    *VAR4 = VAR2->VAR7;
    *VAR6 = VAR2->VAR8;
    *VAR5 = VAR2->VAR9;
    if (FUN2() && !VAR2->VAR10)
    {
        FUN3(0, 0, NULL, VAR4, VAR5, VAR6);
    }
}