void *FUN1(VAR1 *VAR2, size_t VAR3)
{
    size_t VAR4 = FUN2(VAR2);
    assert(VAR4 > 0);
    if (VAR3 == 0)
    {
        VAR3 = VAR4;
    }
    return FUN3(VAR4, VAR3);
}