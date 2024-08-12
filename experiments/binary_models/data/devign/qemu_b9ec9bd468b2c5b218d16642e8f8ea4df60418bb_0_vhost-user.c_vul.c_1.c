static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    assert(VAR2->VAR5->VAR6 == VAR7);
    VAR4 = VAR2->VAR8;
    if (VAR4->VAR9 >= 0)
    {
        close(VAR4->VAR9);
        VAR4->VAR9 = -1;
    }
    FUN2(VAR4);
    VAR2->VAR8 = 0;
    return 0;