void FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3 > 0);
    VAR2->VAR3--;
    if (VAR2->VAR3)
    {
        return;
    }
    FUN2(VAR2);
}