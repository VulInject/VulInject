void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = (struct VAR3 *)VAR2->VAR5.VAR6.VAR7[2];
    assert(VAR4);
    if (VAR4->VAR8 > 0)
        FUN2(VAR2, 0, 0);
}