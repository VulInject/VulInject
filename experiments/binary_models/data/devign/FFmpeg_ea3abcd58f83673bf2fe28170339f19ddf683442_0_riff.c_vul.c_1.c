void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    assert(sizeof(*VAR4) == 16);
    FUN2(VAR2, *VAR4, sizeof(*VAR4));
}