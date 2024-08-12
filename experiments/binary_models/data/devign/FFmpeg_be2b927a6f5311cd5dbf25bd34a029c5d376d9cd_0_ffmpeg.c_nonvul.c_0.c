static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    FUN2(VAR4->VAR5 > 0);
    VAR4->VAR5--;
    if (!VAR4->VAR5)
    {
        VAR4->VAR6 = VAR2->VAR7;
        VAR2->VAR7 = VAR4;
    }
}