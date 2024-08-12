static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR6;
    if (VAR6 && VAR6->VAR7 && VAR6->VAR7 == VAR4->VAR7)
    {
        FUN3(VAR6->VAR7);
    }
}