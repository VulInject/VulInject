static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    if (VAR2->VAR5 >= VAR6 - 1)
    {
        FUN2(&VAR2->VAR7);
        assert(VAR2->VAR5 < VAR6);
    }
    VAR2->VAR5++;
}