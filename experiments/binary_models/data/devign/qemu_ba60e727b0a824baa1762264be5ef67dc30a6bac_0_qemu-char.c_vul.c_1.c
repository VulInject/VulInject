static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 != VAR7)
    {
        FUN2(VAR4->VAR6);
    }
    if (VAR4->VAR8 != VAR7)
    {
        FUN2(VAR4->VAR8);
    }
    if (VAR4->VAR9 != VAR7)
    {
        FUN3(VAR4->VAR9, 0);
    }
    FUN4(VAR2->VAR5);
    FUN4(VAR2);
}