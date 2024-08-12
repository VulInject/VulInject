void FUN1(VAR1 *VAR2, void *VAR3)
{
    struct VAR4 *VAR5 = VAR3;
    assert(!VAR5->VAR6.VAR7);
    VAR5->VAR6.VAR7 = 1;
}