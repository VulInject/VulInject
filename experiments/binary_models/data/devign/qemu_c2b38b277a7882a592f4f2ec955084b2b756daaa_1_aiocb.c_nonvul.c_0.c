void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    assert(VAR3->VAR4 > 0);
    if (--VAR3->VAR4 == 0)
    {
        FUN2(VAR3);
    }
}