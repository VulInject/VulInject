static void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5)
{
    if (VAR2->VAR6.VAR7 && *VAR3 >= VAR2->VAR8.VAR9)
    {
        VAR2->VAR8 = VAR2->VAR6;
        VAR2->VAR6.VAR7 = NULL;
        assert((FUN2(&VAR2->VAR8) & 7) == 0);
        FUN3(&VAR2->VAR8, *VAR3 - *VAR4);
        *VAR5 = *VAR4 = *VAR5 + FUN2(&VAR2->VAR8) - *VAR3;
        *VAR3 = FUN2(&VAR2->VAR8);
    }
}