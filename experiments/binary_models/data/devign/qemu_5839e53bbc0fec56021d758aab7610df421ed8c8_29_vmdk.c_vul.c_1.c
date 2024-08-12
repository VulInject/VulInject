static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 == 0)
    {
        return;
    }
    VAR4->VAR6--;
    VAR4->VAR7 = FUN2(VAR4->VAR7, VAR4->VAR6 * sizeof(VAR8));
}