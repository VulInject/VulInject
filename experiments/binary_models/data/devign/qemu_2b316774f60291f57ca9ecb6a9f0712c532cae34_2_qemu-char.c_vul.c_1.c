static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6)
    {
        FUN2(VAR4->VAR6);
        VAR4->VAR6 = 0;
    }
    if (VAR4->VAR7)
    {
        VAR4->VAR6 = FUN3(VAR4->VAR7, VAR8, VAR9, VAR2);
    }
}