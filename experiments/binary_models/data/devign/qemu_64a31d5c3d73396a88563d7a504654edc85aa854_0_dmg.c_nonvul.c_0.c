static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 > 0)
    {
        free(VAR4->VAR7);
        free(VAR4->VAR8);
        free(VAR4->VAR9);
        free(VAR4->VAR10);
        free(VAR4->VAR11);
    }
    free(VAR4->VAR12);
    free(VAR4->VAR13);
    FUN2(&VAR4->VAR14);
}